#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    double a = 3;
    double b = -4;
    double c = 9;

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Корни квадратного уравнения: " << root1 << " и " << root2 << endl;
    }
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Уравнение имеет один корень: " << root << endl;
    }
    else {
        cout << "Уравнение не имеет действительных корней." << endl;
    }

    return 0;
}