#include <iostream>

int main(int argc, char* argv[]) {
    std::cerr << "TEST STDERR\n";

    std::cout << "Anzahl Argumente: " << argc << "\n";

    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "]: " << argv[i] << "\n";
    }

    return 0;
}