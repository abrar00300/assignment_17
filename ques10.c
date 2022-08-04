#include<stdio.h>
int main()
{
        char a[50];
        int i,j;
        printf("Enter your string=");
        fgets(a,50,stdin);
        for(i=0;a[i];i++)
        {
            int cnt=1;
            for(j=i+1;a[j];j++)
            {
                if(a[i]==a[j]&&a[i]!=-1)
                {
                    cnt++;
                    a[j]=-1;

                }
            }
            if((a[i]!=-1)&&(a[i]!=32)&&(a[i]!='\n'))
            printf("\nFrequency of %c=%d",a[i],cnt);

        }
        return 0;
}
