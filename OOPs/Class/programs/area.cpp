#include <iostream>
using namespace std;

class Area
{
public:
    double ans{};
    float Rectangle(double l, double b)
    {
        return ans = l * b;
    }

    float Circle(double r)
    {
        return ans = {pi * (r * r)};
    }

    void print(){
        cout << "answer: " << ans << '\n';
    }

private:
    double pi = 3.14159265358979323846;
};

int main(){
    Area circle;
    circle.Circle(5);
    circle.print();
}
