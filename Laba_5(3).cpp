#include <iostream>
#include <vector>
using namespace std;
int main() {
    setlocale(0, "");
    vector<int> numbers = { 6, -2, 7, 5, -8, 4, -3, 9, -1 };

    int j = 0;

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] >= 0) {
            if (i != j) {
                numbers[j] = numbers[i];
            }
            ++j;
        }
    }

    numbers.resize(j);


    cout << "Массив без отрицательных элементов: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}