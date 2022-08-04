 #include<stdio.h>
int main()
{
        char a[50];
        int i,dcnt=0,scnt=0,lcnt=0,ucnt=0;
        printf("Enter your string=");
        fgets(a,50,stdin);
        for(i=0;a[i];i++)
        {
            if(a[i]>65&&a[i]<90)
                ucnt++;
            else if(a[i]>97&&a[i]<122)
                lcnt++;
            else if(a[i]>48&&a[i]<57)
                dcnt++;
            else if(a[i]!=32&&a[i]!='\n')
                scnt++;
        }
        printf("Lowercase in String=%d\nUppercase in String=%d\nDigits in String=%d\nOther symbols in String=%d",lcnt,ucnt,dcnt,scnt);
        return 0;
}
