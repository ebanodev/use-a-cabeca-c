#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char card_name[3];
	puts("Enter your cardname: ");
	scanf("%2s", card_name);
	int val = 0;
	if (card_name[0] == 'K') {
		val = 10;
	} else if (card_name[0] == 'Q') {
		val = 10;
	} else if (card_name[0] == 'A') {
		val = 11;
	} else {
		val = atoi (card_name);
	}
	if (val > 2 ) & (val < 7)
		puts ("count has gone up");
	else if (val == 10);
		puts ("count has gone down");
	return 0;
}
