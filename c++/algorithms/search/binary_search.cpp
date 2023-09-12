#include<iostream>
using namespace std;

int binarySearch(int nums[], int length, int target)
{
    int start = 0;
    //int end = (sizeof(nums)/sizeof(nums[0])); this will not work because when we pass the array it is passed as a pointer and sizeof function will give the size of the pointer.
    int end = length - 1;

    if(end == 0)
    {
        return -1;
    }
    else
    {
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int nums[] = {2,3,4,5,7,10,12,45};
    int length = sizeof(nums)/sizeof(nums[0]);//here it works because it correctly evaluates to the size of the entire array in bytes, which is 6 * sizeof(int).
    int target = 7;
    int index = binarySearch(nums, length, target);

    if(index == -1)
    {
        cout<<"target not in the array";
    }
    else
    {
        cout<<target<<" is present at the "<< index<<"th index";
    }
    return 0;
}