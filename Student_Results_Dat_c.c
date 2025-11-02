#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char reg_number[20];
    float marks;
} Student;

int main() {
    FILE *file;
    Student student;
    printf("Justice chirchir.\n");
    printf("Results.\n");
    printf("===============\n");

    // Open binary file for reading
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open 'results.dat'. Make sure it exists!\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("-------------------------------------------------\n");

    // Read records one by one
    while (fread(&student, sizeof(Student), 1, file) == 1) {
        printf("Name: %-20s Marks: %.2f\n", student.name, student.marks);
    }

    fclose(file);
    printf("-------------------------------------------------\n");
    printf("End of results.\n");
    return 0;
}