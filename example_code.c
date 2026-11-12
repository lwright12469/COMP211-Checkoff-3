// INTRODUCTION

// before constant folding
int x = 2 + 4;
// after constant folding
int x = 6;
printf("Constant folding: %d\n", x);

// DEAD CODE ELIMINATION

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
printf("Initial: %d, After DCE: %d, Final: %d", foo(), foo_1(), foo_2());

// LOOP OPTIMIZATIONS

// Before inversion
int i = 0;
arr[20];
while (i < 20) {
	arr[i] = i;
	i++;
}

// After inversion
int j = 0;
arr[20];
if (j < 20) {
	do {
		arr[j] = j;
		j++;
	} while (j < 20);
}

// Before vectorization
void add(float *a, const float *b, const float *c, int n) {
    for (int i = 0; i < n; i++) {
        a[i] = b[i] + c[i];
    }
}

/* Conceptual after vectorization
int i = 0;
for (; i + 8 <= n; i += 8) {
    // body
}
// leftovers  
for (; i < n; i++) {        
    a[i] = b[i] + c[i];
}
*/
