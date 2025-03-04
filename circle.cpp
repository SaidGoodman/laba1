#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления параметров окружности
void Circle() {
    double radius = 0, angle = 0;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    if (radius <= 0) {
        cout << "Incorrect radius value" << endl;
        return;
    }

    cout << "Enter the sector angle in degrees: ";
    cin >> angle;

    if (angle <= 0 || angle > 360) {
        cout << "Incorrect angle value" << endl;
        return;
    }

    // Вычисление длины окружности
    double circumference = 2 * M_PI * radius;
    // Вычисление площади круга
    double circleArea = M_PI * radius * radius;
    // Вычисление площади кругового сектора
    double sectorArea = 0.5 * radius * radius * (M_PI / 180) * angle;

    // Вывод результатов
    cout << "Characteristics of a circle:" << endl;
    cout << "Circumference: " << circumference << '\n'
         << "circleArea: " << circleArea << '\n'
         << "Area of a circular sector: " << sectorArea << endl;
}

int main() {
    Circle();
}
