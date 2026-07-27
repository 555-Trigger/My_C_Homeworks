#include<stdio.h>
int main(void)
{
    //Initialization
    int i,j,n,temp,min, a[10];
    printf("\nEnter the total number of elements for an Array:");
    scanf("%d",&n);
    //Delcaration
    printf("\nEnter the elements for an Array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //Selection sort LOGIC
    for(i=0;i<n-1;i++)
    {
        min=i;

        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }

        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("\nThe sorted Elements are:");
    for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;

}
