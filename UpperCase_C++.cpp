#include <iostream>
#include <fstream>
#include <cctype>
#include <chrono>

void convertFileToUppercase(const std::string& filePath) {
    std::ifstream inputFile(filePath);
    if (!inputFile) {
        std::cout << "Error opening file." << std::endl;
        return;
    }

    std::string outputFilePath = "output.txt";
    std::ofstream outputFile(outputFilePath);
    if (!outputFile) {
        std::cout << "Error creating new file." << std::endl;
        inputFile.close();
        return;
    }

    char ch;
    auto start = std::chrono::steady_clock::now(); // Start the timer

    while (inputFile.get(ch)) {
        outputFile.put(toupper(ch));
    }

    auto end = std::chrono::steady_clock::now(); // Stop the timer
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
    double elapsed_time = duration.count() / 1000.0;

    inputFile.close();
    outputFile.close();

    std::cout << "File converted to uppercase successfully." << std::endl;
    std::cout << "Time taken: " << elapsed_time << " seconds" << std::endl;
}

int main() {
    std::string filePath = "D:\\Thapar\\Thapar Summer School\\Week 1\\Day 2\\Mini Project - Text File Conversion\\Files\\800MB.txt";
    convertFileToUppercase(filePath);

    return 0;
}
