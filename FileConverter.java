import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class FileConverter {
    public static void convertFileToUppercase(String filePath) {
        try {
            FileReader fileReader = new FileReader(filePath);
            BufferedReader bufferedReader = new BufferedReader(fileReader);

            String outputFilePath = "output.txt";
            FileWriter fileWriter = new FileWriter(outputFilePath);
            BufferedWriter bufferedWriter = new BufferedWriter(fileWriter);

            long startTime = System.currentTimeMillis(); // Start the timer

            String line;
            while ((line = bufferedReader.readLine()) != null) {
                bufferedWriter.write(line.toUpperCase());
                bufferedWriter.newLine();
            }

            long endTime = System.currentTimeMillis(); // Stop the timer
            double elapsedTime = (endTime - startTime) / 1000.0;

            bufferedReader.close();
            bufferedWriter.close();

            System.out.println("File converted to uppercase successfully.");
            System.out.println("Time taken: " + elapsedTime + " seconds");
        } catch (IOException e) {
            System.out.println("Error processing file: " + e.getMessage());
        }
    }

    public static void main(String[] args) {
        String filePath = "D:\\Thapar\\Thapar Summer School\\Week 1\\Day 2\\Mini Project - Text File Conversion\\Files\\200MB.txt";
        convertFileToUppercase(filePath);
    }
}
