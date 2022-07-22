#include <iostream>
using namespace std;
using std::stoi;
int square(int);
//#define square(val) (val * val)
int main()
{
    int a;
    float b;
    double c;
    a = square(0.04);
    b = square(1.04);
    c = square(2.04);

    cout << " " << a << " , " << b << " , " << c << endl;
}
int square(int val) { return val * val; }