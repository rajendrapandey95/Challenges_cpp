#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    // Receive Cartesian coordinates
    cout << "Enter the x-coordinate: ";
    cin >> x;
    cout << "Enter the y-coordinate: ";
    cin >> y;

    // Convert to polar coordinates
    double r = sqrt(x * x + y * y);
    double theta = atan2(y, x);

    // Convert theta to degrees
    const double PI = 3.14159265358979323846;
    theta = theta * 180 / PI;

    // Display polar coordinates
    cout << "Polar coordinates: (r, θ)" << endl;
    cout << "r = " << r << endl;
    cout << "θ = " << theta << " degrees" << endl;

    return 0;
}
