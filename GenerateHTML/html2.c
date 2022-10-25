#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning(disable : 4996)

int main_2()
{
	FILE* f = fopen("file2.html", "w");
	char HtmlStr[1000] = "<head><title>Picture</title></head><body>";
	fputs(HtmlStr, f);

	for (int i = 0; i < 20; i++)
	{
		fputs("<img src='dog.jpg' width='300px' hight='300px'/>", f);
	}

	fputs("</body></html>", f);

	fclose(f);

	return 0;
}