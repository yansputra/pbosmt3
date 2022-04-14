#include <iostream>
#include <conio.h>

using namespace std;

typedef struct {
	int hari;
	int bulan;
	int tahun;
}
tanggal;

typedef struct {
	int id;
	char nama[30];
	tanggal tanggalLahir;
}
KTP;

typedef  struct {
	KTP ktp[255];
	int jumlah;
}
DataKTP;

void tampilSemuaKTP(DataKTP data)
{
	for (int i = 0; i < data.jumlah; i++)
	{
		tanggal tgl = data.ktp[i].tanggalLahir;
		cout<<"id: "<<data.ktp[i].id<<'\n';
		cout<<"nama: "<<data.ktp[i].nama<<'\n';
        cout<<"jenis kelamin: "<<data.ktp[i].jenisKelamin<<'\n';
        cout<<"tgl lahir: "<<tgl.hari<<"/"<<tgl.bulan<< "/"<<tgl.tahun<<"\n\n";
		if(data-> ktp[i].id == id)
		{
			posisi = i;
			break;
		}
	}
	for (int i = posisi; i < data->juamlah; i++)
	{
		data ->ktp[i] = data ->ktp[i+1];
	}
	data-?ktp[data-?jumalah] = data->ktp[254;
	data->jumlah -= 1;
}

int main()
{
	DataKTP data_ktp;
	data_ktp.jumalah = 0;
	int pil;
	int id;
	do
	{
		system("cls");
		cout<<"1. input ktp\n";
		cout<<"2. edit ktp\n";
		cout<<"3. hapus ktp\n";
		cout<<"4. tampilkan ktp\n";
		cout<<"5. exit\n";
		cout<<"pilihan: ";
		cin>>pil;
		system("cls");
		
		switch (pil)
		{
			case 1:
				cout << "masukan id\n";
				cin >> data_ktp.ktp[data_ktp.jumalah].id;
				
				cout <<"masukan nama\n"
				cin.get();
				cin.getline(data_ktp,ktp[data_ktp.jumlah].nama, 30);
				
				cout <<"masukan jenis kelamin\n";
				cin >> data_ktp.ktp[data_ktp.jumlah].jeniskelamin;
				
				cout <<"masukan tgl lahir (hari bulan tahun)\n";
				cin >> data_ktp.ktp[data_ktp.jumlah].tanggal lahir.hari;
				cin >> data_ktp.ktp[data_ktp.jumlah].tanggal lahir.bulan;
				cin >> data_ktp.ktp[data_ktp.jumlah].tanggal lahir.tahun;
				
				data_ktp.jumlah+=1;
				break;
			case 2:
				tampilSemuaKTP(data_ktp);
				cout<<"id ktp yang ingin di ubah: ";
				cin>>id;
				system("cls");
				edit(&data_ktp.ktp[id]);
				getch();
				break;
			case 3:
				tampilSemuaKTP(data_ktp);
				cout<<"id ktp yang ingin dihapus: ";
				cin>>id;
				system("cls");
				hapus(&data_ktp, id);
				getch();|
				break;
			case 4:
				tampilSemuaKTP(data_ktp);
				getch();
				break;
		}
	} while (pil != 5);
	retrun 0; 
}
