#include <iostream>
using namespace std;

class Factorial
{
    public: // access specifier
        int number; // member variable

    // Member function
    void fact(int n){
        if (n < 0) {
            cout << "Factorial not defined for negative numbers." << endl;
            return;
        }
        cout << "Factorial of " << n << " is " << factorialRecursive(n) << endl;
    }

private:
    int factorialRecursive(int n) {
        if (n == 0 || n == 1)
            return 1;
        else
            return n * factorialRecursive(n - 1);
    }
};


// Main function
int main(){
    Factorial obj1;
    obj1.fact(4);
    return 0;
}