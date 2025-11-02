// Program 1: Append book titles to borrowed_books.txt
#include <stdio.h>
#include <string.h>

int main() {
printf("Justice chirchir library.\n");
printf("PA106/G/28715/25\n");
printf("=========================\n");
    FILE *file;
    char title[100];

    // Open file in append mode
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    printf("Enter book title (or 'quit' to exit): ");
    while (fgets(title, sizeof(title), stdin)) {
        // Remove newline character
        title[strcspn(title, "\n")] = '\0';

        if (strcmp(title, "quit") == 0)
            break;

        // Write title to file
        fprintf(file, "%s\n", title);
        printf("Confirmation: '%s' has been successfully stored.\n", title);

        printf("\nEnter next book title (or 'quit' to exit): ");
    }

    fclose(file);
    printf("File closed. Program ended.\n");
    return 0;
}