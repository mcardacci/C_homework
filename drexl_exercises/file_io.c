#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int i;
    char sample[] = "some sample shit\n";
    fp = fopen("test.txt", "w");
    
    for(i = 0; i < sizeof(sample); i++)
    {
        fprintf(fp, "%c\n", sample[i]);
        //fprintf(fp,(char *)sample[i]);
    }
    fclose(fp);
    return 0;
}
