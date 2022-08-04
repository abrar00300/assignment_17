#include<stdio.h>
int main()
{
        char a[50],temp;
        int i,j;
        printf("Enter your string=");
        fgets(a,50,stdin);
        for(i=0;a[i];i++)
        {
            for(j=i+1;a[j];j++)
            {
                if(a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        printf("\nstring in ascending order=%s",a);
        return 0;
}
