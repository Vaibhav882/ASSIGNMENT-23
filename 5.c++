#include <iostream>
using namespace std;

int main() {
    float l, b, h, volume;
    cout << "Enter length, breadth, and height of cuboid: ";
    cin >> l >> b >> h;
    volume = l * b * h;
    cout << "Volume = " << volume;
    return 0;
}
