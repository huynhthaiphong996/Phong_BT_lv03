#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i,n;
    printf("Nhap vao n :");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(KiemTraNT(i)== 1) printf("%d\t",i);
    }
}

int KiemTraNT(int n)
{
    int i;
    if(n == 2) return 1;
    for(i=2;i<=n/2;i++)
    {
        if(n%i == 0) return 0;
    }
    return 1;
}
