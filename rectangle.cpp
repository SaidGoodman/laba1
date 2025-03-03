#include <iostream>
#include <cmath>
#include <string>

using namespace std;

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
    cout << "Perimeter: " << perimeter << '\n' << "Area: " << area << '\n' << "Diagonal: " << diagonal << endl;
};

int main(){
    Rectangle();
}
