#include <iostream>
#include <string>

using namespace std;

int main() {
	string num1 = "3284909789340234";
	string num2 = "2874897139";

	string result;

	// init two point at the num
	int p1 = num1.size() - 1;
	int p2 = num2.size() - 1;

	int x, y, sum;
	int carry = 0;

	while (p1 >= 0 || p2 >= 0 || carry != 0)
	{
		x = p1 >= 0 ? (num1[p1] - '0') : 0;
		y = p2 >= 0 ? (num1[p2] - '0') : 0;

		sum = x + y + carry;
		carry = sum / 10;
		result += (sum % 10 + '0');
		p1--;
		p2--;
	}

	int i = 0;
	int j = result.size() - 1;
	int num;
	while (i < j) {
		num = result[i];
		result[i] = result[j];
		result[j] = num;
		i++;
		j--;
	}

	cout << num1 << "+" << num2 << "=" << result << endl;

	cin.get();
}