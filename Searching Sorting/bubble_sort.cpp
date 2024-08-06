#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> arr = {29, 72, 68, 13, 87, 51, 34, 42};
    for (int i = 1; i < arr.size(); i++)
    {
        // for round 1 to n
        // bool swapped = false;               for optimize
        for (int j = 0; j < arr.size()-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j+1], arr[j]);
                // swapped = true;
            }
        }
            // if (swapped == false)
            // {
            //     break;
            // }
            
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}