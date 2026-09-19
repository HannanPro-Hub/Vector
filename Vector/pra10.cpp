#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    vector<int> vec;
    
    int i = 1;
    
    cout << "Enter 10 Numbers\n";
    while(i <= 10)
    {
        int num = 0;
        cin >> num;
        vec.push_back(num);
        i++;
    }

    int largest = vec[0];
    int smallest = vec[0];

    int larCount = 0;
    int smaCount = 0;

    for (auto x : vec)
    {
        if (x > largest)
        {
            largest = x;
        }
    }

    for (auto x : vec)
    {
        if (x < smallest)
        {
            smallest = x;
        }
    }

    for (auto x : vec)
    {
        if (x == largest)
        {
            larCount++;
        }
    }

    for (auto x : vec)
    {
        if (x == smallest)
        {
            smaCount++;
        }
    }

    cout << "Largest : " << largest << "\n";
    cout << "Smallest : " << smallest << "\n";
    cout << "Largest Appear : " << larCount << "\n";
    cout << "Smallest Appear : " << smaCount << "\n";


    return 0;
}