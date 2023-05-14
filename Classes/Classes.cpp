#include <iostream>
#include <string>
#include <ctime>
using namespace std;

/*
This is a Rectangle class. To use it properly, you will need to init() the objects you create, 
then call whatever methods you want. I highly recommend to call init() immediately after declaring a new object of this class

Methods were modified to support non-standard output variants (like logging into a file)
*/
class Rectangle
{
    int width, height;
    int area, diagonal;
    string orientation;
    bool initialized = false;

public:
    const char* init(int widthMin, int widthMax, int heightMin, int heightMax)
    {
        if (widthMin <= 0 || widthMax <= 0 || heightMin <= 0 || heightMax <= 0 || widthMin > widthMax || heightMin > heightMax) {
            return "Invalid data, failed to init\n";
        }
        else {
            initialized = true;
        }

        // this is to avoid division by zero in case of matching min and max values
        if (widthMin == widthMax) {
            width = widthMin;
        } else {
            width = rand() % (widthMax - widthMin) + widthMin;
        }
        if (heightMin == heightMax) {
            height = heightMin;
        } else {
            height = rand() % (heightMax - heightMin) + heightMin;
        }

        area = width * height;
        diagonal = width ^ 2 * height ^ 2;
        if (width > height) {
            orientation = "Horizontal";
        }
        else
        {
            if (width < height)
            {
                orientation = "Vertical";
            }
            else
            {
                orientation = "Square -_-";
                // Special request from @AyloRyd: TODO: secret alternative -- attack helicopter
            }
        }
        return ""; // Unix standards
    }

    string details() // C++11 String my beloved
    {
        if (!initialized)
        {
            return "Object failed to initialize, can't retrieve details\n";
        }
        else
        {
            return string("Class -- Rectangle") + 
                "\nWidth: " + to_string(width) + 
                "\nHeight: " + to_string(height) +
                "\nArea: " + to_string(area) + 
                "\nDiagonal : " + to_string(diagonal) + 
                "\nOrientation: " + orientation + "\n";
        }
    }
};

int main()
{
    Rectangle rect1, rect2, rect3, rect4, rect5;
    cout << rect1.init(10, 50, 10, 50);
    cout << rect2.init(5, 100, 10, 25);
    cout << rect3.init(5, 20, 20, 25);
    cout << rect4.init(20, 20, 50, 75);
    cout << rect5.init(10, 20, 50, 25); // common mistake: mixed up the max and min variables
    cout << endl;

    cout << "rect1 details: \n" << rect1.details() << endl 
        << "rect2 details: \n" << rect2.details() << endl 
        << "rect3 details: \n" << rect3.details() << endl 
        << "rect4 details: \n" << rect4.details() << endl 
        << "rect5 details: \n" << rect5.details() << endl; // in terms of details, we have no details
}
