#include <iostream>

using namespace std;

int main() {
    cout << "Enter Base: ";
    int base;
    cin >> base;
    cout << "Enter Height: ";
    int height;
    cin >> height;

    int area = base * height;
    cout << "Area of parallelogram = " << area << endl;
    return 0;
}
