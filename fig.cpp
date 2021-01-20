#include <iostream>
#include <string>
#include <vector>

using namespace std;

void arrayData(vector<int> *);


main()
{    
    vector<int> ini = {0,1,2,3,4,5};

    arrayData(&ini);

    cout << ini.size() << endl;

    


    return 0;
}

void arrayData(vector<int> *data)
{
    for(auto row : *data)
    {
        cout << row;
    }
}