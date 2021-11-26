#include<iostream>

using namespace std;

class tanaman{
	private :
		int statustmbh; //deklarasi variabel
		int jumlahair;
		int jumlahpupuk;
	
	public :
		tanaman (){ // konstruktor untuk men set nilai 0
			tanaman :: statustmbh  = 0;
			tanaman :: jumlahair   = 0;
			tanaman :: jumlahpupuk = 0;
		}
		
		void kasihair(){ //fungsi untuk menambah air
			jumlahair++;
			cektumbuh();
		}
		void kasihpupuk(){ //fungsi untuk menambah pupuk
			jumlahpupuk++;
			cektumbuh();
		}
		void cektumbuh(){ //fungsi untuk cek tumbuh.
			if(jumlahair >= 3 && jumlahpupuk >= 1){
				cout<<"Selamat Tanaman kamu tumbuh "<<endl;
				tumbuh();
			}
			else{
				cout<<"Kondisi belum memenuhi untuk tumbuh "<<endl;
				cout<<"jumlah air   = "<<jumlahair<<endl;
				cout<<"jumlah pupuk = "<<jumlahpupuk<<endl;
			}
		}
		void tumbuh(){ //fungsi untuk menumbuhkan tanaman jika sesuai kondisi
			if(statustmbh < 4){
				jumlahair   = jumlahair - 3;
				jumlahpupuk = jumlahpupuk - 1;
				statustmbh++;
			}else{
                cout<<"Tanaman Sudah berbunga";
            }
		}
		void displaytanaman(){
			cout<<"Status pertumbuhan = "<<pertumbuhan()<<endl;
			cout<<"Jumlah air   = "<<jumlahair<<endl;
			cout<<"Jumlah pupuk = "<<jumlahpupuk<<endl;
		}
// string untuk memberikan if pertumbuhan
		string pertumbuhan(){
			if (statustmbh == 0){ //kalo statusnya sama dengan 0 
				return "Benih"; //bakal ngembaliin benih
			}
			else if(statustmbh == 1){ //kalo statusnya sama dengan 1 
				return "Tunas";//bakal ngembaliin tunas
			}
			else if(statustmbh == 2){ //kalo statusnya sama dengan 2 
				return "Tanaman Kecil";//bakal ngembaliin tanaman kecil
			}
			else if(statustmbh == 3){ //kalo statusnya sama dengan 3 
				return "Tanaman Dewasa";//bakal ngembaliin tanaman dewasa
			}
			else if(statustmbh == 4){ //kalo statusnya sama dengan 4 
				return "Berbunga";//bakal ngembaliin berbunga
			}
            return 0;//mengembalikan nilai 0
		}
		int getstatustmbh(){ // untuk menampilkan nilai data status tumbuh
			return statustmbh;
		}
};

int main(){
	int pilih;
	char y;
	tanaman w;
	cout<<"Note: Untuk tumbuh Dibutuhkan 3 air dan 1 pupuk "<<endl;
	
	menu:
		cout<<"\n";
		cout<<"0  Memberi air "<<endl;
		cout<<"1  Memberi pupuk"<<endl;
		cout<<"99 Keluar"<<endl;
		cout<<"Masukan pilihan = ";cin>>pilih;
		
		if(pilih == 0){
			system("clear");
			w.kasihair();
			cout<<"\n";
			w.displaytanaman();
			cout<<"Ingin Berpindah ke menu (y/n) = ";cin>>y;
			if (y == 'y'){
				goto menu;
			}
			else if(y == 'n'){
				cout<<" Thanks ";
			}
		}
		else if(pilih == 1){
			system("clear");
			w.kasihpupuk();
			cout<<"\n";
			w.displaytanaman();
			cout<<"Ingin Berpindah ke menu (y/n) = ";cin>>y;
			if (y == 'y'){
				goto menu;
			}
			else if(y == 'n'){
				cout<<" thanks ";
			}
		}
        else if(pilih == 99){
            cout<<"Thanks";
        }
        return 0;
}