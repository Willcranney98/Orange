#include<stdio.h>
#include <stdlib.h>
int main()
{
    

//int asc;
//int variable;
int dif = 19; //key
//char str1[20];
int count = 7; 
//char input[90];
char x;
//char y;
FILE *text;
text = fopen("text.txt", "r");
while(!feof(text)) {
    //x =(dif+count)%90;    
    fscanf(text, "%c", &x);
    
    
    if(x>90){
        
        x=dif-26;
       fscanf(text, "%c", &x);
   // printf("%c", x);

//     ++x;
    }
    //y = asc;
if(x>64){
    x = x + dif;
    if(x>90){
        x-=26;
    }
}
      printf("%c", x);


    count++;
    
    
}

    
return  0;
}

// need study to understand how to do the start of this