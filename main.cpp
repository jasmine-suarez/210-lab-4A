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

    vector<Color> colors;

    int n = 25 + (rand() % 26);

    return 0;
}