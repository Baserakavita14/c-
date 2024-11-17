#include <iostream>
#include <string>

int main() {
    // Declare variables to store user input
    std::string name;
    int age;

    // Prompt the user for their name
    std::cout << "kavita basera: ";
    std::getline(std::cin, name);

    // Prompt the user for their age
    std::cout << "17 years old: ";
    std::cin >> age;

    // Display the received information
    std::cout << "Hello, " << name << " i am  " << age << " years old." << std::endl;

    return 0;
}
