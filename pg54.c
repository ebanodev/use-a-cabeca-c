#include <stdio.h>
#include <stdlib.h>

int main()
{
	void fortune_cookie(char msg[])
	{
		printf ("mesage reads %s \n", msg);
		printf ("message occupies %i bytes \n", sizeof(msg));
	}
	char quote[] = "Cookies Make You Fat";
	fortune_cookie(quote);
	return 0;
}
