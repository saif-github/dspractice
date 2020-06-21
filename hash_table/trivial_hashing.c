/*
 * trivial_hashing.c
 *
 *  Created on: 22-May-2019
 *      Author: saifullab
 */


/*Given a limited range array contains both positive and non-positive numbers,
 *  i.e., elements are in the range from -MAX to +MAX.
 * Our task is to search if some number is present in the array or not in O(1) time.
 * Since range is limited, we can use index mapping (or trivial hashing).
 * We use values as index in a big array.
 * Therefore we can search and insert elements in O(1) time.
 * */

/*
 * Assign all the values of the hash matrix as 0.
Traverse the given array:
    If the element ele is non negative assign
        hash[ele][0] as 1.
    Else take the absolute value of ele and
         assign hash[ele][1] as 1.
To search any element x in the array.

If X is non-negative check if hash[X][0] is 1 or not.
 If hash[X][0] is one then the number is present else not present.
If X is negative take absolute vale of X and then check if hash[X][1] is 1 or not.
If hash[X][1] is one then the number is present
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX 1000

// Since array is global, it is initialized as 0.
bool has[MAX + 1][2];

// searching if X is Present in the given array
// or not.
bool search(int X)
{
    if (X >= 0) {
        if (has[X][0] == 1)
            return true;
        else
            return false;
    }

    // if X is negative take the absolute
    // value of X.
    X = abs(X);
    if (has[X][1] == 1)
        return true;

    return false;
}

void insert(int a[], int n)
{
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0)
            has[a[i]][0] = 1;
       else
            has[abs(a[i])][1] = 1;
    }
}

// Driver code
int main()
{
    int a[] = { -1, 9, -5, -8, -5, -2 };

    int n = sizeof(a)/sizeof(a[0]);

    insert(a, n);

    int X = -5;
    if (search(X) == true)
       printf("present\n");
    else
       printf("Not present\n");
    return 0;
}
