#include <iostream>
using namespace std;
//in place of using length as input we can use sizeof function

void bubbleSort(int nums[], int length)
{
    for (int j = 0; j < length - 1; j++)
    {
        for (int i = 0; i < length - j; i++)
        {
            if(nums[i] > nums[i + 1])
            {
                int temp = nums[i];
                nums[i] = nums[i + 1];
                nums[i + 1] = temp;
            }
        }  
    }
}

void printArray(int nums[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << nums[i]<<" ";
    }
}

int main()
{
    int nums[] = {8,9,10,5,4};
    bubbleSort(nums, 5);
    cout<<"sorted array";
    printArray(nums, 5);
    
    return 0;
}