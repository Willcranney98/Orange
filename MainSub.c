#include <stdio.h>

int main(void)
{
   int alpha[26];
   char x;
   FILE *text;
text = fopen("sub.txt", "r");

for(int i=0; i<26; i++){
    
     fscanf(text, "%c", &x);
     alpha[i] = x;
     printf("%c", x);
}
   
}