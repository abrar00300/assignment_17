 #include<stdio.h>
int main()
{
        char a[50],b;
        int i,cnt=0;
        printf("Enter your string=");
        fgets(a,50,stdin);
        for(i=0;a[i];i++)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='I'||a[i]=='U')
                cnt++;
        }
        printf("Total number of vowels=%d",cnt);
        return 0;
}
