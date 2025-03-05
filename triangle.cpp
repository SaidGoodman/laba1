#include <iostream>
#include <cmath>
#include <map>
using namespace std;

//Функция для рассчета параметров прямоугольника
void Rectangle(){
    int length = 0;
    int width = 0;

    cout << "Enter length and width of rectangle"s << endl;

    cin >> length >> width;

    if (length <= 0 || width <= 0){
        cout << "Inappropriate values"s << endl;
        return;
    };

    int perimeter = 2 * (length + width);
    int area = length * width;
    double diagonal = sqrt(pow(length, 2) + pow(width, 2));

    cout << "Characteristics of rectangle"s << endl;
    cout << "Perimeter: "s << perimeter << '\n' << "Area: "s << area << '\n' << "Diagonal: "s << diagonal << endl;
};


void triangle()
{
	double s1, s2, s3;
	cout << "Enter the 3 sides of the triangle" << endl;
	cin >> s1 >> s2 >> s3;
	double MaxTr = (s1 <= s2 && s3 <= s2) ? s2 : (s2 <= s1 && s3 <= s1) ? s1 : s3;
	if (MaxTr * 2 >= s1 + s2 + s3)
	{
		cout << "There is no such triangle" << endl;
	}
	else
	{
		cout << "Perimeter = " << s1 + s2 + s3 << endl; 
		double ppm = (s1 + s2 + s3) / 2;
		cout << "Square = " << sqrt(ppm * (ppm - s1) * (ppm - s2) * (ppm - s3)) << endl; 
		if ((s1 == s2) or (s2 == s3) or (s1 == s3))
		{
			cout << "The triangle is isosceles" << endl; 
		}
		else
		{
			cout << "The triangle is not isosceles" << endl; 
		}
	}
}

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
    cout << "-------------MENU-------------" << endl;
	cout << "1 - circle " << endl;
	cout << "2 - rectangle " << endl;
	cout << "3 - triangle" << endl;
	cout << "Enter the number of figure: ";
	int choice;
	cin >> choice;
	switch (choice) {
	case 1:
	{
	    Circle();
	    break;
	}
	case 2:
    {
        Rectangle();
        break;
    }
	case 3:
	{
		triangle();
		break;
	}
	default:
		cout << "Sorry, there is no such option yet.";
	}

}