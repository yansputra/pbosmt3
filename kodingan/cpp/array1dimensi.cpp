#include <iostream>

using namespace std;
//ingin membuat array satu dimensi
int main(){
    int xnxx [10];
    //menginput manual data array
    //xnxx [0] = 20;
    //xnxx [1] = 19;
    //xnxx [2] = 18;
    //xnxx [3] = 17;
    //xnxx [4] = 16;
    //xnxx [5] = 15;
    //xnxx [6] = 14;
    //xnxx [7] = 13;
    //xnxx [8] = 12;
    //xnxx [9] = 11;
    
    //menampilkan array manual data yang di input oleh array di atas

//cout<<" nilai 1 = " <<xnxx [0]<<endl;
//cout<<" nilai 2 = " <<xnxx [1]<<endl;
//cout<<" nilai 3 = " <<xnxx [2]<<endl;
//cout<<" nilai 4 = " <<xnxx [3]<<endl;
//cout<<" nilai 5 = " <<xnxx [4]<<endl;
//cout<<" nilai 6 = " <<xnxx [5]<<endl;
//cout<<" nilai 7 = " <<xnxx [6]<<endl;
//cout<<" nilai 8 = " <<xnxx [7]<<endl;
//cout<<" nilai 9 = " <<xnxx [8]<<endl;
//cout<<" nilai 10 = " <<xnxx [9]<<endl;

//menampilkan array input dan output dengan perulangan 
cout<<"\n";//gunanya untuk menambahkan baris kosong \n
//mengimputkan array dengan perulangan/looping
for (int z = 0; z < 10; z++){
    cout<<"masukan nilai = ";
    cin>>xnxx[z];
}
cout<<"\n hasil data inputan \n";
cout<<"\n";
//menampilkan array dengan perulangan/looping
for (int a = 0; a < 10; a++){
    cout<<"nilai = "<<xnxx[a]<<endl;
}
return 0;

}



