#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main()
{
	// A vector with the names of the months
	const vector<string> monthNames{ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

	// A vector to hold rain
	vector<double> monthlyRain(12);

	// Get rain figures from the user
	int rainHolder;

	for (int count = 0; count < 12; count++)
	{
		cout << "Enter rainfall for " << monthNames[count] << ": ";

		cin >> rainHolder;
		while (rainHolder < 0)
		{
			cout << "invalid data (negative rainfall) -- retry" << endl;
			cin >> rainHolder;
		}

		monthlyRain[count] = rainHolder;
	}

	// Calculate Avg. rain
	double sumRain = 0.0, avgRain;
	for (int count3 = 0; count3 < 12; count3++)
	{
		sumRain += monthlyRain[count3];
	}

	avgRain = sumRain / 12;


	// calc least rain
	double leastRain = 10000.0;
	int leastRainMonth;

	for (int count2 = 0; count2 < 12; count2++)
	{
		if (monthlyRain[count2] < leastRain)
		{
			(leastRain = monthlyRain[count2]);
			(leastRainMonth = count2);
		}
	}


	// calc most rain
	double mostRain = 0.0;
	int mostRainMonth;

	for (int count4 = 0; count4 < 12; count4++)
	{
		if (monthlyRain[count4] > mostRain)
		{
			(mostRain = monthlyRain[count4]);
			(mostRainMonth = count4);
		}
	}


	// cout the results
	cout << "Total rainfall: " << sumRain << endl;
	cout << "Average rainfall: " << avgRain << endl;
	cout << "Least rainfall in: " << monthNames[leastRainMonth] << endl;
	cout << "Most rainfall in: " << monthNames[mostRainMonth] << endl;
}