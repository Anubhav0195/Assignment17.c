#include<stdio.h>
#include<string.h>
int main()
{
    char s[]={ "Prateek"};
    int i=0,count=0;
    while(s[i] != '\0')
    {
        i++;
        count++;
    }
    printf("%d",count);
    return 0;
  
}