#include <iostream>

int main() {
    int* p = nullptr; // special address (0) that means "nothing"
    std::cout << p << "\n";
    // The second one (*p) is dangerous —
    // where trying to visit a house at address 0,
    // but no house exists there.
    // The computer gets confused and kills our program.
    std::cout << *p << "\n";
    return 0;
}