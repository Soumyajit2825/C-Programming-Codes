#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,sum1=0,sum2=0,a[100],n;
    printf ("Enter the size of the array: ");
    scanf ("%d",&n);

    printf ("Enter the array elements:");
    
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n;i++)
    {
        if(a[i]>0)
            sum1=sum1+a[i];
        else
            sum2=sum2+a[i];
    }
    printf("sum of pos=%d",sum1);
    printf("sum of neg=%d",sum2);
    
    return 0;
}