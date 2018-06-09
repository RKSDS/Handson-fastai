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
