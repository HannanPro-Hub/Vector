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
    cout << "\n";

    int even = 0;
    int odd = 0;

    cout << "Elements : ";

    for (auto x : vec)
    {
        cout << x << " ";
        if (x % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "\n";

    cout << "Even : " << even << "\n";
    cout << "Odd : " << odd;
    return 0;
}