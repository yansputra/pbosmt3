#include <iostream>

using namespace std;

int main(){
    string nama[50];
    string cari;
    int j;
    int muncul = 0;
    cout<<"Masukan jumlah nama = ";cin>>j;

    for(int i=0 ;i<j;i++){
        cout<<i+1<<". ";cin>>nama[i];
    }

    cout<<"Masukan nama yang dicari = ";cin>>cari;

    for(int i=0;i<j;i++){
        if (cari == nama[i]){
            muncul++;
        }
    }
    if(muncul>0){
        cout<<"jumlah data yang di temukan  ="<<muncul;
    }
    else{
        cout<<"Data tidak ditemukan";
    }
}
