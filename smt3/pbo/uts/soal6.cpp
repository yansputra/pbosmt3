//riyan saputra 20200801081
#include<iostream>

using namespace std;

class matematika{
	private :
		float bilangan1;
		float bilangan2;
		float hasil;
		char operasi;
	
	public :
		
		void setaritmatika(float a,float b){
			bilangan1  = a;
			bilangan2  = b;
		}
		
		void tambah(){
			cout<<"Masukan angka 1       = ";cin>>bilangan1;
	    	cout<<"Masukan angka Operasi = ";cin>>operasi;
	    	cout<<"Masukan angka 2       = ";cin>>bilangan2;
			hasil = bilangan1 + bilangan2;
			cout<<"Hasil penjumlahan = "<<hasil<<endl;
		}
		void kurang(){
			cout<<"Masukan angka 1       = ";cin>>bilangan1;
	    	cout<<"Masukan angka Operasi = ";cin>>operasi;
	    	cout<<"Masukan angka 2       = ";cin>>bilangan2;
			hasil = bilangan1 - bilangan2;
			cout<<"Hasil pengurangan = "<<hasil<<endl;
		}
		void kali(){
			cout<<"Masukan angka 1       = ";cin>>bilangan1;
	    	cout<<"Masukan angka Operasi = ";cin>>operasi;
	    	cout<<"Masukan angka 2       = ";cin>>bilangan2;
			hasil = bilangan1 * bilangan2;
			cout<<"Hasil perkalian = "<<hasil<<endl;
		}
		void bagi(){
			cout<<"Masukan angka 1       = ";cin>>bilangan1;
	    	cout<<"Masukan angka Operasi = ";cin>>operasi;
	    	cout<<"Masukan angka 2       = ";cin>>bilangan2;
			hasil = bilangan1 / bilangan2;
			cout<<"Hasil pembagian = "<<hasil<<endl;
		}
		
		float getbilangan1(){
			return bilangan1;
		}
		float getbilangan2(){
			return bilangan2;
		}
		float gethasil(){
			return hasil;
		}
};

int main(){
	int pilih;
	char y;
	matematika w;
	

	menu:
		cout<<"\n";
		cout<<" 0.keluar"<<endl;
		cout<<" 1.Tambah"<<endl;
		cout<<" 2.Kurang"<<endl;
		cout<<" 3.kali  "<<endl;
		cout<<" 4.Bagi"<<endl;
		cout<<"pilih = ";cin>>pilih;
	
	if(pilih == 1){
		w.tambah();
		cout<<"Ingin Berpindah ke menu (y/n) = ";cin>>y;
		if(y == 'y'){
		goto menu;	
		}
		else if(y == 'y'){
			system("clear");
			cout<<" Thanks ";
		}	
	}
	else if(pilih == 2){
		w.kurang();
		cout<<"Ingin Berpindah ke menu (y/n) = ";cin>>y;
		if(y == 'y'){
		goto menu;
		}
		else if(y == 'n'){
			system("clear");
			cout<<" Thanks ";
		}	
	}
	else if(pilih == 3){
		w.kali();
		cout<<"Ingin Berpindah ke menu (y/n) = ";cin>>y;
		if(y == 'y'){
			goto menu;
		}
		else if(y == 'n'){
			system("clear");
			cout<<" Thanks ";
		}	
	}
	else if(pilih == 4){
		w.bagi();
		cout<<"Ingin Berpindah ke menu (y/n) = ";cin>>y;
		if(y == 'y'){
			goto menu;
		}
		else if(y == 'n'){
			system("clear");
			cout<<" Thanks ";
		}	
	}
	else if(pilih == 0){
		system("clear");
		cout<<" Thanks ";
	}
	
}
