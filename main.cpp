#include <iostream>
#include <vector>
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

    vector<Color> colors;

    colors.push_back(color1);

    cout << "\nVector Test" << endl;
    cout << "Red: " << colors[0].red << endl;
    cout << "Green: " << colors[0].green << endl;
    cout << "Blue: " << colors[0].blue << endl;

    return 0;
}