// COMSC-210 | Lab 4A | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
#include <vector>
#include <ctime> // for time()
#include <cstdlib> // for rand()
using namespace std;

struct Color
{
    int redVal;
    int greenVal;
    int blueVal;
};

int main()
{
    srand(time(0));

    // Generates random int n between 25-50
    int n = 25 + (rand() % 26);

    vector<Color> colors;

    for (int i = 0; i < n; i++)
    {
        Color temp;

        temp.redVal = rand() % 256;
        temp.greenVal = rand() % 256;
        temp.blueVal = rand() % 256;
    }

    return 0;
}