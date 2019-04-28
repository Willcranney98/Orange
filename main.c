#include<stdio.h>
#include <stdlib.h>
int main()
{  
int dif = 19; //key
char x;

FILE *text;
text = fopen("text.txt", "r");
while(!feof(text)) {
     
    fscanf(text, "%c", &x);
    
    if(x>90){
        x=dif-26;
       fscanf(text, "%c", &x);
    }
    
if(x>64){
    x = x + dif;
    if(x>90){
        x-=26;
    }
}

      printf("%c", x);   
}
    
return  0; //please commit
}
