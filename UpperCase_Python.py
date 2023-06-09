import time

def convert_file_to_uppercase(file_path, output_path):
    start_time = time.time()
    
    with open(file_path, 'r') as file:
        lines = file.readlines()
    
    lines_upper = [line.upper() for line in lines]
    
    with open(output_path, 'w') as file:
        file.writelines(lines_upper)
    
    end_time = time.time()
    elapsed_time = end_time - start_time
    
    print("File converted to uppercase successfully.")
    print("Time taken: {:.2f} seconds".format(elapsed_time))

# Example usage
input_file = "D:\\Thapar\\Thapar Summer School\\Week 1\\Day 2\\Mini Project - Text File Conversion\\Files\\800MB.txt"
output_file = "D:\\Thapar\\Thapar Summer School\\Week 1\\Day 2\\Mini Project - Text File Conversion\\Files\\output.txt"
convert_file_to_uppercase(input_file, output_file)
