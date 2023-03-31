#include <iostream>

int main() {
    for(int i = 20; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
