#include<stdio.h>
int main()
{
    char str[1000];
    int i=0;
    printf("Enter the string:");
    gets(str);
    while(str[i] !='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        
        }
        i++;
    }
    printf("%s",str);
    return 0;

}