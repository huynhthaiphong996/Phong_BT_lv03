#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,i=1;
    printf("Nhap vao n:");
    scanf("%d",&n);
    while(i<n)
    {
        if(i%2 == 0)
        {
            printf("%d\t",i);

        }
        i++;
    }
}
