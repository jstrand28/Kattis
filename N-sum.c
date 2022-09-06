#include <stdio.h>

int main()
{
	int n, x;
	int s = 0;
	scanf("%d", &n);
	for (int i = 0; i < n;i++) {
		scanf("%d", &x);
		s += x;
	}
	printf("%d", s);
	return 0;
}