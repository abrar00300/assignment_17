 #include<stdio.h>
int main()
{
        char a[50],b;
        int i,cnt=0;
        printf("Enter your string=");
        fgets(a,50,stdin);
        for(i=0;a[i];i++)
        {
            if(a[i]>97&&a[i]<122)
                a[i]=a[i]-32;
        }
        printf("String in uppercase lettes=%s",a);
        return 0;
}
