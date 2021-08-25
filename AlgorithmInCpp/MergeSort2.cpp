#include <stdio.h> 
#include<iostream> 
#include<iomanip> 
using namespace std; 
void merge(int a[], int aux[],int lo,int mid,int hi) 
{
		if (hi <= lo) //condition for the subarray having no element or single element 
			{
		return; 
		} 
		merge(a, aux,lo,(lo+mid)/2,mid); 
		merge(a, aux,mid+1,(mid+1+hi)/2,hi); 
		
		int low = lo; 
		int high = mid + 1; 
		int k; 
		
		for (k = lo; k <= hi; k++) {
		if (low == mid + 1) { 
		
			aux[k] = a[high]; 
			high++;
		} else if (high == hi + 1) { 
		
			aux[k] = a[low]; 
			low++;
		} else if (a[low] < a[high]) { 
		
			aux[k] = a[low]; 
			low++;
		} else { 
		
			aux[k] = a[high]; 
			high++;
		} 
	}
	for (k = lo; k <= hi; k++) { // copy the elements from aux[] to a[] 
		a[k] = aux[k]; 
	} 
}

int main() { 
	int a[100], aux[100], n, i;
	
	printf("Enter number of elements in both the arrays:\n"); 
	scanf("%d", &n);
	
	printf("Enter %d integers for A followed by B arrays \n", n);
	for (i = 0; i < n; i++) 
		scanf("%d", &a[i]);
		
	merge(a,aux,0,(0+n-1)/2,n - 1);
	cout<<endl<<"Elements after merge sort : ";
	for (i = 0; i < n; i++) 
		cout<<setw(5)<<a[i];
	
	return 0; 
}
