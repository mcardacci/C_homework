#include <stdio.h>

void main()
{
    FILE *fp;
    int i;
    char sample[] = "\nsome sample shit\n";
    fp = fopen("test.txt", "w");
    
    for(i = 1; i < (int)strlen(sample); i++)
    {
        fprintf(fp, sample[i]);
    }
    fclose(fp);
}
