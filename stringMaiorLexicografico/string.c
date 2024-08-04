#include <stdio.h>
#include <string.h>

#define MAX_STR_LENGTH 100

int main() {
    int N;
    char strings[100][MAX_STR_LENGTH];
    char longest_length[MAX_STR_LENGTH] = {'\0'};
    char longest_lexicographical[MAX_STR_LENGTH] = {'\0'};

    scanf("%d", &N);
    
    while (getchar() != '\n');

    for (int i = 0; i < N; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);

        int len = strlen(strings[i]);
        if (strings[i][len - 1] == '\n') {
            strings[i][len - 1] = '\0';
        }

        if (strlen(strings[i]) > strlen(longest_length)) {
            strcpy(longest_length, strings[i]);
        }

        if (strcmp(strings[i], longest_lexicographical) > 0) {
            strcpy(longest_lexicographical, strings[i]);
        }
    }

    printf("%s\n", longest_length);
    printf("%s\n", longest_lexicographical);

    return 0;
}
