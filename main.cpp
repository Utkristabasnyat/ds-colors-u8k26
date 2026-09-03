#include <iostream>
using namespace std;

struct Color
{
    int red;
    int green;
    int blue;
};

int main()
{
    Color color1 = {100, 150, 200};

    cout << "Red: " << color1.red << endl;
    cout << "Green: " << color1.green << endl;
    cout << "Blue: " << color1.blue << endl;

    return 0;
}