#include <iostream>

using namespace std;

//Buat program untuk memasukkan dan menampilkan data barang (kode,nama dan jumlah) menggunakan array pointer dinamis dan struct

    int n;
    int *data=new int;
    char *brg=new char;
    float *kd=new float;
    float *jmlh=new float;

int main(){
    cout<<endl;
    cout<<"INPUT DATA BARANG"<<endl<<endl;
    cout <<"Masukkan Jumlah Data yang di Input: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        cout<<"Masukkan Data ke-" << i <<endl;
        cout<<"Masukkan Kode Barang: "; cin>>kd[i];
        cout<<"Masukkan Nama Barang: "; cin>>brg[i];
        cout<<"Masukkan Jumlah     : "; cin>>jmlh[i];

    }
    system("clear");
    cout<<"Menampilkan Data Keseluruhan"<<endl;
    for(int i=1; i<=n; i++){
        cout<<"Data ke-"<<i<<endl;
        cout<<"Kode Barang : "<<kd[i]<<endl;
        cout<<"Nama Barang : "<<brg[i]<<endl;
        cout<<"Jumlah      : "<<jmlh[i]<<endl;
    }cout<<endl;
    delete brg;
    delete []jmlh;
    delete []kd;

    return 0;
}