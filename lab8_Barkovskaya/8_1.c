// Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл

#include <stdio.h>
#include <math.h>

int main (void)
{
    int byte;
    printf("\n Введите размер файла в Байтах : ");
    scanf("%d", &byte);
    byte = byte / 1024;
    printf("\n Значение файла в КилоБайтах = %d", byte);
    return 0;
}