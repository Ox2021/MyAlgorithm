#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{
    char str[1001];
    scanf("%s", str);
    int len = strlen(str);
    int num[27] = { 0 };
    int i = 0;
    for (i = 0; i < len; i++)
    {
        int t = str[i] - 'a' + 1;
        num[t]++;
    }
    int temp = num[1];
    int t = 1;
    for (i = 2; i < 27; i++)
    {
        if (num[i] > temp)
        {
            temp = num[i];
            t = i;
        }
    }
    printf("%c\n", t + 96);
    printf("%d", temp);
    return 0;
}