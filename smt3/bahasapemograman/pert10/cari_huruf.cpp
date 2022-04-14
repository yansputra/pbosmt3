#include <iostream>

using namespace std;

int main(){
	char cari;
	char nama[50];
	int muncul = 0;
	int hitung = 0;
	
	cout<<"Masukan Nama Anda            = ";cin.getline(nama,sizeof nama);
	cout<<"Masukan karakter yang dicari = ";cin>>cari;
	
	for(int i = 0;i<nama[i];i++){
		hitung++;
	}

	for (int i = 0;i<hitung;i++){
		if (cari == nama[i]){
			muncul++;
		}
	}
	if (muncul>0){
		cout<<"jumlah data yang di temukan  ="<<muncul;
	}else{
		cout<<"Data tidak ditemukan";
	}
	return 0;
}
