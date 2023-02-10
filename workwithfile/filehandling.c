#include <stdio.h>

int main()
{
		FILE *dptr;
    dptr = fopen("/home/kuba/C_programs/deneme.txt", "w");
    putc('M', dptr);
    putc('Y', dptr);
    putc('O', dptr);
    fclose(dptr);

	return 0;
}
