#include <stdio.h>
#include <ctype.h>

void convertFileToUppercase(const char* filePath) {
    FILE* file = fopen(filePath, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    FILE* newFile = fopen("output.txt", "w");
    if (newFile == NULL) {
        printf("Error creating new file.\n");
        fclose(file);
        return;
    }

    int ch;
    while ((ch = fgetc(file)) != EOF) {
        fputc(toupper(ch), newFile);
    }

    fclose(file);
    fclose(newFile);

    printf("File converted to uppercase successfully.\n");
}

int main() {
    const char* filePath = "D:\\Thapar\\Thapar Summer School\\Week 1\\Day 2\\Mini Project - Text File Conversion\\Files\\200MB.txt";
    convertFileToUppercase(filePath);

    return 0;
}
