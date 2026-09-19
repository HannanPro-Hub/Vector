#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    vector<int> vec;
    vector<int> new_vec;
    
    int i = 1;
    
    cout << "Enter 8 Numbers\n";
    while(i <= 8)
    {
        int num = 0;
        cin >> num;
        vec.push_back(num);
        i++;
    }
    
    int count = 0;
    for (auto x : vec)
    {
        if (x != 0)
        {
            new_vec.push_back(x);
        }
        else
        {
            count++;
        }
    }

    int j = 1;

    while (j <= count)
    {
        new_vec.push_back(0);
        j++;
    }

    cout << "\nOutput : ";
    for (auto x : new_vec)
    {
        cout << x << " ";
    }

    return 0;
}