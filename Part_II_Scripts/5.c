#include <stdio.h>

int main()
{
    char string[] = "aa1234dd568";
    int x = sizeof(string) - 1;
    int num[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int coma[10] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000, 10000000000};
    int res = 0;
    int j = 0;
    int z = 0;
    /*
    int a;

    a = (int)string[0] + (int)string[1];

    printf("El stringero es %i ", a);
    */

    for (int i = 0; i < sizeof(string) - 1; i++)
    {
        if (string[i] == '1' || string[i] == '1' || string[i] == '2' || string[i] == '3' || string[i] == '4' || string[i] == '5' || string[i] == '6' || string[i] == '7' || string[i] == '8' || string[i] == '9')
        {
            num[z] = (int)string[i] - 48;
            j = j + 1;
            z = z + 1;
        }

        // printf("Elemento %c ", string[i]);
        // printf("Elemento %i \n ", j);
    }
    // j = ((sizeof(num) / sizeof(num[0])) - 1);
    //  printf("Elemento %i ", j);
    j = j - 1;
    int p = j + 1;
    // printf("Elemento %i ", num[8]);

    for (int i = 0; i < p; i++)
    {
        res = coma[j] * num[i] + res;
        j = j - 1;
    }

    printf("numero %i \n ", res);

    // printf("Tamaño %d", sizeof(string));
    return 0;
}
