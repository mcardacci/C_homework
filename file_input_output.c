#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("C:\\Users\\marcoc\\Desktop\\test.txt", "wb" );
    char x[10] = "asdfzxcv!!";
    fwrite(x, sizeof(x[0]), sizeof(x)/sizeof(x[0]), fp);
    return 0;
}
