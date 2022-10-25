#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning(disable : 4996)

int main_4()
{
	int num;
	printf("Please enter a number\n");
	scanf("%d", &num);

	FILE* f = fopen("file4.html", "w");

	fputs("<head><title>Div</title></head><body>", f);

	for (int i = 0; i < num; i++)
	{
		fputs("<div width = '100px' height = '100px' style = 'background-color:purple'>Hi</div></br>", f);
	}

	fputs("</body></html>", f);
	fclose(f);
}