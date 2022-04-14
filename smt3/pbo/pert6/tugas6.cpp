#include<iostream>
using namespace std;
class Waktu{
    public://Abstraksi adalah teknik yang membantu kami mengidentifikasi informasi spesifik mana yang penting, 
           //dan informasi mana yang harus disembunyikan.
           //jadi abstraksi pada class waktu ini terdapat pada public yang di mana public ini memberitahu informasi 
           //jam,menit,detik yang nantinya di jalankan sesuai informasi yang di berikan public
        Waktu(int j=23, int m=59, int d=59);
        void setWaktu( int j, int m, int d);
        int getJam();
        int getMenit();
        int getDetik();

    private: //Enkapsulasi adalah teknik untuk melampirkan informasi sedemikian rupa 
             //untuk menyembunyikan detail dan detail implementasi suatu objek.
             //sedangkan enkapsulasi sendiri pada perogram jam ini terdapat di private 
             //yang di mana si private ialah dapat diketahuinformasi yang di sembunyikan
             //  dan hanyai atau diakses oleh variabel yang memiliki akses ke private 
        int jam;
        int menit;
        int detik;
};

Waktu::Waktu(int jam, int menit, int detik){
    setWaktu(jam, menit, detik);
}

void Waktu::setWaktu(int j, int m, int d){
    if ((j>=0 && j<24) && (m>=0 && m<=59) && (d>=0 && d<=59)){
        jam = j;
        menit = m;
        detik = d;
    } else {
        cout<<"format waktu salah"<<endl;
    }
}

int Waktu::getJam(){
    return jam;
}
int Waktu::getMenit(){
    return menit;
}

int Waktu::getDetik(){
    return detik;
}


int main(){    
    Waktu t;
    t.setWaktu(23,59,59);
    cout <<endl<<t.getJam()<<":"<<t.getMenit()<<":"<<t.getDetik()<<endl;
    return 0;
}