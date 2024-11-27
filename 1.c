#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    printf("Digite uma string:\n ");
    fgets(str1, 100, stdin);

    printf("A string digitada foi: %s", str1);

    printf("Digite duas strings:\n ");
    printf("Primeira string: \n");
    fgets(str1, 100, stdin);
    printf("Segunda string: \n");
    fgets(str2, 100, stdin);

    printf("As strings digitadas foram:\n%s%s", str1, str2);

    return 0;
}