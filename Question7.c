#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
int i,alph,digit,spechar;
alph = digit = spechar = i =0;
printf("Enter the string:");
fgets(str,sizeof str,stdin);
while(str[i]!='\0')
{
    if((str[i]>='a'&& str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
        alph++;

    }
    else if(str[i]>='0' && str[i]<='9')
    {
        digit++;
    }
    else{
        spechar++;
    }
    i++;
    
}
printf("The no. of alphabetys in the string is %d\n",alph);
printf("The no. of digits in the string is %d\n",digit);
printf("The no. of special character is %d\n",spechar);
return 0;

}