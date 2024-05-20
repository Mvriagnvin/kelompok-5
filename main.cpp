#include "header.h"

int main() {
    Node* head =NULL; // Inisialisasi linked list kosong

    int pilihan;
    do {
        cout << "-------------------------" << endl;
        cout << "      Menu Pilihan" << endl;
        cout << "-------------------------" << endl;
        cout << "  [1] Tambah Mahasiswa" << endl;
        cout << "  [2] Tambah Kehadiran Mahasiswa" << endl;
        cout << "  [3] Cetak Seluruh Data" << endl;
        cout << "  [0] Keluar" << endl << endl;
        cout << "Masukan Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                {
                    string nama;
                    cout << "Masukan Nama Mahasiswa: ";
                    cin >> nama;
                    tambahMahasiswa(head, nama);
                    break;
                }
            case 2:
                {
                    string nama;
                    int pertemuan;
                    cout << "Masukan Nama Mahasiswa: ";
                    cin >> nama;
                    cout << "Masukan Nomor Pertemuan: ";
                    cin >> pertemuan;
                    tambahKehadiran(head, nama, pertemuan);
                    break;
                }
            case 3:
                cetakData(head);
                break;
            case 0:
                cout << "Program selesai." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (pilihan != 0);

    // Hapus semua simpul untuk mencegah kebocoran memori
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
