//Program Of C To find No Of Vowels In A Word.
//Created By Haresh Kurade FW20CO002
#include<stdio.h>  
void main ()  
{  
    char s[9] = "computer";  
    int i = 0;   
    int count = 0;  
    while(i<9)  
    {  
        if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' ||
                        s[i] == 'u' ||s[i] == 'o')  
        {  
            count ++;  
        }  
        i++;  
    }  
    printf("The number of vowels %d",count);  
}