#include<iostream>
#include<string>

using namespace std;

class nama{
    private :
        string firstn;
        string middlen;
        string lastn;

    public :
        void setnama(){
            string fn,mn,ln;
            firstn = fn;
            middlen = mn;
            lastn = ln;
            cin.ignore();
            cout<<"Masukan Nama pertama  = ";cin>>firstn;
            cin.ignore();

            cout<<"Masukan Nama tengah   = ";cin>>middlen;

            cout<<"Masukan Nama terakhir = ";cin>>lastn;

      cout<<"\nNama Lengkap = "<<firstn<<middlen<<lastn<<"\n\n\n"; 

            cin.ignore();
        }
        string getfirstn(){
            return firstn;
        }
        string getmiddlen(){
            return middlen;
        }
        string getlastn(){
            return lastn;
        }
};

int main(){
    int pilih;
  char y;
    nama w;
    menu:
        cout<<"0. Keluar"<<endl;
        cout<<"1. Input "<<endl;
        cout<<"Masukan Pilihan Anda = ";cin>>pilih;

    if (pilih == 1){
        w.setnama();
        cout<<"Nama pertama  = "<<w.getfirstn()<<endl;
        cout<<"Nama Tengah  = "<<w.getmiddlen()<<endl;
        cout<<"Nama Terakhir = "<<w.getlastn()<<endl;
    cout<<"Masukan Pilihan Anda (y/t) = ";
    cin>>y;
    if(y == "(y/t)"{
      goto menu;
    }
    else if (t == 't');

  }


    }
    if (pilih == 0){

        cout<<"Hasta La Vista\n";
    }
  if(y ==1){


        cout<<"Masukan Pilihan Anda (y/t) = ";
    cin>>y;
  }

}