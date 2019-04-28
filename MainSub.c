#include <stdio.h>

int main(void)
{
   int alpha[26];//array size 26 for alphabet letters
   char x;
   char y;
   FILE *sub;//initialises sub file
sub = fopen("sub.txt", "r");//open sub file

for(int i=0; i<26; i++){
    
     fscanf(sub, "%c", &x);//assigns sub file to x
     alpha[i] = x;//x assigned to array for alphabet
}


  FILE *message;//initalise message file
message = fopen("message.txt", "r");//open message file
   while(!feof(message)) {
       fscanf(message, "%c", &y);//assigns message file to y
       if(y==32){
           printf("%c",y);
           }
       else{
           for(int i=0; i<26; i++){//test other values
               if((alpha[i]==y)){//assign sub to message
               
               printf("%c", i+65);//print decrypted substitution
           }
           
           
       }
       }
       
   }
}