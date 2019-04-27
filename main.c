#include<stdio.h>

int main()
{
char c;
int dif = 0;
int count = 0;
char input[6] = {'A','B','C','D'};

for(c = 'A'; c <= 'Z'; ++c) // cycle through the alphabet until creaches the value of Z
    printf("%c", c); // print each value of the alphabet as c cycles through each letter
    if(input[0]='A'){
        int output = count + dif;
        c = c+output;
        printf("%c", c);
        c='Z';
        
    }
    count++;
return  0;
}

// need study to understand how to do the start of this