#include <iostream>

//--------------- BASIC TERMINAL CALCULATOR IN C++ ------------------//


//---------------------Arithmetic Functions---------------//
float sum(float a, float b){
    return a + b;
}

float subtract(float a, float b){
    return a-b;
}

float product(float a, float b){
    return a*b;
}

float divide(float a, float b){
    return a/b;
}
//--------------------------------------------------------//



int main(){

    //--------------- Variables -----------------//
    float a, b;
    char operation{};  
    float sol{};  
    //-------------------------------------------//



    //------------------ MENU -------------------//
    std::cout << "Basic Calculator By Raj" << '\n';
    std::cout << "Enter Operation(+,-,/,x):";
    std::cin >> operation;

    std::cout << "Enter 1st number:";
    std::cin >> a;
    
    std::cout << "Enter 2nd number:";
    std::cin >> b;

    // Handling Operations based on user input //
    switch(operation){
        case '+':
            sol = sum(a,b);
            break;

        case '-':
            sol = subtract(a,b);
            break;

        case 'x':
            case '*':
                sol = product(a,b);
                break;

        case '/':
            sol = divide(a,b);
            break;
    }
    //-----------------------------------------//


    //  Printing solution Output
    std::cout << "solution: " << sol;
    return 0;
}