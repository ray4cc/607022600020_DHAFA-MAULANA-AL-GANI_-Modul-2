#include <iostream>
#include <string>
using namespace std;

int main () {
    string nama;
    int pilihan;
    float saldo = 10000.0;

    cout << " ATM BANK ALEXANDER GEORGE" << endl;
    cout << " Masukkan Nama Anda : ";
    cin >> nama;
    cout << " 1. Cek Saldo" << endl;
    cout << " 2. Tarik Tunai" << endl;
    cout << " 3. Keluar" << endl;
    cout << " Masukkan Pilihan Anda 1 - 3: ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            cout << " Total Saldo Anda Adalah : " <<  saldo << endl;
            break;
        case 2:
            cout << "Melakukan Tarik Tunai, Masukkan Jumlah yang Ingin di Tarik : " << endl;
            float tarik;
            cin >> tarik;
            if (tarik > saldo) {
                cout << "Saldo Anda Tidak Cukup" << endl;
            } else {
                saldo -= tarik;
                cout << "Saldo Anda Sekarang : " << saldo << endl;
            }
            break;
        default:
            cout << " Terima Kasih Sudah Menggunakan BANK GEORGE ALEXANDER " << endl;
    }

    return 0;
}