#include <iostream>

using namespace std;

class Box {
private:
    float length;
    float width;
    float height;

public:
    void set(float l, float w, float h);
    void get();
    float calcVolume();
};

void Box::set(float l, float w, float h)
{
    length = l;
    width = w;
    height = h;

}
void Box::get()
{
    cout << "The length is : " << length << endl;
    cout << "The Width is : "<< width << endl;
    cout << "The Height is : " << height << endl;

}

float Box::calcVolume(){

    return length * width * height;
}

int main()
{
    Box box1;

    box1.set(10,10,10);
    box1.get();

    float a1 = box1.calcVolume();

    cout << "Volume of the Box is : " << a1;

    return 0;

}
