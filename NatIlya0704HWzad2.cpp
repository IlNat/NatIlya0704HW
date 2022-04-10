#include <iostream>
#include <ctime>
using namespace std;
template <typename T>
void print(T* str, T* fin) {
    while (str != fin) {
        cout << *str << ' ';
        ++str;
    }
    cout << '\n';
}

void fill(int b[], int size) {
    srand(time(0));
    for (int i = 0; i < size; i++) {
        b[i] = rand() % 100;
        cout << b[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    const int size = 10;
    int a[size];
    fill(a, size);
    print(a, a + 10);
    cout << '\n';
}
