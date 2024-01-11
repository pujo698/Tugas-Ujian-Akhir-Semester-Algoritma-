#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Struktur data untuk merepresentasikan sisi (koneksi) antar perangkat
struct Edge {
    int targetNode;
    int latency;

    Edge(int target, int lat) : targetNode(target), latency(lat) {}
};

// Struktur data untuk merepresentasikan perangkat (simpul) dalam jaringan
struct Node {
    int nodeId;
    vector<Edge> edges;

    Node(int id) : nodeId(id) {}
};

// Kelas untuk merepresentasikan jaringan
class Network {
public:
    unordered_map<int, Node> nodes;

    // Fungsi untuk menambahkan perangkat ke dalam jaringan
    void addNode(int nodeId) {
        nodes[nodeId] = Node(nodeId);
    }

    // Fungsi untuk menambahkan koneksi antar perangkat beserta latensinya
    void addEdge(int sourceNode, int targetNode, int latency) {
        nodes[sourceNode].edges.push_back(Edge(targetNode, latency));
        nodes[targetNode].edges.push_back(Edge(sourceNode, latency));  // Koneksi dua arah
    }

    // Fungsi untuk mencetak informasi jaringan
    void printNetwork() {
        for (const auto& entry : nodes) {
            cout << "Node " << entry.first << ": ";
            for (const auto& edge : entry.second.edges) {
                cout << "(" << edge.targetNode << ", " << edge.latency << ") ";
            }
            cout << endl;
        }
    }

    // Fungsi untuk menghitung total latensi jaringan
    int calculateTotalLatency() {
        int totalLatency = 0;
        for (const auto& entry : nodes) {
            for (const auto& edge : entry.second.edges) {
                totalLatency += edge.latency;
            }
        }
        return totalLatency;
    }
};

int main() {
    // Membuat objek jaringan
    Network network;

    // Menambahkan perangkat (simpul) ke dalam jaringan
    network.addNode(1);
    network.addNode(2);
    network.addNode(3);

    // Menambahkan koneksi antar perangkat beserta latensinya
    network.addEdge(1, 2, 5);
    network.addEdge(2, 3, 8);
    network.addEdge(1, 3, 10);

    // Menampilkan informasi jaringan
    cout << "Informasi Jaringan:" << endl;
    network.printNetwork();

    // Menghitung total latensi jaringan
    int totalLatency = network.calculateTotalLatency();
    cout << "\nTotal Latensi Jaringan: " << totalLatency << endl;

    return 0;
}
[
