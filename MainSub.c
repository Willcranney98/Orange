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
   while(!feof(message)) { //iterates through the file
       fscanf(message, "%c", &y);//assigns message file character to y
       if(y<64 || y>90){
           printf("%c",y);
           }
       else{
           for(int i=0; i<26; i++){//test alphabet values
               if((alpha[i]==y)){//if value is found
               
               printf("%c", i+65);//print decrypted substitution value
           }
           
           
       }
       }
       
   }
}