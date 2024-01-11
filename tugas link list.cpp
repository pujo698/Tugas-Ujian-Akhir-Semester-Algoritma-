#include <iostream>

// Struktur untuk merepresentasikan node dalam linked list
struct Node {
    int data;
    Node* next;
};

// Fungsi untuk menambahkan elemen ke dalam linked list
void addNode(Node*& head, int newData) {
    // Membuat node baru
    Node* newNode = new Node;
    
    // Mengisi data ke dalam node baru
    newNode->data = newData;
    
    // Menjadikan node baru sebagai head
    newNode->next = head;
    head = newNode;
}

// Fungsi untuk mencetak linked list
void printList(Node* node) {
    while (node != NULL) {
        std::cout << node->data << " -> ";
        node = node->next;
    }
    std::cout << "NULL" << std::endl;
}

int main() {
    // Inisialisasi linked list
    Node* head = NULL;

    // Input dari pengguna untuk menambahkan elemen ke dalam linked list
    int newData;
    char choice;

    do {
        std::cout << "Masukkan data baru: ";
        std::cin >> newData;

        // Menambahkan elemen ke dalam linked list
        addNode(head, newData);

        std::cout << "Tambahkan elemen lagi? (y/n): ";
        std::cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    // Mencetak linked list
    std::cout << "Linked List: ";
    printList(head);

    // Menghapus semua node setelah digunakan
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}

