#include <cstdio>
using namespace std;

void printp(char *p) {
    printf("pointer is %p, value is %d\n", p, *p);
}
void printz(int *z) {
    printf("pointer is %p, value is %d\n", z, *z);
}

int main()
{
	printf("you can see the adress++ each time cuz char is 1 bit\n");
    char arr[5] = { 1, 2, 3, 4, 5 };
    char *p = arr;
    printp(p++);
    printp(p++);
    printp(p++);
    
    printf("\n");
    
    printf("you can see the adress+4 each time cuz int is 4 bit\n");
    int ar[5] = { 1, 2, 3, 4, 5 };
    int *z = ar;
    printz(z++);
    printz(z++);
    printz(z++);

    return 0;
}
