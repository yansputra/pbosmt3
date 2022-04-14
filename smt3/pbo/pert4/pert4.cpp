#include <iostream>
 using namespace std;

 class umur{
     private :
     int r , s;
     public :
     void assign(int tahunkelahiran, int tahunsekarang){
         r = tahunkelahiran;
         s = tahunsekarang;
     }
     int usia(){
         return r-s;
     }
 };

int main (){
    umur obj;
    obj.assign ( 2021,1990 );
    cout<<"berarti usia kalian sekarang adalah" <<obj.usia ()<<"tahun"<<endl;
    return 0;
}