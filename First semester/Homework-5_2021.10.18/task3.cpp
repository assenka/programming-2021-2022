 #include<iostream>

using namespace std;

int main()
{

	double a = 0;

	cin >> a;

	long long value = *((long long*)&a);
	long long one = 1;
	long long abs_a = ~(~value | (one << sizeof(double) * 8 - 1));
	double absa_a = *((double*)&abs_a);
	cout << absa_a << endl;

	return EXIT_SUCCESS;
}