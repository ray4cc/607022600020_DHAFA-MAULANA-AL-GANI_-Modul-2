#include <iostream>
#include <string>
using namespace std;

int main () {
    string namaPembeli;
    string namaBarang;
    char tambah = 'y';
    int hargaBarang;
    int jumlahBarang;
    int jumlahHarga;
    int totalHarga= 0;

    cout << "==============================================" << endl;
    cout << "==============================================" << endl;


    cout << "  SELAMAT DATANG DI KASIR SEDERHANA DAPA " << endl;


    cout << "==============================================" << endl;
    cout << "==============================================" << endl;


    cout << "Masukkan Nama Pembeli: ";
    cin >> namaPembeli;

    while (tambah == 'y') {

        cout << "Masukkan Nama Barang: ";
        cin.ignore();
        getline(cin, namaBarang);

         if (namaBarang == "Teh Pucuk") {
            hargaBarang = 4000;

            cout << " Ga Air Putih aja bang? Beli brp bang" << endl;
            cin >> jumlahBarang;
        } else if (namaBarang == "Indomie") {
            hargaBarang = 3500;

            cout << " Anak Kos Bang? Beli Berapa" << endl;
            cin >> jumlahBarang;
        } else if (namaBarang == "Sampurna Mild") {
            hargaBarang = 32000;

            cout << " Mau Brp Bang?" << endl;
            cin >> jumlahBarang;
        } else {
            cout << "Gada Bang." << endl;
        }

        jumlahHarga = hargaBarang * jumlahBarang;
        totalHarga += jumlahHarga;

        cout << " Mau Nambah Barang Lagi? (y/n) : ";
        cin >> tambah;
    }

    cout << "Jumlah Harga Belanja Lu : " << totalHarga << endl;

    cout << "==============================================" << endl;
    cout << "==============================================" << endl;

    
    cout << " MAKASI YA UDA BELANJA DI @dhafaamaulana" << endl;


    cout << "==============================================" << endl;
    cout << "==============================================" << endl;

    return 0;
}