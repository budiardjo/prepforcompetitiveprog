#include <cstdio>
#define N 101
using namespace std;

int X[N], C [N];
int n;

void mergeSort(int, int);
void merge(int, int, int);

int main () {
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
scanf("%d", &X[i]);
}

// Apply Merge Sort
mergeSort(0, n - 1);

// Print the sorted array
 for (int i = 0; i < n; i++) {
 printf("%d ", X[i]);
 }
 printf("\n");

 return 0;
 }
 
 void mergeSort(int i, int j) {
 if (i != j) {
 int m = (i + j) / 2;
 mergeSort(i, m);
 mergeSort(m + 1, j);
 merge(i, m, j);
 } 
}

void merge(int i, int m, int j) {
 // p and q are the indexes that will move across
 // each half respectively. 
 int p = i;
 int q = m + 1;
 int r = i;
 // Keep comparing the values of X[p] and X[q] 9 // until we reach the end of one of the halves
 while (p <= m && q <= j) {
 if (X[p] <= X[q]) {
 C[r++] = X[p++];
 } else {
 C[r++] = X[q++];
 }
 }
 
 while (p <= m) {
 C[r++] = X[p++];
 }

 // Add the remaining elements of the second half
 while (q <= j) {
 C[r++] = X[q++];
 }

 // Update the original array
 for (r = i; r <= j; r++) {
 X[r] = C[r];
 }
 }
