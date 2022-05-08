#include <stdio.h>
#include "..\Header\calc.h"
#include "..\Header\convert.h"
#include "..\Header\m_string.h"
int Mang[]  ={1,2,3,4,97,7,8,9,6,11,13,12,17,18,25,21,22,29,44,42,55};
         
int Mang_2[]={1,4,3};
        
int main()
    {          

        printf("Tong la              : %d\n",Tinh_Tong(Mang, 21)); 
        printf("Phan tu lon nhat la    : %d\n",Max_Mang (Mang, 21));
        printf("Phan tu nho nhat  la      : %d\n",Min_Mang (Mang, 21));
        Tim_So_X(Mang, 21, 76);

        printf("\n");
        int X=1566;
        Dec_to_Bin(X);
        Dec_to_Hex(X);
        printf("\n");

        if (isEqual(Mang, 21, Mang_2, 21) == 1)  printf("giong nhau!\n");
            else
                printf("khac nhau!\n");
        ChenMang(Mang, 21, Mang_2, 3, 2);

        return 0;
    }



