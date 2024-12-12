#include <stdio.h>

int main() {
    char ch;
    int spaces = 0, tabs = 0, newlines = 0;

    printf("Enter text (press Ctrl+D to finish):\n");

    // Read input until EOF
    while ((ch = getchar()) != EOF) {
        if (ch == ' ') {
            spaces++;
        } else if (ch == '\t') {
            tabs++;
        } else if (ch == '\n') {
            newlines++;
        }
    }

    // Print the results
    printf("\nNumber of spaces: %d\n", spaces);
    printf("Number of tabs: %d\n", tabs);
    printf("Number of newlines: %d\n", newlines);

    return 0;
}
