#include <iostream>
using namespace std;

int main () {
    float Farhenheit;

    cout << "Masukkan Nilai Farhenheit: ";
    cin >> Farhenheit;

    float celcius = (Farhenheit - 32) * 5/9;

    cout << "Suhu dalam Celcius: " << celcius << endl;
    return 0;


}