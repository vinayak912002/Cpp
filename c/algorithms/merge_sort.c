#include <stdio.h>
#include <stdlib.h>

void merge(int nums[], int start, int mid, int end)
{
    //find the size of the arrays
    int n1 = mid - start + 1;
    int n2 = end - mid;

    //creating the temporary arrays
    int left[n1], right[n2];

    // filling those elements with the numbers
    for(int i = 0; i < n1; i++)
    {
        left[i] = nums[i];
    }
    for(int j = 0; j < n2; j++)
    {
        right[j] = nums[mid + 1 + j];
    }

    //now we merge those arrays
    //we will need three pointers
    //one will keep track of the original array
    //one will keep track of the right array and the other will keep track of the left
    int k = start; //for the original array
    int i = 0, j = 0; //for the left and right arrays respectively

    while (i < n1 && j < n2)
    {
        if(left[i] <= right[j])
        {
            nums[k] = left[i];
            i++;
        }else
        {
            nums[k] = right[j];
            j++;
        }
        k++;
    }

    //now to fill up the remaining elements
    while (i < n1)
    {
        nums[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        nums[k] = right[j];
        j++;
        k++;
    }
    
}

void mergeSort(int nums[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start)/2;//the midpoint of the array

        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);

        merge(nums, start, mid, end);
    }
}
// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

//Driver code 
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printf("Given array is \n");
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	printf("\nSorted array is \n");
	printArray(arr, arr_size);
	return 0; 
}