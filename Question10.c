#include<stdio.h>
int main()
{
    char str[1000],ch;
    int freq=0;
    int i=0;
    printf("Enter the string:");
    fgets(str,sizeof str,stdin);
    printf("Enter the charcater to find its frequency:\n");
    scanf("%c",&ch);
    for(int i=0;str[i] !='0';i++)
    {
        if(ch == str[i])
        freq++;
    }
    printf("Frequency of %c=%d",ch,freq);
    return 0;
}