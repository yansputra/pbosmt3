#include <iostream>
using namespace std;

int main(){
	int pil,batas;
	
	cout<<"Masukan Pilihan [1.Ganjil] [2.Genap] : ";
	cin>>pil;
	cout<<"Masukan Batas : ";
	cin>>batas;
	cout<<endl;
	
	if (pil==1){
		cout<<"Deret Bilangan Ganjil"<<endl;
		for(int i=1;i<=batas;i++){
		if (i%2!=0)
		cout<<i<<" ";
	      }
	}else {
		cout<<"Deret Bilangan Genap"<<endl;
		for(int i=1;i<=batas;i++){
		if (i%2==0)
		cout<<i<<" ";
	      }
	}
	

}
