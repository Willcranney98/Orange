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
    //printf("%d", x);
    //printf("%c", " ");

    //printf('\n');
 
    //printf("%c", x);
   
    
    
    
    /*for(c = 'A'; c <= 'Z'; ++c){ // cycle through the alphabet until creaches the value of Z
    
    if((c='x')){
        int output = (count + dif)%26;
        c = c+output;
        printf("%c", c);
        c='Z';
        
    }
}*/

    count++;
    
    
}
//char str[1024];
//scanf("%s", str);
//printf("Read: %s\n", str);
//printf("Enter name: ");
//printf("Enter a number: ");
//scanf("%d", &variable);

    
return  0;
}

// need study to understand how to do the start of this