#include <stdio.h>
#include <stdlib.h>

int main ()
{
	char card_name[3];
	while ( card_name[0] != 'X') 
	{
	puts("Enter your cardname: ");
	scanf("%2s", card_name);
	int val = 0;
	switch (card_name[0])
		{
		case 'K':
		case 'Q':
		case 'J':
		val = 10;
		break;
		case 'A':
		val = 11;
		break;
		case 'X':
		continue;
		default:
		val = atoi(card_name);
		if ((val < 1) || (val > 10))
			{
			puts ("I dont undestand the value!");
			continue;
			}
		}	
	if ( (val > 2) && (val < 7))
	puts ("count has gone up");
	else if (val == 10)
	puts ("count has gone down");
	}
	return 0;
}
