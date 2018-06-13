#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int arrayEx() {
	char chararr[4] = {'a', 'b', 'c', 'd'};
	printf("%p = address of chararr\n", &chararr);
	printf("%p = address stored in chararr\n", chararr);
	printf("%p = address of 1st character\n", &chararr[0]);
	printf("%p = address of 2nd character\n", &chararr[1]);
	printf("%p = address of 3nd character\n", &chararr[2]);
	printf("%p = address of 4nd character\n", &chararr[3]);
	system("PAUSE");
	return 0;
}

int pointerEx() {
	int radius = 45;
	int *radiusptr;
	radiusptr = &radius;
	printf("%d = radius, %d = pointed radius\n", radius, *radiusptr);
	/* using * is called de-referencing */
	printf("%d radius variable address\n", &radius);
	/* print the address */
	printf("%p = radius pointer value, %p = radius pointer address\n", radiusptr, &radiusptr);
	/* print the hexadecimal format of address*/
	printf("%x = radius pointer value, %x = radius pointer address\n", radiusptr, &radiusptr);
	/* Print decimal format of address */
	printf("%d = radius pointer value, %d = radius pointer address\n", radiusptr, &radiusptr);
	/* We can see the value in a pointer is same as the address of the variable
	and the pointer address is something different*/
	system("PAUSE");
	return 0;
}

int pointerArithmetic() {
	int arr[4] = {10, 20, 30, 40};
	int *arrptr = arr;
	printf("%d = value of 1st element, %p = address of 1st element\n", *arrptr, arrptr);
	arrptr++;
	printf("%d = value of 2nd element, %p = address of 2nd element\n", *(arrptr), arrptr);
	int y = *(arrptr + 1);
	printf("%d = value of 3rd element, %p = address of 2rd element\n", y, arrptr);
	*arrptr++;
	printf("%d = value of 3rd element, %p = address of 3rd element\n", *(arrptr), arrptr);
	int x = (*arrptr)+1;
	printf("%d = value of new element, %p = address of new element\n", x, arrptr);
	
	system("PAUSE");
	return 0;
}

size_t ustrlen(const char *str){
	if(str == NULL){
		return 0;
	}
	
	size_t length=0;
	while(*str!='\0')
	{
		str+=1;
		length +=1;
	}
	return length;
}

char * mystrchr(char * str, int c)
{
	if(str == NULL)
	{
		return NULL;
	}
	
	while(*str != '\0')
	{
		if(*str == c)
		{
			return (char *) str;
		}
		str++;
	}
	return NULL;
}
