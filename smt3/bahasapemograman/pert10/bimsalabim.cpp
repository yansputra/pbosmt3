#include<iostream>
#include <cstddef>
#include <vector>
#include <string>

using namespace std;

class tanaman{
	protected :
		int statustmbh; //deklarasi variabel
		int jumlahair;
		int jumlahpupuk;
	
	public :
		tanaman (){ // konstruktor untuk men set nilai 0
			statustmbh  = 0;
			jumlahair   = 0;
			jumlahpupuk = 0;
		}
		void setplant(int st,int jh,int jp){ 
			statustmbh  = st;
			jumlahair   = jh;
			jumlahpupuk = jp;
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
			}
		}
		void displaytanaman(){
			cout<<"Status pertumbuhan = "<<pertumbuhan()<<endl;
			cout<<"Jumlah air   = "<<jumlahair<<endl;
			cout<<"Jumlah pupuk = "<<jumlahpupuk<<endl;
		}
		string pertumbuhan(){
			switch (statustmbh){
				case 0:
					return 0 "Benih";
					break;
				case 1:
					return 0 "Tunas";
					break;
				case 2:
					return 0 "Tanaman Kecil";
					break;
				case 3:
					return 0 "Tanaman Dewasa";
					break;
				case 4:
					return 0 "Berbungan";
					break;
			}
			return 0;
		}
		int getstatustmbh(){
			return statustmbh;
		}
};

class garden {
	protected :
		int size;
		int ntanaman;
		string namegarden;
		int hasilpanen;
		vector<tanaman> v;
	
	public :
		garden (){
			size     = 10;
			ntanaman = 0;
			hasilpanen = 0;
			
			
		}
	bool addtanaman(tanaman p){
		if (ntanaman < size ){
			v.push_back(p);
			ntanaman++;
			return true;
		}
		else{
			return false;
		}
	}
	int harvestplan(){
		int tmpn = 0;
		int i = 0;
		while (( v.empty() != true) && (i < v.size() )){
				if(v[i].getstatustmbh() == 4){
					v.erase(v.begin());
					ntanaman --;
					tmpn ++;
					i = 0;
				}
				else{
					i++;
				}
			}
			hasilpanen = hasilpanen +(tmpn*100);
			return tmpn;
	}
	void kasihairCol(){
		for (int i = 0; i < v.size();i++){
			v[i].kasihair();
		}
	}
	void kasihpupukCol(){
		for (int i = 0; i < v.size();i++){
			v[i].kasihpupuk();
		}
	}
	
	void displaygarden(){
		cout<<"Garden Pusing "<<endl;
		cout<<"Ada "<<ntanaman<<" Tanaman di garden"<<endl;
		cout<<"point panen anda = "<<hasilpanen<<endl;
		
		for (int i = 0;i < v.size();i++){
			v[i].displaytanaman();
		}
	}
	
};

class anggrek : public tanaman,public garden{
    private :
        string jenis;
    
    public :
         anggrek (){
             tanaman();
             garden ();
             jenis = "Anggrek";
         }
    void cektumbuh(){
        if(jumlahair >= 3 && jumlahpupuk >= 2){
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
				jumlahpupuk = jumlahpupuk - 2;
				statustmbh++;
			}
		}
    string getjenis(){
        return jenis;
    }
         
};

int main(){
	
    tanaman p;
	//garden m ;
    anggrek m;
	
	m.addtanaman(m);
	m.addtanaman(m);
	
	m.kasihairCol();
    m.kasihairCol();
	m.kasihairCol();
    m.kasihairCol();
    m.kasihairCol();
    m.kasihairCol();
    m.kasihairCol();
    m.kasihairCol();
    m.kasihairCol();
    m.kasihairCol();
    m.kasihairCol();
    m.kasihairCol();

    m.kasihpupukCol();
    m.kasihpupukCol();
    m.kasihpupukCol();
    m.kasihpupukCol();

	m.harvestplan();
	
	m.displaygarden();
	
	return 0;
}