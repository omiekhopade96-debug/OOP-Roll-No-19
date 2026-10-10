#include <iostream>
using namespace std;
class Rectangle {
private:
    float length;
    float breadth;
public:
    void setDimensions(float l, float b)
    {
        length = l;
        breadth = b;
    }

    float calculateArea();
    void display();
};

float Rectangle::calculateArea()
{
    return length * breadth;
}

void Rectangle::display()
{
    cout << "Length: " << length << endl;
    cout << "Breadth: " << breadth << endl;
    cout << "Area: " << calculateArea() << endl;
}

int main()
{
    Rectangle rect;
    float length, breadth;

    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;

    rect.setDimensions(length, breadth);
    rect.display();
    
    return 0;
}

