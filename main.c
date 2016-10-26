#include <stdio.h>
#include <stdlib.h>

void main()
{
    int c,n,m,max,min;
    int bcnn;
    printf("Nhap vao m:");
    scanf("%d",&m);
    printf("Nhap vao n:");
    scanf("%d",&n);

    max=n;min=m;
    while(n!= 0)
    {
        c=m%n;
        m = n;
        n = c;
    }
    printf("UCLN la:%d",m);


    printf("BCNN la:%d",(max*min)/m);
}
