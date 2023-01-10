#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i = 0,j = strlen(str)-1,temp;
    printf("Enter the string:");
    gets(str);
    while(i<=j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("%s",str);
    
    return 0;
}
