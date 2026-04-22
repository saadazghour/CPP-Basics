#include <iostream>
#include <string>

int main() {
    std::string cmd;
    int m,n;

    while (true) {

        std::cin >> cmd;
        std::cin >> n >> m;

        if (cmd == "exit") {
            break;
        }

        if (cmd == "sum") {
            std::cout << n + m << std::endl;
        } else if (cmd == "sub") {
            std::cout << n - m << std::endl;
        } else if (cmd == "mul") {
            std::cout << m * n << std::endl;
        } else if (cmd == "div") {
            if (m == 0 ) {
                std::cout << "Error: Division By Zero!" << std::endl;
            } else {
                std::cout << n / m << std::endl;
            }
        } else {
            std::cout << "Sorry, could not understand your command " << std::endl;
        }
    }
    return 0;
}