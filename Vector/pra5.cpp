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
    
    int search_num = 0;
    bool found = false;

    cout << "Enter Number To Search : ";
    cin >> search_num;

    for (auto x : vec)
    {
        if (x == search_num)
        {
            cout << "Found";
            found = true;
        }
    }

    if (found == false)
    {
        cout << "Not Found";
    }

    return 0;
}