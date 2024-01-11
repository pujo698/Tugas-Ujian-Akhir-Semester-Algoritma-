#include <iostream>
#include <string>

const int MAX_N = 10;

std::string mataPelajaran[MAX_N];
int data[MAX_N], n;

void tukar(int a, int b) {
    int t = data[b];
    data[b] = data[a];
    data[a] = t;

    std::string temp = mataPelajaran[b];
    mataPelajaran[b] = mataPelajaran[a];
    mataPelajaran[a] = temp;
}

void input() {
    std::cout << "Tugas UAS Algoritma Dan Struktur Data\n";
    std::cout << "Kelompok 1 \n\n";
    std::cout << "Masukkan jumlah nilai siswa: ";
    std::cin >> n;
    std::cout << "====================\n";

    for (int i = 0; i < n; i++) {
        std::cout << "Masukkan nilai mata pelajaran ke-" << i + 1 << " = ";
        std::cin >> data[i];
        std::cout << "Masukkan nama mata pelajaran ke-" << i + 1 << " = ";
        std::cin >> mataPelajaran[i];
    }
    std::cout << "\n";
}

void tampil() {
    for (int i = 0; i < n; i++) {
        std::cout << mataPelajaran[i] << ": " << data[i] << " ";
    }
    std::cout << "\n";
}

void bubblesort() {
    for (int i = 1; i < n; i++) {
        for (int j = n - 1; j >= i; j--) {
            if (data[j] < data[j - 1]) {
                tukar(j, j - 1);
            }
        }
    }
}

int main() {
    input();
    std::cout << "Data sebelum diurutkan: ";
    tampil();

    bubblesort();

    std::cout << "Data setelah diurutkan (Bubble Sort): ";
    tampil();

    return 0;
}
