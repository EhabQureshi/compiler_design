#include <stdio.h>
#include <string.h>

int main() {
    // Array of some C keywords
    const char *keywords[] = {
        "auto", "break", "case", "char", "const", "continue",
        "default", "do", "double", "else", "enum", "extern",
        "float", "for", "goto", "if", "int", "long", "register",
        "return", "short", "signed", "sizeof", "static", "struct",
        "switch", "typedef", "union", "unsigned", "void", "volatile", "while"
    };

    int keyword_count = sizeof(keywords) / sizeof(keywords[0]);
    char input[50];
    int is_keyword = 0;

    // Prompt user for input
    printf("Enter a word: ");
    scanf("%s", input);

    // Check if the input matches any keyword
    for (int i = 0; i < keyword_count; i++) {
        if (strcmp(input, keywords[i]) == 0) {
            is_keyword = 1;
            break;
        }
    }

    // Print the result
    if (is_keyword) {
        printf("\"%s\" is a C keyword.\n", input);
    } else {
        printf("\"%s\" is not a C keyword.\n", input);
    }

    return 0;
}
