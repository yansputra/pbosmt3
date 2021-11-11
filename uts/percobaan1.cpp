//riyan saputra 20200801081 uts
#include<iostream>
#include<string>

using namespace std;

class nama{
    private :
        string firstname;
        string middlename;
        string lastname;
        string fullname;

    public :
        void setnama(){
            string a,b,c,d;
            firstname = a;
            middlename = b;
            lastname = c;
            fullname = d;
            
            cin.ignore();
            cout<<" first name  = ";cin>>firstname;
            cin.ignore();

            cout<<" middle name   = ";cin>>middlename;

            cout<<" last name = ";cin>>lastname;

            cout<<" full name = ";getline(cin, fullname);

            cin.ignore();
        }
        string getfirstname(){
            return firstname;
        }
        string getmiddlename(){
            return middlename;
        }
        string getlastname(){
            return lastname;
        }
        string getfullname(){
            return fullname;
        }
};

int main(){
    int pilih;
    char t;
    nama katakunci;
    menu:
        cout<<"0. Keluar"<<endl;
        cout<<"1. Input "<<endl;
        cout<<"Masukan Pilihan Anda = ";cin>>pilih;

    if (pilih == 1){
        katakunci.setnama();
        cout<<" first name = "<<katakunci.getfirstname()<<endl;
        cout<<" middle name  = "<<katakunci.getmiddlename()<<endl;
        cout<<" last name = "<<katakunci.getlastname()<<endl;
        cout<<" full name= "<<katakunci.getfullname()<<endl;
        cout<<"Ingin memilih menu lain (y/t) ? = "; cin >>t;

    if (t == 'y'){
        goto menu;  
    }
    else if (t == 't'){
          cout<<"Thanks";
    }
    }
    if (pilih == 0)
    {
        system("clear");
        cout<<"Thanks";
    }  

}

