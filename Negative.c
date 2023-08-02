// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[50],sz,i,j=0,t;
    printf("Enter size");
    scanf("%d",&sz);
    for(i=0;i<sz;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<sz/2;i++)
    {
        if(a[j]<0 && a[sz-i-1]>0)
        {
            t=a[j];
            a[j]=a[sz-i-1];
            a[sz-i-1]=t;
            j++;
        }
        else if(a[j]>0 && a[sz-1-i]>0)
        {
            j++;
            i--;
        }
        else if (a[j]>0 && a[sz-1-i]<0)
        {
            j++;
        }
    }
    for(i=0;i<sz;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
