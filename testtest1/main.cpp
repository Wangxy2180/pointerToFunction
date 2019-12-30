#include <iostream>

int a[10] = { 0,1,2,3,4,5,6,7,8,9 };

int numIs0(int pos)
{
	return a[0]+pos;
}
int numIs1(int pos)
{
	return a[1] + pos;
}
int numIs2(int pos)
{
	return a[2] + pos;
}int numIs3(int pos)
{
	return a[3] + pos;
}int numIs4(int pos)
{
	return a[4] + pos;
}int numIs5(int pos)
{
	return a[5] + pos;
}

//int numIs(int pos)
//{
//
//}
enum numberType{num0,num1,num2,num3,num4,num5};

int (*numIs_array[])(int) = {numIs0, numIs1,numIs2,numIs3 ,numIs4 ,numIs5 };

int getNum(int pos, int(*numIs_ptr)(int))
{
	int a = numIs_ptr(pos);
	return a;
}

using namespace std;
int main()
{
	cout << "ÊäÈëpos" << endl;
	int pos = -1;
	cin >> pos;

	int(*numIs_ptr)(int) = 0;
	numIs_ptr = numIs_array[pos];
	int out = getNum(pos,*numIs_ptr);
	cout << out << endl;
}