#include <iostream> // digunakan sebagai standar input output operasi
#include <conio.h> // digunakan untuk menampilkan hasil antarmuka kepada pengguna

using namespace std;  // digunakan untuk memanggil namespace yang memiliki nama 'std'

typedef struct { // mempersingkat penulisan, didalam sebuah typedef struct adalah pendeklarasian variabel
    int hari; 
    int bulan; 
    int tahun;
}
Tanggal; // untuk menampilkan variabel di hasil output

typedef struct { // mempersingkat penulisan, didalam sebuah typedef struct adalah pendeklarasian variabel
    int id;
    char nama[30];
    char jenisKelamin;
    Tanggal tanggalLahir;
}
KTP; // untuk menampilkan variabel di hasil output

typedef struct { // mempersingkat penulisan, didalam sebuah typedef struct adalah pendeklarasian variabel
    KTP ktp[255]; // menampung string max 255 data
    int jumlah;
}
DataKTP; // untuk menampilkan variabel di hasil output

void tampilSemuaKTP(DataKTP data) // fungsi untuk case tampil semua ktp di menu 
{ 
    for (int i = 0; i < data.jumlah; i++) // untuk melakukan perulangan
	{ 
        Tanggal tgl = data.ktp[i].tanggalLahir; // struct variabel tgl sama dengan variabel tanggal lahir
        cout<<"id: "<<data.ktp[i].id<<'\n'; // menampilkan hasil di output
        cout<<"nama: "<<data.ktp[i].nama<<'\n'; // menampilkan hasil di output
        cout<<"jenis kelamin: "<<data.ktp[i].jenisKelamin<<'\n'; // menampilkan hasil di output
        cout<<"tgl lahir: "<<tgl.hari<<"/"<<tgl.bulan<< "/"<<tgl.tahun<<"\n\n"; // menampilkan hasil di output
    }
}

void edit(KTP * ktp) // fungsi untuk case edit di menu
{
    cout<<"masukan id\n"; // menampilkan hasil di output
    cout<<"masukan nama\n"; // menampilkan hasil di output
    cin.get(); // menginput lebih dari 1 tipe data char
    cin.getline(ktp -> nama, 30); // menginput lebih dari 1 tipe data char
    cout<<"masukan jenis kelamin\n"; // menampilkan hasil di output
    cin>>ktp->jenisKelamin; // menginput variabel jenis kelamin
    cout<<"masukan tgl lahir (hari bulan tahun)\n"; // menampilkan hasil di output
    cin>>ktp->tanggalLahir.hari; // menginput variabel hari
    cin>>ktp->tanggalLahir.bulan; // menginput variabel bulan
    cin>>ktp->tanggalLahir.tahun; // menginput variabel tahun
}

void hapus(DataKTP *data, int id) // fungsi untuk case hapus di menu
{
    int posisi; // pendeklarasian variabel posisi
    for(int i = 0; i < data->jumlah; i++)// untuk melakukan perulangan 
	{
        if(data->ktp[i].id == id)// untuk melakukan perintah seleksi
		{
            posisi = i; // jika posisi sama dengan i
            break; // untuk memaksa perintah berhenti sebelum perintah berikutnya
        }
    }
    for(int i = posisi; i < data->jumlah; i++) // untuk melakukan pernyataan jika benar
	{
        data->ktp[i] = data->ktp[i+1]; // variabel kiri sama dengan variabel kiri ditambah 1
    }
    data->ktp[data->jumlah] = data->ktp[254]; // array kiri dengan array kiri dengan max 254
    data->jumlah -= 1; // variabel kiri kuranf sama dengan 1
}

int main() // merupakan fungsi utama yang akan dibaca oleh kompilator
{
    DataKTP data_ktp; // memasukkan variabel dengan struct 
    data_ktp.jumlah = 0; // variabel kiri sama dengan 0
    int pil; // pendeklarasian variabel pil
    int id; // pendeklarasian variabel pil
    do // untuk menjalankan suatu pernyataan lalu diuji apakah kondisi sudah bernilai benar, jika salah tidak dijalankan
	{
        system("clear"); // fungsi untuk clear screen
        cout<<"1. input ktp\n"; // menampilkan hasil output
        cout<<"2. edit ktp\n"; // menampilkan hasil output
        cout<<"3. hapus ktp\n"; // menampilkan hasil output
        cout<<"4. tampilkan ktp\n"; // menampilkan hasil output
        cout<<"5. exit\n"; // menampilkan hasil output
        cout<<"pilihan: "; // menampilkan hasil output
        cin>>pil; // menginput nilai di variabel pil
        system("clear"); // fungsi untuk clear screen

        switch (pil) // untuk melakukan program percabangan
		{
        case 1: // pernyataan pertama
            cout << "masukan id\n"; // menampilkan hasil output
            cin >> data_ktp.ktp[data_ktp.jumlah].id; // menginputkan suatu variabel
            
            cout << "masukan nama\n"; // menampilkan hasil output
            cin.get(); // menginput lebih dari 1 tipe data char
            cin.getline(data_ktp.ktp[data_ktp.jumlah].nama, 30); // menginput lebih dari 1 tipe data char
            
            cout << "masukan jenis kelamin\n"; // menampilkan hasil output
            cin >> data_ktp.ktp[data_ktp.jumlah].jenisKelamin; // menginputkan suatu variabel

            cout << "masukan tgl lahir (hari bulan tahun)\n"; // menampilkan hasil output
            cin >> data_ktp.ktp[data_ktp.jumlah].tanggalLahir.hari; // menginput variabel hari
            cin >> data_ktp.ktp[data_ktp.jumlah].tanggalLahir.bulan; // menginput variabel bulan
            cin >> data_ktp.ktp[data_ktp.jumlah].tanggalLahir.tahun; // menginput variabel tahun

            data_ktp.jumlah+=1; // variabel tersebut lebih sama dengan 1
            break; // untuk memaksa perintah berhenti sebelum perintah berikutnya
        case 2: // pernyataan kedua
            tampilSemuaKTP(data_ktp); // mengeluarkan hasil dari fungsi void
            cout<<"id ktp yang ingin diubah: "; // menampilkan hasil output
            cin>>id; // menginputkan suatu variabel
            system("clear"); // fungsi untuk clear screen
            edit(&data_ktp.ktp[id]);
            return 0;
            break; // untuk memaksa perintah berhenti sebelum perintah berikutnya
        case 3: // pernyataan ketiga
            tampilSemuaKTP(data_ktp);
            cout<<"id ktp yang ingin dihapus: "; // menampilkan hasil output
            cin>>id; // menginputkan suatu variabel
            system("clear"); // fungsi untuk clear screen
            hapus(&data_ktp, id);
            return 0;
            break; // untuk memaksa perintah berhenti sebelum perintah berikutnya
        case 4: // pernyataan keempat
            tampilSemuaKTP(data_ktp); // mengeluarkan hasil dari fungsi void
            return 0; // untuk menahan output suatu program dan kembali ketika kita menekan tombol enter atau lainnya
            break; // untuk memaksa perintah berhenti sebelum perintah berikutnya
        }
    } while (pil != 5); // melakukan perulangan variabel pil tidak lebih dari 5
    return 0; // Menyatakan hasil keluaran dari fungsi main() adalah 0
}
