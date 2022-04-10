#include <iostream>
using namespace std;

template<typename T>
int swapnum(T& c, T& d) 
{
    T temp = c;
    c = d;
    d = temp;
    return c, d;
}

int main()
{
    int a, b;
    cin >> a >> b;
    swapnum(a, b);
    cout << a << " " << b << '\n';
}
