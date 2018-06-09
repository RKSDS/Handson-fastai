
/* run this program using the console pauser or 
add your own getch, system("pause") or input loop */

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
