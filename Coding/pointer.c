
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
