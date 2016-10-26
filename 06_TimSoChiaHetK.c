#include <stdio.h>
#include <stdlib.h>

void main()
{
    int S=0,i,n,k;
    printf("Nhap vao n:");
    scanf("%d",&n);
    printf("\nNhap vao k:");
    scanf("%d",&k);

    for(i=1;i<n;i++)
    {
        if(i%k == 0){
         S++;
         printf("%d\t",i);
        }
    }
    printf("\nSo luong cac so chia het cho k:%d",S);

}
