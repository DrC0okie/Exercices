# include <iostream>
# include <cstdio>
# include <string>

using namespace std;

double calculate1Month(double initialAmount, double interestRate, double withdrawal)
{
	interestRate = interestRate / 100;
	return (((initialAmount * interestRate) / 12) + initialAmount) - withdrawal;
}


int main()
{
	double initialAmount = 0;
	double interestRate = 0;
	double monthlyWithdrawal = 0;
	
	cout << "Enter the initial amount on the account" << endl;
	cin >> initialAmount;
	cout << "Enter the annual interest rate (format %)" << endl;
	cin >> interestRate;
	cout << "Enter the monthly withdrawal " << endl;
	cin >> monthlyWithdrawal;
	
	int i = 0;
	double resultLastMonth = 0;
	double resultCurrentMonth = 10000;
	
	while (resultCurrentMonth > 0)
	{
		resultLastMonth = resultCurrentMonth;
		resultCurrentMonth = calculate1Month(resultLastMonth);
		i ++;
		cout << "month " << i << ": " << resultCurrentMonth << endl;
	}
	
	cout << i - 1 << " Month until the account is < 0" << endl;
	
	getchar();
}

/*
compte = 10'000.-
taux intéret = 6%
500 de moin s chaque mois
for 
(10000*0.06) - 500*/