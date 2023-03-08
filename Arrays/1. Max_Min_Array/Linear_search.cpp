/*

Initialize values of min and max as minimum and maximum of the first two elements respectively. Starting from 3rd, compare each element with max and min, and change max and min accordingly.

Total number of comparisons: 
1 + 2(n-2) in the worst case. (Descending Order)
1 + n – 2 in the best case.  (Ascending Order)

Time Complexity: O(n)
Auxiliary Space: O(1) as no extra space was needed.

*/

#include<iostream>
using namespace std;

// Pair struct is used to return
// two values from getMinMax()
struct Pair
{
	int min;
	int max;
};

Pair getMinMax(int arr[], int n)
{
	struct Pair minmax;	
	int i;
	
	// If there is only one element
	// then return it as min and max both
	if (n == 1)
	{
		minmax.max = arr[0];
		minmax.min = arr[0];	
		return minmax;
	}
	
	// If there are more than one elements,
	// then initialize min and max
	if (arr[0] > arr[1])
	{
		minmax.max = arr[0];
		minmax.min = arr[1];
	}
	else
	{
		minmax.max = arr[1];
		minmax.min = arr[0];
	}
	
	for(i = 2; i < n; i++)
	{
		if (arr[i] > minmax.max)	
			minmax.max = arr[i];
			
		else if (arr[i] < minmax.min)	
			minmax.min = arr[i];
	}
	return minmax;
}

// Driver code
int main()
{
	int arr[] = { 1000, 11, 445,
				1, 330, 3000 };
	int arr_size = 6;
	
	struct Pair minmax = getMinMax(arr, arr_size);
	
	cout << "Minimum element is "
		<< minmax.min << endl;
	cout << "Maximum element is "
		<< minmax.max;
		
	return 0;
}
