#include<iostream>

using namespace std;

int search(const int(&a)[10], int start, int end, int target)
{
	if (start > end || target < a[start] || target > a[end])
		return -1;

	int mid = (start + end) / 2;

	if (a[mid] == target)
		return mid;
	else if (a[mid] > target)
		return search(a, start, mid - 1, target);
	else
		return search(a, mid + 1, end, target);

}
int main() {
	int arr[10] = { 1,2,3,4,5,6,9,12,25,38 };

	int key = 10;
	int size = sizeof(arr) / sizeof(arr[0]);

	int result = search(arr, 0, size - 1, key);

	result == -1 ?
		cout << "Can't find " << key << " in array!" << endl :
		cout << "the index is " << result << endl;

	cin.get();
}