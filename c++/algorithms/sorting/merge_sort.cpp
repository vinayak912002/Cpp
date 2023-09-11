#include<iostream>
#include<vector>
using namespace std;

void merge(int nums[], int start, int mid, int end)
{
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1];
    int right[n2];

    for(int i  = 0; i < n1; i++)
    {
        left[i] = nums[start + i];
    }
    for(int j = 0; j < n2; j++)
    {
        right[j] = nums[mid + 1 + j];
    }

    int i = 0, j= 0;
    int k = start;
    while(i < n1 && j < n2)
    {
        if(left[i] <= right[j])
        {
            nums[k] = left[i];
            i++;
        }
        else
        {
            nums[k] = right[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        nums[k] = left[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        nums[k] = right[j];
        j++;
        k++;
    }
}


void mergeSort(int nums[], int start, int end)
{
    if(start < end)
    {
        int mid = start + (end - start)/2;

        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);

        merge(nums, start, mid, end);
    }
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

    mergeSort(nums, 0, n-1);
    printArray(nums, n);

    return 0;
}