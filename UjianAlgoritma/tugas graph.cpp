#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Struktur data untuk merepresentasikan sisi graf
struct Edge {
    int destination;
};

// Struktur data untuk merepresentasikan simpul graf
struct Node {
    vector<Edge> edges;
    bool visited;  // Flag untuk menandai apakah simpul telah dikunjungi
};

// Fungsi DFS (Depth-First Search) untuk mencari komponen terhubung
void DFS(vector<Node>& graph, int currentNode) {
    // Tandai simpul sebagai telah dikunjungi
    graph[currentNode].visited = true;

    // Iterasi melalui semua tetangga simpul saat ini
    for (const Edge& edge : graph[currentNode].edges) {
        int nextNode = edge.destination;

        // Lakukan DFS pada simpul tetangga jika belum dikunjungi
        if (!graph[nextNode].visited) {
            DFS(graph, nextNode);
        }
    }
}

// Fungsi untuk menghitung jumlah komponen terhubung dalam graf
int countConnectedComponents(vector<Node>& graph) {
    int numComponents = 0;

    // Reset flag visited untuk semua simpul
    for (Node& node : graph) {
        node.visited = false;
    }

    // Lakukan DFS untuk setiap simpul yang belum dikunjungi
    for (int i = 0; i < graph.size(); ++i) {
        if (!graph[i].visited) {
            DFS(graph, i);
            ++numComponents;
        }
    }

    return numComponents;
}

// Fungsi untuk menemukan simpul pusat dalam graf
void findCentralNodes(const vector<Node>& graph) {
    vector<int> degrees(graph.size(), 0);  // Vektor untuk menyimpan derajat setiap simpul

    // Menghitung derajat setiap simpul
    for (int i = 0; i < graph.size(); ++i) {
        degrees[i] = graph[i].edges.size();
    }

    // Temukan simpul dengan derajat tertinggi sebagai simpul pusat
    int maxDegree = *max_element(degrees.begin(), degrees.end());
    cout << "Simpul Pusat (Central Nodes): ";
    for (int i = 0; i < graph.size(); ++i) {
        if (degrees[i] == maxDegree) {
            cout << i << " ";
        }
    }
    cout << endl;
}

// Fungsi untuk menemukan simpul tepi dalam graf
void findPeripheralNodes(const vector<Node>& graph) {
    vector<int> degrees(graph.size(), 0);  // Vektor untuk menyimpan derajat setiap simpul

    // Menghitung derajat setiap simpul
    for (int i = 0; i < graph.size(); ++i) {
        degrees[i] = graph[i].edges.size();
    }

    // Temukan simpul dengan derajat terendah sebagai simpul tepi
    int minDegree = *min_element(degrees.begin(), degrees.end());
    cout << "Simpul Tepi (Peripheral Nodes): ";
    for (int i = 0; i < graph.size(); ++i) {
        if (degrees[i] == minDegree) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    // Jumlah simpul dan sisi dalam graf
    int numNodes, numEdges;
    cout << "Masukkan jumlah simpul dan sisi: ";
    cin >> numNodes >> numEdges;

    // Membuat graf dengan jumlah simpul yang telah ditentukan
    vector<Node> graph(numNodes);

    // Memasukkan sisi ke dalam graf
    cout << "Masukkan sisi (source destination):" << endl;
    for (int i = 0; i < numEdges; ++i) {
        int source, destination;
        cin >> source >> destination;

        // Menyimpan sisi ke dalam struktur data graf
        Edge edge1;
        edge1.destination = destination;
        graph[source].edges.push_back(edge1);

        Edge edge2;
        edge2.destination = source;
        graph[destination].edges.push_back(edge2);  // Graf tidak berarah
    }

    // Menghitung dan menampilkan jumlah komponen terhubung
    int numComponents = countConnectedComponents(graph);
    cout << "Jumlah Komponen Terhubung: " << numComponents << endl;

    // Menemukan dan menampilkan simpul pusat
    findCentralNodes(graph);

    // Menemukan dan menampilkan simpul tepi
    findPeripheralNodes(graph);

    return 0;
}
