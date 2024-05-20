#include "header.h"

// Fungsi untuk menambahkan simpul baru di depan linked list
void tambahMahasiswa(Node*& head, string nama) {
    Node* newNode = new Node;
    newNode->nama = nama;
    for (int i = 0; i < 14; ++i) {
        newNode->kehadiran[i] = 0; // Set jumlah kehadiran awal ke 0 untuk setiap pertemuan
    }
    newNode->next = head;
    head = newNode;
    cout << "Mahasiswa " << nama << " berhasil ditambahkan." << endl;
}

// Fungsi untuk menambahkan kehadiran mahasiswa pada pertemuan tertentu
void tambahKehadiran(Node* head, string nama, int pertemuan) {
    Node* current = head;
    while (current != NULL) {
        if (current->nama == nama) {
            if (pertemuan >= 1 && pertemuan <= 14) {
                current->kehadiran[pertemuan - 1]++;
                cout << "Kehadiran mahasiswa " << nama << " pada pertemuan " << pertemuan << " berhasil ditambahkan." << endl;
            } else {
                cout << "Nomor pertemuan tidak valid." << endl;
            }
            return;
        }
        current = current->next;
    }
    cout << "Mahasiswa tidak ditemukan." << endl;
}

// Fungsi untuk mencetak data mahasiswa dan jumlah kehadiran pada setiap pertemuan
void cetakData(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << "Mahasiswa: " << current->nama << endl;
        for (int i = 0; i < 14; ++i) {
            cout << "Pertemuan " << i + 1 << ": " << current->kehadiran[i] << " kehadiran" << endl;
        }
        cout << endl;
        current = current->next;
    }
}
