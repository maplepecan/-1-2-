// Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл

#include <stdio.h>
#include <math.h>

int main (void)
{
    int byte;
    printf("\n Enter the file size in bytes ^ ");
    scanf("%d", &byte);
    byte = byte / 1024;
    printf("\n File size in kilobytes = %d", byte);
    return 0;
}