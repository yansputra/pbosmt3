#include <iostream>
using namespace std;

int main(){   //ini adalah deklarasi fungsi main pada perogram ini

	//tipe data yang di gunakan pada perogram ini adalah int 
	//dan variabel yang di gunakan pada perogram ini ada 3 variabel 
	//yaitu var uayah var ukalian varberartiusiakaliansekarangadalah
	//saya ingin mengurangi umur ayah dan umur kalian
	int uayah,ukalian,berartiusiakaliansekarangadalah;
	  
	//menampilkan value
	cout <<" uayah  :" ; cin>> uayah; //memasukan value uayah  41
	cout <<" ukalian:" ; cin>> ukalian; //memasukan value ukalian  20
	 
	
	// menjalankan var uayah di kuragi var ukalian
	berartiusiakaliansekarangadalah  =uayah-ukalian;  
	//menampilkan output umur kalian sekarang setelah di kurangi umur ayah
	cout << "berarti usia kalian sekarang adalah : " << berartiusiakaliansekarangadalah << endl;
	
	return 0;

}