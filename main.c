#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i=0,n;
    char ten[50];
    gets(ten);
    printf("Nhap vao so lan xuat:");
    scanf("%d",&n);
    while(i<n){
        printf("%s\n",ten);
        i++;
    }
}
