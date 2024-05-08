#include <iostream>
using namespace std;

void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x;
    cout << "Enter the value of x: ";
    cin >> x;

    int y;
    cout << "Enter the value of y: ";
    cin >> y;

    cout << "Before swapping: " << x << " " << y << endl;
    swap(x, y);
    cout << "After swapping: " << x << " " << y << endl;

    return 0;
}