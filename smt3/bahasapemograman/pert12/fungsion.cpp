//riyan saputra 20200801081 b pro 12
//Deklarasi dan Pemanggilan Function
#include <iostream>
using namespace std;
int hasil; //variabel global
void cetakPesan (){ // fungsi tanpa parameter
 cout<<"Belajar fungsi"<<endl<<endl;
}
int tambah (int a, int b){ //fungsi dengan parameter
 hasil = a+b;
 //atau kita bisa menggunakan return
 return a+b;
}
int main () {
 cetakPesan(); // pemanggilan fungsi tanpa parameter
 cout<<"( 10 + 6 ) = "<<tambah(10,6)<<endl; // pemanggilan fungsi dengan parameter
 cout<<"hasil      = "<<hasil<<endl;

 return 0;
}
