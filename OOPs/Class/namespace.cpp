#include <iostream>
using namespace std;


// We use namespace to group functions/objects/vars of same names without interference

namespace Print1{
    
    void print(){
        cout << "Hello World" << '\n';
    }
}

namespace Print2{

    void print(){
        cout << "Hello Universe" << '\n';
    }
}

// Calling members using scope resolution operator ::

int main(){
    Print1::print();
    Print2::print();
}