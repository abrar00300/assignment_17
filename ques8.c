 #include<stdio.h>
int main()
{
        char a[50],b[50];
        int i;
        printf("Enter your string=");
        fgets(a,50,stdin);
        for(i=0;a[i];i++)
        {
            b[i]=a[i];
        }
        printf("New String=%s",b);
        return 0;
}
