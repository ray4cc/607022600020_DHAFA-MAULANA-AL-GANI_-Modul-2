#include <iostream>
using namespace std;

int main () {
    int harga; 
    int uang;
    int bayar;
    char pilihan;

    cout << "A. Minuman A - 5000" << endl;
    cout << "B. Minuman B - 7000" << endl;
    cout << "C. Minuman C - 10000" << endl;

    cout << "Masukkan Pilihan Anda (A B C): ";
    cin >> pilihan;

    switch (pilihan) {
        case 'A' : 
        case 'a' : 
        harga = 5000;
        cout << " Bayar Rp. 5000 " << endl;
        break;
        case 'B' :
        case 'b' :
        harga = 7000;
        cout << " Bayar Rp. 7000" << endl;
        break;
        case 'C' :
        case 'c' :
        harga = 10000;
        cout << " Bayar Rp. 10000 " << endl;
        break;
        default :
        cout << " Tidak ada yang harus di bayar " << endl;
    }

    cout << " Masukkan Uang Anda Rp : " << endl;
    cin >> uang;


   if (uang >= harga) {
    cout << "Berhasil Membeli Minuman, Silahkan Ambil" << endl;
    bayar = uang - harga;
    cout << "Sisa Uang Anda: Rp. " << bayar << endl;
    }
    else {
    cout << "Uang Anda Tidak Cukup" << endl;
}

    return 0;

}