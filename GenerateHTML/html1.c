#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning(disable : 4996)

int main_1()
{
	FILE* f = fopen("file.html", "w");

	char HtmlStr[1000] = "<head><title>HTML</title></head><body><img src='dog.jpg' width='300px' hight='300px'/></body></html>";
	fputs(HtmlStr, f);
	
	fclose(f);

	return 0;
}