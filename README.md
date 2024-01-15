# Kelompok 1 Algoritma dan Struktur Data

## Anggota Kelompok 
1. Alif Naufal Adani-32602300006
2. Mohammad Fahd Fadllurrohman-32602300007
3. Wahid Sandy Pujo Dzulhijayanto-32602300015
4. Muhammad Yanuar Anshori-32602300028
5. Lia Rahma Asnaini-32602300033

# Deskripsi Project

## Graph

program yang dibuat merupakan implementasi program untuk analisis graf. Program ini menggunakan konsep struktur data graf dengan menyimpan sisi-sisi antar simpul dalam vektor. Program dapat menghitung jumlah komponen terhubung dalam graf, menemukan simpul pusat (central nodes) berdasarkan derajat tertinggi, dan menemukan simpul tepi (peripheral nodes) berdasarkan derajat terendah.

## Link List

program yang telah dibuat mengimplementasikan linked list sederhana, dimana setiap elemen direpresentasikan oleh struktur data Node. Program memungkinkan pengguna untuk secara interaktif memasukkan data baru ke linked list dan mencetak isi linked list setelah pengguna selesai memasukkan data. Selain itu, program memastikan penghapusan semua node setelah digunakan untuk menghindari kebocoran memori. Ini merupakan contoh dasar penggunaan linked list dalam C++ yang mencakup penambahan, pencetakan, dan penghapusan elemen pada struktur data tersebut.

## Short

program yang dibuat adalah implementasi program yang melakukan pengurutan data nilai siswa pada beberapa mata pelajaran menggunakan algoritma Bubble Sort. Program ini meminta pengguna untuk memasukkan jumlah nilai siswa beserta nilai dan nama mata pelajaran secara interaktif. Setelah mendapatkan input, program menampilkan data sebelum diurutkan, kemudian menerapkan algoritma Bubble Sort untuk mengurutkan nilai siswa dan nama mata pelajaran secara ascending, dan akhirnya menampilkan hasil pengurutan. 

## Tree

kami membuat program c++ yang mengimplementasikan struktur data pohon biner pencarian (Binary Search Tree - BST) untuk menyimpan data mahasiswa berupa NIM dan nama. Setiap node dalam pohon memiliki data NIM, nama, serta pointer ke anak kiri (kiri) dan anak kanan (kanan). Fungsi push digunakan untuk menambahkan data baru ke dalam pohon berdasarkan relasi NIM. Program memungkinkan pengguna untuk memasukkan data mahasiswa secara interaktif dan kemudian menampilkan data secara terurut (in-order traversal) berdasarkan NIM. Pohon biner ini membantu pengelolaan dan pencarian data secara efisien dengan memanfaatkan sifat terurutnya.

# Petunjuk Cara Penggunaan
## Tree
### Langkah 1: Menambahkan Data Mahasiswa

1. Jalankan program dengan mengkompilasi dan menjalankan binary hasil kompilasi.
2. Masukkan NIM mahasiswa saat diminta. Jika ingin mengakhiri, masukkan -1.
3. Setelah semua data dimasukkan, program akan menampilkan data mahasiswa secara terurut berdasarkan ID.

### Langkah 2: Menampilkan Data Mahasiswa

1. Setelah memasukkan data, program akan menampilkan data mahasiswa secara in-order.
2. Data ditampilkan dalam format "ID: `<ID>`, Nama: `<Nama>`".

### Langkah 3: Menghentikan Program

1. Setelah data ditampilkan, program akan menunggu masukan tambahan.
2. Tekan Enter atau pilih cara sesuai kebutuhan untuk mengakhiri program.

### Catatan:

- Pastikan untuk memasukkan data mahasiswa sesuai instruksi dan menghentikan input dengan memasukkan -1 saat diminta.
- Program akan menampilkan data mahasiswa secara in-order setelah semua data dimasukkan.

## Link-list

### Langkah 1: Menambahkan Elemen ke Linked List

1. Jalankan program dengan mengkompilasi dan menjalankan binary hasil kompilasi.
2. Program akan meminta Anda untuk memasukkan data baru ke dalam linked list.
3. Masukkan data baru saat diminta.
4. Program akan menanyakan apakah Anda ingin menambahkan elemen lagi. Jawab dengan 'y' atau 'Y' untuk menambahkan, dan 'n' atau 'N' untuk mengakhiri.

### Langkah 2: Melihat Hasil Linked List

1. Setelah selesai memasukkan elemen, program akan mencetak linked list yang telah dibuat.
2. Linked list akan ditampilkan dalam format "elemen1 -> elemen2 -> ... -> NULL".

### Langkah 3: Mengakhiri Program

1. Program akan menunggu jawaban setelah mencetak linked list.
2. Tekan Enter atau pilih cara sesuai kebutuhan untuk mengakhiri program.

### Catatan:

- Pastikan memasukkan data sesuai dengan yang diminta.
- Anda dapat menambahkan sejumlah elemen ke dalam linked list sesuai keinginan.
- Program akan menghapus semua node linked list setelah selesai digunakan untuk mencegah kebocoran memori.
  
## Graph
### Langkah 1: Masukkan Jumlah Simpul dan Sisi

1. Jalankan program dengan mengkompilasi dan menjalankan binary hasil kompilasi.
2. Program akan meminta Anda untuk memasukkan jumlah simpul dan sisi graf.

### Langkah 2: Masukkan Sisi Graf

1. Masukkan sisi graf satu per satu sesuai petunjuk program.
2. Untuk setiap sisi, masukkan pasangan simpul (source destination).

### Langkah 3: Hasil Analisis Graf

1. Setelah memasukkan sisi graf, program akan menghitung jumlah komponen terhubung dan menampilkannya.
2. Program akan menemukan dan menampilkan simpul pusat (central nodes) dalam graf.
3. Program akan menemukan dan menampilkan simpul tepi (peripheral nodes) dalam graf.

### Langkah 4: Mengakhiri Program

1. Program akan menunggu jawaban setelah menampilkan hasil analisis.
2. Tekan Enter atau pilih cara sesuai kebutuhan untuk mengakhiri program.

### Catatan:

- Pastikan memasukkan jumlah simpul dan sisi sesuai kebutuhan.
- Ikuti petunjuk program untuk memasukkan sisi graf dengan benar.
- Hasil analisis graf akan ditampilkan setelah memasukkan semua sisi.

## Short
### Langkah 1: Memasukkan Data Nilai dan Nama Mata Pelajaran

1. Jalankan program dengan mengkompilasi dan menjalankan binary hasil kompilasi.
2. Program akan meminta Anda untuk memasukkan jumlah nilai siswa.
3. Untuk setiap mata pelajaran, masukkan nilai dan nama mata pelajaran sesuai petunjuk program.

### Langkah 2: Tampilan Data Sebelum Diurutkan

1. Setelah memasukkan semua nilai dan nama mata pelajaran, program akan menampilkan data sebelum diurutkan.
2. Data ini akan mencakup nilai dan nama mata pelajaran yang telah dimasukkan.

### Langkah 3: Melakukan Bubble Sort

1. Program akan melakukan pengurutan menggunakan algoritma Bubble Sort.
2. Setelah pengurutan selesai, program akan menampilkan data setelah diurutkan.

### Langkah 4: Mengakhiri Program

1. Program akan menunggu jawaban setelah menampilkan data setelah diurutkan.
2. Tekan Enter atau pilih cara sesuai kebutuhan untuk mengakhiri program.

### Catatan:

- Pastikan memasukkan jumlah nilai siswa dan data nilai sesuai dengan petunjuk.
- Ikuti petunjuk program untuk memasukkan nilai dan nama mata pelajaran dengan benar.
- Program akan memberikan hasil pengurutan menggunakan Bubble Sort pada akhir eksekusi.
- 
# penjelasan lebih lanjut menggunkan video youtube
## Graph
[Graph](https://youtu.be/W8ItZiyeVLs)
## Link-list
[Link-list](https://youtu.be/kbHc6i0rZSE)
## Tree
[Tree](https://youtu.be/S1H_gmRln-o)
## Short
[Short](https://youtu.be/bGV6B6mAiug)
# kesimpulan 

Repository ini berisi tentang aplikasi sederhana implementasi struktur data yang terdiri dari Link-list, Tree, short, Dan graph. Diharapkan settelah membuka repositori ini bisa memecahkan permasalahan yang ada, serta menunjukan pemahaman tentang struktur data.
