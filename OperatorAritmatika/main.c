#include <stdio.h>
#include <stdlib.h>

//Nama : Tri Waluyo
// Kelas : 4103
// NIM : A11.2017.10097

int main()
{
    printf("Operator Aritmatika\n");
    printf("=====================================\n");

    float vt= 21.55;
    float vo= 0;
    float t=12.5;
    float a= vt-vo/t;

    printf("Mobil pada mulanya diam. Setelah 12,5 sekon(t)\n");
    printf("kelajuan mobil bertambah menjadi 21,55 m/s(vt)\n");
    printf("Buatlah program untuk menghitung percepatan mobil(a)\n");
    printf("|\n");
    printf("Diketahui: \n");
    printf("\t vo=0\n");
    printf("\t t=12.5 sekon\n");
    printf("\t vt=21.55m/s\n");
    printf("Ditanya : \n");
    printf("\tpercepatan (a) ?\n");
    printf("Dijawab : \n");
    printf("vt=vo+(a*t)\n");
    printf("a=vt-vo/t\n");
    printf("a= %.2f\n", a);
    return 0;
}
