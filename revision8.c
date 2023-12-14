#include<stdio.h>
#include<stdio.h>
int main(){

char vowel;

printf("Enter a Letter : ");
scanf("%c",&vowel);

switch (vowel){

case 'A' : 
case 'a' : printf("%c is a vowel letter",vowel);
break;

case 'E' : 
case 'e' : printf("%c is a vowel letter",vowel);
break;

case 'I' : 
case 'i' : printf("%c is a vowel letter");
break;

case 'O' : 
case 'o' : printf("%c is a vowel letter",vowel);
break;

case 'U' : 
case 'u' : printf("%c is a vowel letter",vowel);
break;

default  : printf("%c is a consonant letter",vowel);
}


return 0;
}


