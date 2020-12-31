#include <stdio.h>
#include <stdlib.h>

//Nama : Tri Waluyo
// Kelas : 4103
// Nim : A11.2017.10097

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
kamus
int Celcius; // bukan int tapi float
int CeltoFah;
int CeltoKel;
int CeltoRea;

printf("Masukkan Jumlah Celcius\t: ");
scanf("%c",Celcius); // bukan %c tapi %f dan sebelum Kata Celcius dikasih tanda &
Program
CeltoFah=9/5 * Celcius + 32; // salah karena *9/5 harusnya ditempatkan setelah kata Celcius
CeltoKel=Celcius+273;
CeltoRea=(4/5)*Celcius //salah karena tidak ada tanda ; dan tanda ( ) dihilangkan dan *harusnya *4/5 ditempatkan setelah kata Celcius
printf("Dalam Skala Celcius menunjukkan %d \n "); // %d diganti %f setelah %f ditambahi kata celcius
printf("Bila dikonversi menjadi Fahrenheit menjadi\t: %d\n",CeltoFah);
printf("Bila dikonversi menjadi Reamur menjadi\t: %x\n",CeltoKel); // bukan %x tapi %f dan harusnya CeltoRea
printf("Bila dikonversi menjadi Kelvin menjadi\t: %f\n",CeltoRes); // kata CeltoRes diganti CeltoKel

return 0;
}
*/



int main()
{
    printf("PEMBENARAN\n");
 float Celcius;
 float CeltoFah;
 float CeltoKel;
 float CeltoRea;

printf("Masukkan Jumlah Celcius\t: ");
scanf("%f",&Celcius);

CeltoFah=Celcius*9/5 +32 ;
CeltoKel=Celcius+273;
CeltoRea=Celcius*4/5;
printf("Dalam Skala Celcius menunjukkan : %.2f\n", Celcius);
printf("Bila dikonversi menjadi Fahrenheit menjadi\t: %.2f\n",CeltoFah);
printf("Bila dikonversi menjadi Reamur menjadi\t: %.2f\n",CeltoRea);
printf("Bila dikonversi menjadi Kelvin menjadi\t: %.2f\n",CeltoKel);
return 0;
}
