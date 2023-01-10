#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],ch;
    int i,j,temp=0,l;
    printf("Enter the string");
    fgets(str,sizeof str,stdin);
    l=strlen(str);
    // sorting process
    for(i=1;i<l;i++)
    {
        for(j=0;j<l-1;j++)
        {
            if(str[j]>str[j+1])
            {
                ch = str[j];
                str[j]=str[j+1];
                str[j+1]=ch;
            }
        }
    }
    printf("After sorting the string appears like :\n");
    printf("%s\n\n",str);
    return 0;
}