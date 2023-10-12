#include <iostream>
#include <cstdlib>  // for std::malloc, std::free

bool allocate_memory(int** ptr, std::size_t size) {
    *ptr = static_cast<int*>(std::malloc(size * sizeof(int)));
    return *ptr != nullptr;  // Return true if allocation succeeded, else false
}

void process_data(int* ptr, std::size_t size) {
    // Dummy function to simulate data processing
    // In production, real data handling should be implemented here
}

int main() {
    const std::size_t size = 1000000;  // Requesting memory space for 1 million int
    int* data_ptr = nullptr;

    if (allocate_memory(&data_ptr, size)) {
        // Memory allocation succeeded, can use the allocated memory
        process_data(data_ptr, size);
    } else {
        // Memory allocation failed, handle the error
        std::cerr << "Error: Memory allocation failed for " << size << " ints." << std::endl;
        return 1; // Return an error code
    }

    std::free(data_ptr);  // Always free the allocated memory
    return 0; // Return 0 to indicate success
}
