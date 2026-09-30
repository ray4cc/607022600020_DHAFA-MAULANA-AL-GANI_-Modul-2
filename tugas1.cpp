#include <iostream>
using namespace std;

int main (){
    float jamKerja;
    float gaji = 50000;

    cout << " Masukkan Jam Kerja :";
    cin >> jamKerja;

    float totalGaji = gaji * jamKerja;
  
    cout << "Total Gaji: Rp " << totalGaji << endl;
    return 0;


}