#include <stdio.h>
#include <stdlib.h>

void main()
{
    int S=1,i=1,n;
    printf("Nhap vao n:");
    scanf("%d",&n);
    while(i<=n)
    {
        S*=i;
        i++;
    }
    printf("Ket qua: %d",S);
}
