 #include<stdio.h>
int main()
{
        char a[50],b,temp;
        int i,j,cnt=0;
        printf("Enter your string=");
        fgets(a,50,stdin);
        for(i=0,j=strlen(a)-1;i<j;i++,j--)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        printf("String in reverse order=%s",a);
        return 0;
}
