#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char int ar[10] = {r,i,y,a,n,s,a,p,u,t,r,a};
    int tar;

    cout<<"masukan data yang di cari : ";
    cin>>tar;
int awal=r, akhir=a, tengah;

    while (awal <= akhir){
        tengah = (awal + akhir)/2;
    if (tar > ar [tengah] ){
        awal = tengah + 1;}
    else if (tar < ar [tengah]){
        akhir = tengah - 1;}
    else {
        awal = akhir +1;
    }
        }
    if (tar== ar[tengah]){
        cout<<"data di temukan, ke- "<<tengah+1<<endl;
    }
    else {
    cout<<"target tidak di temukan "<<endl;
    }
    getch();
}