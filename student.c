/*
Authour:John Mungai
Reg no:CT101/G/24029/24
Date: 27/10/2024
*/



#include <stdio.h>
#include <stdlib.h>

// Define a structure for a student
struct Student {
    char name[50];
    int marks;
};

int main() {
    FILE *file;
    int n;

    // Prompt the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Allocate memory for 'n' students
    struct Student students[n];

    // Read the names and marks of each student
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Open file in write binary mode
    file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write the array of structures to the file
    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    printf("Data successfully written to students.dat\n");

    // Re-open file in read binary mode to read back the data
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read the data back into the array
    fread(students, sizeof(struct Student), n, file);
    fclose(file);

    // Display the contents of the array on the screen
    printf("\nDisplaying all students' information from file:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: Name = %s, Marks = %d\n", i + 1, students[i].name, students[i].marks);
    }

    return 0;
}
