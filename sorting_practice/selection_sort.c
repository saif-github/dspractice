/*
 * selection_sort.c
 *
 *  Created on: 02-Apr-2019
 *      Author: saifullab
 Algorithm	-->Time Complexity(Worst case)
 Selection Sort		O(n^2)
 Bubble Sort		    O(n^2)
 Insertion Sort	  O(n^2)
 Heap Sort		      O(n log(n))
 Quick Sort		    O(n^2)
 Merge Sort	      O(n log(n))
 Bucket Sort		    O(n^2)
 Radix Sort	      O(nk)	
 */

/*comparision sorting--in place sorting
 *
 * compare and swap the minimum number in unsorted array
 * to first position of unsorted array
 *
 * arr[] = 64 25 12 22 11

// Find the minimum element in arr[0...4]
// and place it at beginning
11 25 12 22 64

// Find the minimum element in arr[1...4]
// and place it at beginning of arr[1...4]
11 12 25 22 64

// Find the minimum element in arr[2...4]
// and place it at beginning of arr[2...4]
11 12 22 25 64

// Find the minimum element in arr[3...4]
// and place it at beginning of arr[3...4]
11 12 22 25 64 */

#include <stdio.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void SelectionSort(int A[],int n)
{
	int i,j,min;

	for(i=0;i < n-1;i++)
	{
		min = i;					//ith position 0,1,2,3,4....n-1

		for(j=i+1; j<n; j++)			//jth position 1,2,3,4....n
		{
			if(A[j] < A[min]){
				min = j;
			}
		}

		swap(&A[min],&A[i]);
	}
}

int main()
{
	int i=0;

	int A[]={5,6,4,3,7,2};

	SelectionSort(&A[0],6);

	for(i=0;i<6;i++){
		printf("%d\t",A[i]);
	}

	return 0;
}
