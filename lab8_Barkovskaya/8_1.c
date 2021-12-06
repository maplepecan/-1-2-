// Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл

#include <stdio.h>
#include <math.h>

int main (void)
{
    int byte;
    int flag = 0;
    printf("\n Enter the file size in bytes : ");
    scanf("%d", &byte);
    flag = byte % 1024;
    byte = byte / 1024;
    if (flag == 0)
    printf("\n File size in kilobytes = %d", byte);
    else printf ("\n File size in kilobytes = %d", byte+1);
    return 0;
}