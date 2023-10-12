#include <cstdlib>

[[noreturn]] void checkNegative(int num) {
    if (num >0)
        throw "Received positive input";
    std::exit(0);
}