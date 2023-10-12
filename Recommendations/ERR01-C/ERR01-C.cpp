#include <cstdio>
#include <iostream>

int main() {
    // Open a file for writing
    FILE* file = fopen("example.txt", "w");
    
    // Check if the file was opened successfully
    if (file == nullptr) {
        std::cerr << "Error: Could not open file" << std::endl;
        return 1; // Return an error code
    }

    // Attempt to write data to the file
    std::size_t written = fwrite("Hello, world!", 1, 13, file);
    
    // Check for a writing error using ferror(), not errno
    if (ferror(file) || written != 13) {
        std::cerr << "Error: Failed to write to file" << std::endl;
        fclose(file); // Always make sure to close the file even in case of error
        return 2; // Return a different error code
    }
    
    // Close the file
    fclose(file);

    std::cout << "Data written successfully!" << std::endl;
    return 0; // Return 0 to indicate success
}
