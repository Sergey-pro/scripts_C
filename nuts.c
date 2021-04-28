#include <stdio.h>


int main(int argc, char const *argv[])
{
	int bumps, nuts, necessary;
	scanf("%d %d %d", &bumps, &nuts, &necessary);

	int res = bumps * nuts;

	if(res < necessary)
		printf("NO\n");
	else
		printf("YES\n");

	return 0;
}