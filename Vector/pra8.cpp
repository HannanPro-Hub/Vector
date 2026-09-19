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

    int largest = vec[0];

    for (auto x : vec)
    {        
        if(x > largest)
        {
            largest = x;
        }
    }

    for (auto x : vec)
        {
            if (x != largest)
            {
                new_vec.push_back(x);
            }
        }

    int second_largest = new_vec[0];

    for (auto x : new_vec)
    {        
        if(x > second_largest)
        {
            second_largest = x;
        }
    }
    
    cout << "Largest : " << largest << "\n";
    cout << "Second Largest : " << second_largest << "\n";
    return 0;
}