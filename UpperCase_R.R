convertFileToUppercase <- function(filePath) {
  # Read the content of the file
  con <- file(filePath, "r")
  lines <- readLines(con, warn = FALSE)
  close(con)
  
  # Convert each line to uppercase
  linesUpper <- toupper(lines)
  
  # Write the converted content to a new file
  newFilePath <- "output.txt"
  writeLines(linesUpper, newFilePath)
  
  cat("File converted to uppercase successfully.\n")
}

# Example usage
filePath <- "D:\\Thapar\\Thapar Summer School\\Week 1\\Day 2\\Mini Project - Text File Conversion\\Files\\400MB.txt"
convertFileToUppercase(filePath)
