 #include<stdio.h>
int main()
{
        char a[50],b;
        int i,cnt=0;
        printf("Enter your string=");
        fgets(a,50,stdin);
        printf("Enter any character to search in string=");
        fflush(stdin);
        scanf("%c",&b);
        for(i=0;a[i];i++)
        {
            if(b==a[i])
                cnt++;
        }
        printf("%c found %d times",b,cnt);
        return 0;
}
