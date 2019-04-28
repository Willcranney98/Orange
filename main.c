#include<stdio.h>
#include <stdlib.h>
int main()
{  
int dif = 19; //key to rotation amount through letters
char x; //used to initialise letters of ASCII table

FILE *text;//initialises text file
text = fopen("text.txt", "r"); //opens text file text.txt to be read 
while(!feof(text)) {
     
    fscanf(text, "%c", &x);//reads text.txt file
    
    if(x>90){
        x=dif-26;//doesn't enable ASCII values to be beyond range of desired characters
       fscanf(text, "%c", &x);//scans those values into code
    }
    
if(x>64){//>64 so that only Alphabet characters are impacted
    x = x + dif;//rotates alphabet by the amount of dif
    if(x>90){//>90 so that only alphabet characters are impacted
        x-=26;//ensures x will only return and alphabet character
    }
}

      printf("%c", x); //prints the rotated cipher
}
    
return  0; 
}
