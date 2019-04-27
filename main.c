#include<stdio.h>
#include <stdlib.h>
int main()
{
    

int asc;
//int variable;
int dif = 0; //key
//char str1[20];
int count = 0; 
//char input[90];

FILE *text;
text = fopen("text.txt", "r");
while(!feof(text)) {
    char x;
    asc =x%90;    
    fscanf(text, "%c", &x);
    
    printf("%d", asc);
   // printf("%c", " ");
    ++x;
    //printf('\n');
 
    //printf("%c", x);
    if(asc<65){
        int temp;
        temp = asc+65;
        char c[temp];
        printf("%c", c);
    }else{
        //printf("%c", x);
        
    }
    
    
    
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