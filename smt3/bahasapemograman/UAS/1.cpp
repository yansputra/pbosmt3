#include<iostream>
#include<string>

using namespace std;

int main(){
    string nama[20];    //Mendefinisikan array
    string *n;  //Mendefinisikan pinter 
    int j;
    string cari;
    int muncul = 0;
    n = nama;   //menyimpan nilai array ke address pointer n
    
    cout<<"===== PROGRAM SEARCHING NAMA DENGAN ARRAY POINTER ===== \n\n";
    
    cout<<"Masukan Jumlah nama = ";cin>>j;
    cin.ignore();
    for (int i = 0;i<j;i++){
        
        cout<<i+1<<". = ";
        getline(cin,*(n+i));    
    }
    cout<<"\nMenampilkan nama yang disimpan \n";
    cout<<"====================================="<<endl;
    for (int i = 0;i<j;i++){
        cout<<i+1<<". "<<*(n+i)<<endl;
    }
    cout<<"Masukan nama yang akan dicari = ";getline(cin,cari);
    for(int i = 0;i<=j;i++){
        if (cari == *(n+i)){
            muncul ++;
        }
    }
    cout<<"====================================="<<endl;
    if (muncul > 0){
        cout<<"Data Ditemukan "<<endl;
    }else{
        cout<<"data Tidak Ditemukan "<<endl;
    }
}
