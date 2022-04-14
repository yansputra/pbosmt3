#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	//array dua dimensi
	int A[3][3];
	//array dua dimensi dengan looping
	for (int b=0;b<3;b++){
		for (int k=0;k<3;k++){//ini k
			  cout<<"A["<<b<<"]["<<k<<"] = ";
			  cin>>A[b][k];
		}
		cout << endl;//untuk si b nya
	}//looping di dalam loopig
	
	for (int b=0;b<3;b++){
		for (int k=0;k<3;k++){
			 cout<<A[b][k]<<" ";
		}
		cout << endl;
	}
	getch();//ketika memakai conio.h
}