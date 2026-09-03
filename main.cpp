#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>
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

    cout << left
         << setw(10) << "Color#"
         << setw(10) << "R value"
         << setw(10) << "G value"
         << setw(10) << "B value"
         << endl;

    cout << setw(10) << "------"
         << setw(10) << "-------"
         << setw(10) << "-------"
         << setw(10) << "-------"
         << endl;

    for (int i = 0; i < colors.size(); i++)
    {
        cout << setw(10) << i + 1
             << setw(10) << colors[i].red
             << setw(10) << colors[i].green
             << setw(10) << colors[i].blue
             << endl;
    }

    return 0;
}