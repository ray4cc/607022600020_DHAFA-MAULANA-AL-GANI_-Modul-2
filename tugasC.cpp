#include <iostream>
using namespace std;

int main() {
    float panjangKain = 50.5;
    float terpakai;

    cout << " Masukkan jumlah kain yang terpakai: ";
    cin >> terpakai;   

    float sisaKain = panjangKain - terpakai;
    
    cout << "Sisa kain: " << sisaKain << "meter";

    return 0;

}