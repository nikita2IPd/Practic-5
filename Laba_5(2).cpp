#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    char startStation, endStation;
    int travelTime = 0;

    cout << "Введите начальную станцию: ";
    cin >> startStation;
    startStation = tolower(startStation);

    cout << "Введите конечную станцию: ";
    cin >> endStation;
    endStation = tolower(endStation);

    switch (startStation) {
    case 'a':
        switch (endStation) {
        case 'b':
            travelTime = 10;
            break;
        case 'c':
            travelTime = 20;
            break;
        case 'd':
            travelTime = 30;
            break;
        case 'e':
            travelTime = 40;
            break;
        }
        break;
    case 'b':
        switch (endStation) {
        case 'a':
            travelTime = 10;
            break;
        case 'c':
            travelTime = 15;
            break;
        case 'd':
            travelTime = 25;
            break;
        case 'e':
            travelTime = 35;
            break;
        }
        break;
        
    }

    cout << "Время в пути: " << travelTime << " минут" << endl;

    return 0;
}