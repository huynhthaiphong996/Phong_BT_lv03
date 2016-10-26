#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    int i,x,q,S=0,Uk,n;
    printf("Nhap vao U1:");
    scanf("%d",&x);
    printf("Nhap vao cong boi q:");
    scanf("%d",&q);
    printf("Nhap vao so phan tu:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("\nTong =  %d\nPhan tu U1= %d",x,x);
        return;
    }
    else
    {
        Uk = x*q;
        S=x+Uk;
        for(i=3;i<=n;i++)
        {
           Uk = Uk*q;
           S+=Uk;
        }

        printf("\nTong =  %d\nPhan tu U%d= %d",S,n,Uk);
    }
}
