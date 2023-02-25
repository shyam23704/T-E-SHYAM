#include <iostream>
using namespace std;

class Rectangle
{
    private:
        int length;
        int breadth;
    public:
        Rectangle();
        Rectangle(int l, int b);
        Rectangle(Rectangle & r);
        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
        void setLength(int l);
        void setBreadth(int b);
        int Area();
        int Perimeter();
};

class Cuboid : public Rectangle
{
    private:
        int height;
    public:
        Cuboid(int h)
        {
            height = h;
        }
        int getHeight()
        {
            return height;
        }
        void setHeight(int h)
        {
            height = h;
        }
        int Volume()
        {
            return getLength() * getBreadth() * height;
        }
};

Rectangle::Rectangle()
{
    length = 1;
    breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}

Rectangle::Rectangle(Rectangle & r)
{
    length = r.length;
    breadth = r.breadth;
}

void Rectangle::setLength(int l)
{
    length = l;
}

void Rectangle::setBreadth(int b)
{
    breadth = b;
}

int Rectangle::Area()
{
    return length * breadth;
}

int Rectangle::Perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Cuboid c(16);
    c.setLength(4);
    c.setBreadth(8);
    cout << "Volume is " << c.Volume() << endl;
    cout << "Area is " << c.Area() << endl;
    cout << "Perimeter is " << c.Perimeter() << endl;
}