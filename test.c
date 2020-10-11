#include <stdio.h>

int main()
{
	printf("Bounding Box: ");
	FILE *fp;
	fp = fopen("predictions.csv", "a");
	fprintf(fp, "Hi\n");
	fclose(fp);
}
