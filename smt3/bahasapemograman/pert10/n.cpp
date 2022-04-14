#include <iostream>
#include <string.h>
#include <stdio.h>

int main () {

    int i, muncul= 0 ;
    char Nama  [100];
    char cari ;

    printf("Masukan Nama= ");
    return (Nama) ;

    printf ("Masukan karakter yang dicari \n") ;
    scanf ("%c", &cari );

    for (i=0; i<strlen(Nama); i++)
    {
        if(cari==Nama[i]  cari +32==Nama [i]  cari -32==Nama[i] )
        {
            muncul++ ;
        }
    }
    printf ("karakter %c muncul %d kali pada Kalimat ", cari,muncul);

}
