#include<stdio.h>
int main()
{
    char a[1000];
    char b[1000];
    int i=0;
    printf("ENter the string:");
    fgets(a,sizeof a,stdin);
    for(i=0;a[i]!='\0';i++)
    {
        b[i] = a[i];
    }
    b[i]!='0';
    printf("Original string a='%s\n",a);
    printf("Copied string b='%s\n",b);
    return 0;
}