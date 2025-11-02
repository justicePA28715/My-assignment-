#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;
    int count = 0;
    printf("Justice chirchir\n");
    printf("PA106/G/28715/25\n");
    printf("TRANSACTION FOR SALES\n");
    printf("====================\n");

    // Open file for reading
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open 'sales.txt'!\n");
        return 1;
    }

    printf("Reading transactions from sales.txt...\n");

    // Read each amount and add to total
    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
        count++;
    }

    // Close file
    fclose(file);

    // Display result
    printf("Total number of transactions: %d\n", count);
    printf("Total sales for the day: $%.2f\n", total);

    return 0;
}