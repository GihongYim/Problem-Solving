#include <iostream>
#include <string>

int main() {
    std::string line;

    while (std::getline(std::cin, line)) {
        size_t pos;
        while ((pos = line.find("BUG")) != std::string::npos) {
            line.erase(pos, 3);
        }
        std::cout << line << std::endl;
    }

    return 0;
}