#include <iostream>
#include <string>
using namespace std;

// Struktur untuk simpul linked list
struct Node {
    string nama; // Nama mahasiswa
    int kehadiran[14]; // Jumlah kehadiran pada setiap pertemuan
    Node* next; // Pointer ke simpul selanjutnya
};

// Deklarasi fungsi-fungsi
void tambahMahasiswa(Node*& head, string nama);
void tambahKehadiran(Node* head, string nama, int pertemuan);
void cetakData(Node* head);
