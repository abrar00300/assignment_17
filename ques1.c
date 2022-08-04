 #include<stdio.h>
int main()
{
        char a[50];
        int i;
        printf("Enter your string=");
        fgets(a,50,stdin);
        for(i=0;a[i];i++);
        printf("Lenght of string=%d",i-1);
        return 0;
}
