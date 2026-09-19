#include<iostream>
#include<vector>

using namespace std;

int main ()
{
    vector<int> original_vec;
    vector<int> reverse_vec;

    
    int i = 1;
    
    cout << "Enter 7 Numbers\n";
    while(i <= 7)
    {
        int num = 0;
        cin >> num;
        original_vec.push_back(num);
        i++;
    }
    
    reverse_vec = original_vec;

    cout << "\n";
    
    cout << "Original Vector : ";

    for (auto x : original_vec)
    {
        cout << x << " ";
    }

    cout << "\n";

    cout << "Reverse Vector : ";

    while (!reverse_vec.empty())
    {
        cout << reverse_vec.back() << " ";
        reverse_vec.pop_back();
    }


    return 0;
}