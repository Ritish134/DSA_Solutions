#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char st[101];
        scanf("%s", st);
        int length = strlen(st);
        if (length <= 10)
        {
            printf("%s\n", st);
        }
        else
        {
            printf("%c%d%c\n", st[0], length - 2, st[length - 1]);
        }
    }
    return 0;
}