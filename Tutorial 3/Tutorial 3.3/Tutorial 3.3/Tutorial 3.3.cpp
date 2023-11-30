
#include <iostream>

using namespace std;

struct Box {

    int height;
    int width;
    int length;

};

int volume(int height, int width, int length);

int main()
{
    Box box1;
    Box box2;

    int totalVolume;

    cout << "Enter Box 1 Height : ";
    cin >> box1.height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.length;

    cout << "Enter Box 2 Height : ";
    cin >> box2.height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.length;

    totalVolume = volume(box1.height, box1.width, box1.length)
        + volume(box2.height, box2.width, box2.length);

    cout << "Volume of Box is " << totalVolume << endl;

    return 0;

}

int volume(int height, int width, int length) {

    return height * width * length;

}