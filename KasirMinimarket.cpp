#include <iostream>
#include <string>
using namespace std;

int main () {
    string namaPembeli;
    float total;
    float diskon;
    float bayar;

    cout << " Masukkan Nama Pembeli : ";
    cin >> namaPembeli;
    cout << " Masukkan Total Belanja : ";
    cin >> total;

    if (total >= 500000) {
        diskon = total * 0.2;././
    } else if (total >= 100000) {
        diskon = total * 0.1;
    } else {
        diskon = 0;
    }
    
    cout << " Diskon Anda : Rp " << diskon << endl;
    
    bayar = total - diskon;
    
    cout << " Jumlah yang Harus Dibayar : Rp " << bayar << endl;
    cout << " Terima Kasih " << namaPembeli << " Telah Berbelanja di Toko Kami" << endl;

    return 0;

}
