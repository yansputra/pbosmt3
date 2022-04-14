#include<iostream>
#include<conio.h>
#include<dos>
main() {
mulai:
clrscr();
int pil; 
cout<<"--------Menu----------\n";
cout<<" 1. Biodata        \n";
cout<<" 2. Deret                \n";
cout<<" 3. Animasi        \n";
cout<<" 4. Exit                \n";
cout<<"----------------------\n";
cout<<"Masukan Pilihan anda[1..4]= ";cin>>pil; 
switch (pil) { 
case 1:
clrscr();
        //Isi program pertama (Biodata)//
getch();
goto mulai;
case 2:
clrscr();
     //Isi program kedua (Deret)//
getch();
goto mulai; 
case 3:
clrscr();
 //Isi program ketiga (Animasi)//
getch();
goto mulai; 
case 4:
clrscr();
 //Isi program keempat (Exit)//
getch();
goto mulai; 
clrscr();
default: cout<<"\n Tidak Ada Pilihan Tersebut, Silahkan Masukan Pilihan Yang Benar";
getch();
goto mulai;
}
getch();
return 0;
}