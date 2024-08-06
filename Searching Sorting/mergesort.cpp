#include <iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1, len2 = e - mid;
    int *first = new int[len1];
    int *second = new int [len2];
    // copy values 
    int main_arr_index = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[main_arr_index++];
    }
    main_arr_index = mid+1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[main_arr_index++];
    }


    // merge 2 sorted array 
    int index1 = 0, index2 = 0;
    main_arr_index = s;

    while (index1 < len1 && index2 < len2)
    {
        if(first[index1]<second[index2]){
            arr[main_arr_index++] = first[index1++];
        }
        else{
            arr[main_arr_index++] = second[index2++];
        }
    }
    while (index1 < len1 )
    {
        arr[main_arr_index++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[main_arr_index++] = second[index2++];
    }
}


void mergesort(int *arr, int s, int e){
    if(s>=e)
        return;
    int mid = s+ (e-s)/2;
    mergesort(arr, s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}


int main()
{
    int arr[6]={2,5,3,8,1,5};
    int n = 6;
    mergesort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}