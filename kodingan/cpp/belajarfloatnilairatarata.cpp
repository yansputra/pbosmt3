#include <iostream>
using namespace std;

string nama, grade;
float nilai1, nilai2;
float ratarata;

int main()
{
	cout<<"masukan nama : ";
	cin>>nama;
	cout<<"grade : ";
	cin>>grade;
	cout<<"masukan nilai 1 :";
	cin>>nilai1;
	cout<<"masukan nilai 2 :";
	cin>>nilai2;
	
	ratarata = (nilai1*nilai2);
	
	cout<<"hasil rata - rata : "<<ratarata<<endl;
	
}
