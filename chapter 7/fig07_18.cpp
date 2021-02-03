#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
    const size_t arraySize = 7;
    array<string, arraySize> colors = {"red", "orange", "yellow", "green", "blue", "indigo", "violet"};

    cout << "Unsorted array:\n";
    for (string color : colors)
    {
        cout << color << " ";
    }

    sort(colors.begin(), colors.end());

    cout << "\n\nSorted array ascending:\n";
    for (string item : colors)
    {
        cout << item << " ";
    }
    
    
    // reverse(colors.begin(), colors.end());

    // cout << "\n\nSorted array descending:\n";
    // for (string item : colors)
    // {
    //     cout << item << " ";
    // }
   


    bool found = binary_search(colors.begin(), colors.end(), "indigo");
    cout << "\n\n\"indigo\" " << (found ? "was" : "was not")
        << " found in colors" << endl;
    
    found = binary_search(colors.begin(), colors.end(), "cyan");
    cout << "\"cyan\" " << (found ? "was" : "was not")
        << " found in colors" << endl;

    system("pause");
    return 0;
}
