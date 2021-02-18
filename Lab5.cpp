#include <iostream>
#include <vector>
#include <Windows.h>
#include <iomanip>


using namespace std;

int main()
{
	const int NUMBER_OF_INPUT = 10;
	int intputArray[NUMBER_OF_INPUT] = { 0, };
	float averageNumber = 0;

	vector<int> lessThanOrEqToAverageNums;
	vector<int> greaterThanAverageNums;



	cout << "Input 10 number please : ";

	for (int i = 0; i < NUMBER_OF_INPUT; i++)
	{
		cin >> intputArray[i];
		averageNumber = averageNumber + intputArray[i];
	}
	cout << endl;

	// Determining average number
	averageNumber = averageNumber / NUMBER_OF_INPUT;


	for (int i = 0; i < NUMBER_OF_INPUT; i++)
	{
		// If less than or equal to average
		if (intputArray[i] <= averageNumber)
		{
			lessThanOrEqToAverageNums.push_back(intputArray[i]);
		}
		else
		{
			greaterThanAverageNums.push_back(intputArray[i]);
		}
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "====================== Average Number ========================" << endl;
	cout << averageNumber << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "============== Less Than or Equal To Average =================" << endl;
	for (vector<int>::iterator iterPos = lessThanOrEqToAverageNums.begin() ; iterPos != lessThanOrEqToAverageNums.end(); iterPos++)
	{
		cout << *iterPos << "  ";
	}
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "=================== Greater Than Average =====================" << endl;
	for (vector<int>::iterator iterPos = greaterThanAverageNums.begin(); iterPos != greaterThanAverageNums.end(); iterPos++)
	{
		cout << *iterPos << "  ";
	}
	cout << endl;

	lessThanOrEqToAverageNums.clear();
	greaterThanAverageNums.clear();



	return 0;
}