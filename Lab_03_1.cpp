#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x;
    double y;
    double A;
    double B;

    cout << "x = ";
    cin >> x;


    A = pow(x, 3) + 2;


    if (x < 4)
        B = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
    if (x >= 4 && x < 7)
        B = atan(fabs((x + 3) / 2.0)) + 7 * x;
    if (x >= 7)
        B = log10(2 * x + exp(5 * x + 5));

    y = A + B;

    cout << endl;
    cout << "1) y = " << y << endl;


    if (x < 4)
        B = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
    else if (x < 7)
        B = atan(fabs((x + 3) / 2.0)) + 7 * x;
    else
        B = log10(2 * x + exp(5 * x + 5));

    y = A + B;

    cout << "2) y = " << y << endl;

    cin.get();
    return 0;
}
