#include <iostream>


int main(){
    // declaring name and age variables
    std::string name;
    int age;

    // Asking for input
    std::cout << "Hello what's your name?" << '\n';
    std::cin >> name;   // asking name of user

    std::cout << "How old are you?" << '\n';    // asking age
    std::cin >> age;

    // Giving Output using variables
    std::cout << "Nice to meet you " << name << '\n';
    std::cout << "You are " << age << " years old." << '\n';

    return 0;
}