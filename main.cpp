#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

struct Color
{
    int red;
    int green;
    int blue;
};

int main()
{
    srand(time(0));

    vector<Color> colors;

    int n = rand() % 26 + 25;

    for (int i = 0; i < n; i++)
    {
        Color temp;

        temp.red = rand() % 256;
        temp.green = rand() % 256;
        temp.blue = rand() % 256;

        colors.push_back(temp);
    }

    cout << "Number of colors: " << n << endl;

    for (int i = 0; i < colors.size(); i++)
    {
        cout << "Color " << i + 1 << ": "
             << colors[i].red << ", "
             << colors[i].green << ", "
             << colors[i].blue << endl;
    }

    return 0;
}