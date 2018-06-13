#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/* pointerArithmetic(); */
	char *newstring = "This is an example";
	int str_length;
	str_length = ustrlen(newstring);
	printf("%d string length\n", str_length);
	
	newstring = "How are you?";
	str_length = ustrlen(newstring);
	printf("%d string length\n", str_length);
	
	newstring = NULL;
	str_length = ustrlen(newstring);
	printf("%d string length\n", str_length);
	
	newstring = "";
	str_length = ustrlen(newstring);
	printf("%d string length\n", str_length);
	
	newstring = "aeiou";
	char * ch;
	ch = mystrchr(newstring, 'i');
	printf("%c character found\n", ch);
	
	ch = mystrchr("HELLO", 'O');
	
	printf("strchr: %c my_strchr: %c \n", *strchr("HELLO", 'O'), ch);
	
	ch = mystrchr("HELLO", 'H');
  	printf("strchr: %c my_strchr: %c \n", *strchr("HELLO", 'H'), ch);	
}
