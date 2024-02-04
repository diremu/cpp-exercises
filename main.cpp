#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int pi_calculator() {
    const float PI = M_PI;
    float volume;
    int radius;
    float fraction = 4/3 ;
    cout << "This is a program to calculate the volume of a sphere";
    cout << "\nPlease enter a radius in m^3:" << "\t";
    cin >> radius;
    volume = fraction * PI * ( radius * radius * radius);
    cout << "\n The volume of your sphere is " << volume <<  "M^3" << endl;
    return 0;
}

int volume_of_cube() {
    float length;
    cout << "\nThis is a program to calculate the volume of a cube" << endl;
    cout << "\nPlease enter the length of your cube: \t";
    cin >> length;
    double volume = length * length * length;
    cout << "\nThe volume of your cube in M^3 is " << volume << endl;
    return 0;
}

int area_and_p() {
    float length, breadth , area, perimeter;
    cout << "\nThis is a program for calculating the area and perimeter of a rectangle." << endl;
    cout << "Please input the length of the rectangle:\t";
    cin >> length;
    cout << "\nPlease input the breadth of the rectangle:\t";
    cin >> breadth;
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    cout << "\nThe area of the rectangle is " << area <<endl;
    cout << "The perimeter of the rectangle is " << perimeter << endl;
    return 0;
}

int heron_formula() {
    float a,b,c;
    cout << "\nThis is a program for calculating the area of a triangle using heron's formula." << endl;
    cout << "Please input the length of the first side:\t";
    cin >> a ;
    cout << "\nPlease input the length of the second side:\t";
    cin >> b ;
    cout << "\nPlease input the length of the third side:\t";
    cin >> c;
    float s = (a+b+c)/2 ;
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout << "\nThe area of the triangle is " << area << endl;
    return 0;
}

int quo_mod() {
    int divisor, dividend, modulo, quotient;
    cout << "\nThis is a program for calculating the quotient and modulo of a calculation." << endl;
    cout << "Please input the divisor:\t";
    cin >> divisor;
    cout << "\nPlease input the dividend:\t";
    cin >> dividend;
    modulo = divisor % dividend;
    quotient = divisor / dividend;
    cout << "\nThe quotient and modulo respectively are " << quotient << " and " << modulo << endl;
    return 0;
}

int rect() {
    int num;
    cout << "\nThis is a program for creating a rectangle";
    cout << "\nPlease input the value for the rectangle:\t";
    cin >> num;
    /* for(int i=1;i<=4;i++) {
        for(int j=1; j<=6;j++){
            cout << num;
        }
    }*/
    cout << num << num << num << num << endl;
    cout << num << " " << " " << num << endl;
    cout << num << " " << " " << num << endl;
    cout << num << " " << " " << num << endl;
    cout << num << " " << " " << num << endl;
    cout << num << num << num << num << endl;
    return 0;
}

int multTable() {
    float number;
    cout << "\nThis is a program for calculating the first ten whole multiples for a specific number.";
    cout << "\nPlease input the number: \t";
    cin >> number;
    for (int i=1;i<=10;i++) {
        cout << "\n" << i*j;
    }
    return 0;
}



int main() {
    rect();
    return 0;
}
