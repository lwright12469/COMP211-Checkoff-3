// initial code
int foo() {
	int a = 1;
	int b = 2;
	int c = 3;
	c = a * 4;
	return c;
	b = 5;
	return a;
}

// after DCE
int foo_1() {
	int a = 1;
	c = a * 4;
	return c;
}

//subsequent constant folding
int foo_2() {
	return 4;
}
