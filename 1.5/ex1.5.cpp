# include <iostream>
# include <cstdio>
# include <string>

using namespace std;

double calculateCostCar(double distance, double consumption, double damping, double fuelPrice)
{
	double consumptionPerKm = distance * (consumption / 100);
	double costConsumption = consumptionPerKm * fuelPrice;
	double costDamping = distance * damping;
	return costDamping + costConsumption;
}

double calculateCostTrain(double ticketPrice)
{
	return ticketPrice * 2;
}

string displayCosts(double costCar, double costTrain)
{
	string message;
	message.append("Cost car: ");
	message.append(to_string(costCar));
	message.append("\n");
	message.append("Cost train: ");
	message.append(to_string(costTrain));
	return message;
}

int main()
{
	const double FUEL_PRICE = 1.8;
	const double CAR_CONSUMPTION = 5.5;
	const double CAR_DAMPING = 2.4;
	double distance, ticketPrice;
	
	cout << "please enter the distance of the trip by car" << endl; 
	cin >>  distance;
	cout << "please enter the ticketPrice for  simple trip by train" << endl;
	cin >> ticketPrice;
	
	double costCar = calculateCostCar(distance, CAR_CONSUMPTION, CAR_DAMPING, FUEL_PRICE);
	double costTrain = calculateCostTrain(ticketPrice);
	displayCosts(costCar, costTrain);
    if(costCar < costTrain)
	{
		cout << "Car is more economic" << endl;
	}
	else
	{
		cout << "train is more economic" << endl;
	}
	
	cout << "Please hit enter to quit" << endl;
	getchar();
	getchar();
	
}