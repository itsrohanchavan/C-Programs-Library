/* file_io_example.c */
#include <stdio.h>
int main() {
    FILE *fp = fopen("sample.txt","w");
    if(!fp){ puts("Cannot open file"); return 1; }
    fprintf(fp,"Hello from C file I/O\n");
    fclose(fp);
    puts("Wrote sample.txt");
    return 0;
}
