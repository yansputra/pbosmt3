//riyan saputra 20200801081
#include <iostream> // digunakan sebagai standar input output operasi
using namespace std; // digunakan untuk memanggil namespace yang memiliki nama 'std'

int main(){ // merupakan fungsi utama yang akan dibaca oleh kompilator
    int n,j,i,s;//menambahkan huruf j dan s karena di looping for nya terdapat j dan s 
    
    cout<<"masukan jumlah baris :"; // menampilkan hasil output
    cin>>n; //menginputkan suatu variabel
    for(i= 1;i<=n;i++){ //mengontroll perulangan barisnya dan perulangan di bawahnya
        for( s = 1;s<n;s++) // s untuk mengontroll ouput yang kosong
        cout<<" ";
        for(j= 1;j<=i;j++) // j untuk mengontroll output yang *
        cout<<"*";
        cout<<"\n";
    }    
    return 0; // Menyatakan hasil keluaran dari fungsi main() adalah 0
}