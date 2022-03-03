#include <iostream>
using namespace std;
int main() {
	float h, w;
	cout << "enter your height and weight" << endl;
	cin >> h >> w;
	float bmi = w / h * h;
	cout << "BMI is " << bmi << endl;
}
