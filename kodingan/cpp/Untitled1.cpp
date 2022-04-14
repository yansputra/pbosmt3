#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

main ()
{
    string nama;
    int tgLahir, bLahir, tahunLahir;
    int tgSekarang, bSekarang, tahunSekarang;
    int uBulan=0, uTahun=0, uHari=0;
    
    cout << "Nama Anda "<<setw(11)<<" : ";
    getline(cin, nama);

    //Memberikan data kelahiran
    cout <<"Tanggal Kelahiran "<<setw(2)<<" : ";
    cin >> tgLahir;

    cout << "Bulan Lahir "<<setw(9)<<" : ";
    cin >> bLahir;

    cout << "Tahun Kelahiran "<<setw(5)<<": ";
    cin >> tahunLahir;

    cout<<endl;

    /*
    Perulangan menampilkan bintang
    diantara data lahir dan data sekarang
    */
    for(int i=0; i<45; ++i)
    {
        cout<<(char)196;
    }

    endl(cout); cout<<endl;

    //Memberikan data sekarang
    cout << "Tanggal Sekarang "<<setw(4)<<": ";
    cin >> tgSekarang;

    cout << "Bulan Sekarang "<<setw(6)<<": ";
    cin >> bSekarang;

    cout << "Tahun Sekarang "<<setw(6)<<": ";
    cin >> tahunSekarang;

    //Membandingkan data
    if(bLahir > bSekarang && tgLahir > tgSekarang)
    {
        uHari = tgLahir-tgSekarang;
        uBulan = 12-(bLahir-bSekarang);
        uTahun = (tahunSekarang-tahunLahir)-1;
    }

    else if(bLahir > bSekarang && tgLahir < tgSekarang)
    {
        uHari = tgSekarang-tgLahir;
        uBulan = 12-(bLahir-bSekarang);
        uTahun = (tahunSekarang-tahunLahir)-1;
    }

    if(bLahir < bSekarang && tgLahir > tgSekarang)
    {
        uHari = tgLahir-tgSekarang;
        uBulan = bSekarang-bLahir;
        uTahun = tahunSekarang-tahunLahir;
    }

    else if(bLahir < bSekarang && tgLahir < tgSekarang)
    {
        uHari = tgSekarang-tgLahir;
        uBulan = bSekarang-bLahir;
        uTahun = tahunSekarang-tahunLahir;
    }

    //Menampilkan usia
    cout <<"Hai "<< nama <<" !!! \nusia Anda Sekarang : "<< uTahun; 
    cout <<" tahun "<< uBulan << " bulan " << uHari<< " hari" <<endl;    
    

    system("pause");
    
    return 0;
}
