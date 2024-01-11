#include <iostream>

using namespace std;

// Inisialisasi struct
struct Mahasiswa {
    int id;
    string nama;
    // Pointer untuk menampung percabangan kiri dan kanan
    Mahasiswa *kiri, *kanan;
} *root;

// Fungsi push untuk menambah data
void push(Mahasiswa *&sekarang, int id, const string& nama) {
    // Jika pointer sekarang kosong maka akan membuat blok data baru
    if (sekarang == NULL) {
        sekarang = new Mahasiswa;
        // Mengisi data
        sekarang->id = id;
        sekarang->nama = nama;
        sekarang->kiri = sekarang->kanan = NULL;
    // Jika tidak kosong, maka akan dibandingkan apakah ID yang 
    // ingin dimasukkan lebih kecil dari pada root
    // Kalau iya, maka belok ke kiri dan lakukan rekursif 
    // terus menerus hingga kosong
    } else if (id < sekarang->id) {
        push(sekarang->kiri, id, nama);
    // Jika lebih besar, belok ke kanan
    } else if (id >= sekarang->id) {
        push(sekarang->kanan, id, nama);
    }
}

// InOrder : kiri, cetak, kanan
void inOrder(Mahasiswa *sekarang) {
    if (sekarang != NULL) {
        inOrder(sekarang->kiri);
        cout << "ID: " << sekarang->id << ", Nama: " << sekarang->nama << " -> ";
        inOrder(sekarang->kanan);
    }
}

int main() {
    int id;
    string nama;

    // Input data mahasiswa
    while (true) {
        cout << "Masukkan NIM mahasiswa (masukkan -1 untuk selesai): ";
        cin >> id;
        if (id == -1) {
            break;
        }

        cout << "Masukkan nama mahasiswa: ";
        cin.ignore(); // Menghapus karakter newline dari buffer
        getline(cin, nama);

        push(root, id, nama);
    }

    // Menampilkan data secara in-order
    cout << "\nData Mahasiswa (Penelusuran In-Order):\n";
    inOrder(root);

    cin.ignore(); // Sebagai pengganti getchar()
    return 0;
}

