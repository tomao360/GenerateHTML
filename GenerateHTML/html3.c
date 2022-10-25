#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning(disable : 4996)

int main_3()
{
	char HTMLstr[1000];
	printf("Please enter a link to an image\n");
	gets(HTMLstr);

	FILE* f = fopen("file3.html", "w");
	
	fputs("<head><title>Picture</title></head><body><div width='500px' style = 'background-color:green'><img src ='", f);
	fputs(HTMLstr, f);
	fputs(" ' width='50px' height='50px'></div></body></html>", f);

	fclose(f);

	return 0;
}