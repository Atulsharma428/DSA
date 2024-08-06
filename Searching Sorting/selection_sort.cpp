#include <iostream>
using namespace std;
#include<vector>

int main()
{
    vector<int>arr = {29,72,68,13,87,51,34,42};
    int minindex;
    for (int i = 0; i < arr.size()-1; i++)
    {
        minindex = i;
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[minindex] > arr[j])
            {
                minindex=j;
            }
            
        }
            swap(arr[minindex], arr[i]);
        
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}