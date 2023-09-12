#include<iostream>
using namespace std;
//run it on pen and paper

void swap(int arr[], int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

void quickSort(int nums[], int lo,  int hi)
{
    //select a pivot element
    //move two pointers if element at first pointer is bigger than pivot and element at second pointer is smaller than pivot swap
    //breaking condition
    if(lo > hi)
    {
        return;
    }
    int s = lo;
    int e = hi;
    int mid = s + (e-s)/2;
    int pivot = nums[mid];
    
    
    while(s <= e)
    {
        while(nums[s] < pivot)
        {
            s++;
        }
        while(nums[e] > pivot)
        {
            e--;
        }
        if(s <= e)
        {
            swap(nums, s, e);
            s++;
            e--;
        }
    }
    
    quickSort(nums, lo, e);
    quickSort(nums, s, hi);
}

void printArray(int arr[],int size)
{
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<< endl;
}

int main()
{
    int nums[] = {4,3,2,1};
    int n = sizeof(nums)/sizeof(nums[0]);

    quickSort(nums, 0, n-1);
    printArray(nums, n);

    return 0;
}