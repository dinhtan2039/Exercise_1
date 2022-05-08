#include "..\Header\calc.h"

int Tinh_Tong(int Mang[], int N)
{
    int S=0;
    for (int i=0; i<N; i++)
        S+=Mang[i];
    return S;
}

int Max_Mang(int Mang[], int N)
{
    int Max=Mang[0];
    for (int i=1; i<N; i++)
        if (Mang[i]>Max) Max=Mang[i];
    return Max;
}

int Min_Mang(int Mang[], int N)
{
    int Min=Mang[0];
    for (int i=1; i<N; i++)
        if (Mang[i]<Min) Min=Mang[i];
    return Min;
}

void Tim_So_X(int Mang[], int N, int X)
{
    int flag=0;
    for (int i=0; i<N; i++)
        if (Mang[i]==X)
            {
                if (flag==0) printf("==>Cac vi tri co so %d o trong mang   : ", X);
                flag++;
                printf("%d ", i);
            }
    if (flag>0) printf("\n-->Co tat ca %d so  %d o trong mang \n", flag, X);
     else  printf("\n Khong Co so can tim.");
}