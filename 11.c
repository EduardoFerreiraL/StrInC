#include <stdio.h>
#include <string.h>

int main() {
    char str[100], palavra[20];
    int i, j = 0;

    printf("Digite uma frase: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            palavra[j] = '\0';
            printf("%s ", palavra);
            j = 0;
        } else {
            palavra[j++] = str[i];
        }
    }

    return 0;
}