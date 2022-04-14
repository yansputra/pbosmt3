#include <iostream>

using namespace std;

int main(){
    double panjang, lebar, hasilLuas;
  

    cout << "= menghitung luas persegi panjang =" << endl;
    cout << "==============================" << endl;
    cout << "panjang            : "; cin >> panjang;
    cout << "lebar              : "; cin >> lebar;

    hasilLuas = (double)panjang*lebar;

    cout << "Ukuran Luas        : " << hasilLuas << endl;

    return 0;
}
