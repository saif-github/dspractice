/*
 * linear_search.c
 *
 *  Created on: 30-May-2019
 *      Author: saifullab
 */

#include <stdio.h>

/*
 *
 * Start from the leftmost element of arr[] and
 *  one by one compare x with each element of arr[]
 *  If x matches with an element, return the index.
 *  If x doesn’t match with any of elements, return -1.
 * The time complexity of above algorithm is O(n).
 *
 */

int search(int A[],int size,int x){

	int i=0;

		for(i=0;i<size;i++){
			if(A[i]==x)
				return i;
		}

	return -1;
}

int main(void){

	int arr[]={10,20,30,40,50,60};

	int x = 60;

	int n=sizeof(arr)/sizeof(arr[0]);

	int result= search(arr,n,x);

	(result == -1) ? printf("Element is not present\n"):printf("element is present at index %d\n",result);

	return 0;
}

