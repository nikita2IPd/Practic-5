#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int numVisitors;
    cout << "Кол-во посетителей: ";
    cin >> numVisitors;

    int age;
    int minAge = numeric_limits<int>::max();
    int maxAge = numeric_limits<int>::min();
    int totalAge = 0;

    for (int i = 1; i <= numVisitors; i++) {
        cout << "Возраст посетителя " << i << ": ";
        cin >> age;

        if (age < minAge) {
            minAge = age;
        }

        if (age > maxAge) {
            maxAge = age;
        }

        totalAge += age;
    }

    double averageAge = static_cast<double>(totalAge) / numVisitors;

    cout << "Возраст самого младшего посетителя: " << minAge << endl;
    cout << "Возраст самого старшего посетителя:: " << maxAge << endl;
    cout << "Средний возраст посетителей: " << averageAge << endl;

    return 0;
}