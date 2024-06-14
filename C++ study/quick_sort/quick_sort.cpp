#include<iostream>

using namespace std;

int partition(int(&)[10], int, int);
void quickSort(int(&)[10], int, int);
void swap(int(&)[10], int, int);
void printArray(const int(&)[10]);

int main() {
	int arr[10] = { 23, 45, 18, 6, 11, 19, 22, 18, 12, 9 };

	printArray(arr);

	int size = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr, 0, size - 1);
	printArray(arr);

	cin.get();
}

void quickSort(int(&a)[10], int start, int end) {
	if (start >= end)
		return;

	int mid = partition(a, start, end);

	quickSort(a, start, mid - 1);
	quickSort(a, mid + 1, end);
}

int partition(int(&a)[10], int start, int end) {
	int pivot = a[start];

	int left = start;
	int right = end;

	while (left < right)
	{
		while (a[left] <= pivot && left < right)
			left++;
		while (a[right] >= pivot && left < right)
			right--;

		swap(a, left, right);
	}

	if (a[left] <= pivot)
	{
		swap(a, start, left);
		return left;
	}
	else if (a[left] > pivot)
	{
		swap(a, start, left - 1);
	}
}

void swap(int(&a)[10], int i, int j) {
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void printArray(const int(&a)[10]) {
	for (int num : a)
		cout << num << "\t";
	cout << endl;
}