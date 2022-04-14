//riyan saputra 20200801081 b pro sesi 8
//pointer sederhana
#include<iostream>//memanggil library iostream

using namespace std; // digunakan untuk memanggil namespace yang memiliki nama 'std'


int main() // merupakan fungsi utama yang akan dibaca oleh kompilator
{
  int riyan = 2001; //integer riyan yang di set ke 2001
  int *riyanPtr; //alamat pointer
  riyanPtr = &riyan; //meng-set riyanPtr yang pointer sebagai &riyan
  cout<<"Nilai riyan = "<<riyan<<endl;//menampilkan nilai riyan berdasarkan alamat riyan yang ditentukan
  cout<<"Alamat riyan = "<<&riyan<<endl;//menampilkan alamat riyan berdasarkan alamat riyan yang ditentuka
  cout<<"Alamat riyan = "<<riyanPtr<<endl; //menampilkan alamat riyan berdasarkan alamat riyanPtr yang ditentuka
  cout<<"Nilai yang disimpan pada alamat "; //menampilkan nilai yang disimpan pada alamt
  cout<<riyanPtr<<" adalah "<<riyanPtr; //menampilkan isi dari riyanptr 
  cout<<"\n\n"; // memberi spasi pada layar

  return 0; // Menyatakan hasil keluaran dari fungsi main() adalah 0
}