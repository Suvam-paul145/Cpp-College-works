#include <iostream>
#include <string>
using namespace std;

// Base class Vehicle
class Vehicle
{
protected:
	float mileage;
	float price;

public:
	Vehicle(float m, float p) : mileage(m), price(p) {}
};

// Subclass Car inheriting from Vehicle
class Car : public Vehicle
{
protected:
	float ownership_cost;
	int warranty;
	int seating_capacity;
	string fuel_type;

public:
	Car(float m, float p, float oc, int w, int sc, string ft)
		: Vehicle(m, p), ownership_cost(oc), warranty(w), seating_capacity(sc), fuel_type(ft) {}
};

// Audi subclass inheriting from Car
class Audi : public Car
{
	string model_type;

public:
	Audi(float m, float p, float oc, int w, int sc, string ft, string mt)
		: Car(m, p, oc, w, sc, ft), model_type(mt) {}

	void displayInfo()
	{
		cout << "Audi " << model_type << ":\n";
		cout << "  Mileage: " << mileage << " km/l\n";
		cout << "  Price: $" << price << "\n";
		cout << "  Ownership Cost: $" << ownership_cost << "\n";
		cout << "  Warranty: " << warranty << " years\n";
		cout << "  Seating Capacity: " << seating_capacity << "\n";
		cout << "  Fuel Type: " << fuel_type << "\n";
	}
};

// Ford subclass inheriting from Car
class Ford : public Car
{
	string model_type;

public:
	Ford(float m, float p, float oc, int w, int sc, string ft, string mt)
		: Car(m, p, oc, w, sc, ft), model_type(mt) {}

	void displayInfo()
	{
		cout << "Ford " << model_type << ":\n";
		cout << "  Mileage: " << mileage << " km/l\n";
		cout << "  Price: $" << price << "\n";
		cout << "  Ownership Cost: $" << ownership_cost << "\n";
		cout << "  Warranty: " << warranty << " years\n";
		cout << "  Seating Capacity: " << seating_capacity << "\n";
		cout << "  Fuel Type: " << fuel_type << "\n";
	}
};

// Bike subclass inheriting from Vehicle
class Bike : public Vehicle
{
protected:
	int number_of_cylinders;
	int number_of_gears;
	string cooling_type;
	string wheel_type;
	int fuel_tank_size;

public:
	Bike(float m, float p, int nc, int ng, string ct, string wt, int fts)
		: Vehicle(m, p), number_of_cylinders(nc), number_of_gears(ng), cooling_type(ct), wheel_type(wt), fuel_tank_size(fts) {}
};

// Bajaj subclass inheriting from Bike
class Bajaj : public Bike
{
	string make_type;

public:
	Bajaj(float m, float p, int nc, int ng, string ct, string wt, int fts, string mt)
		: Bike(m, p, nc, ng, ct, wt, fts), make_type(mt) {}

	void displayInfo()
	{
		cout << "Bajaj " << make_type << ":\n";
		cout << "  Mileage: " << mileage << " km/l\n";
		cout << "  Price: $" << price << "\n";
		cout << "  Cylinders: " << number_of_cylinders << "\n";
		cout << "  Gears: " << number_of_gears << "\n";
		cout << "  Cooling Type: " << cooling_type << "\n";
		cout << "  Wheel Type: " << wheel_type << "\n";
		cout << "  Fuel Tank Size: " << fuel_tank_size << " inches\n";
	}
};

// TVS subclass inheriting from Bike
class TVS : public Bike
{
	string make_type;

public:
	TVS(float m, float p, int nc, int ng, string ct, string wt, int fts, string mt)
		: Bike(m, p, nc, ng, ct, wt, fts), make_type(mt) {}

	void displayInfo()
	{
		cout << "TVS " << make_type << ":\n";
		cout << "  Mileage: " << mileage << " km/l\n";
		cout << "  Price: $" << price << "\n";
		cout << "  Cylinders: " << number_of_cylinders << "\n";
		cout << "  Gears: " << number_of_gears << "\n";
		cout << "  Cooling Type: " << cooling_type << "\n";
		cout << "  Wheel Type: " << wheel_type << "\n";
		cout << "  Fuel Tank Size: " << fuel_tank_size << " inches\n";
	}
};

int main()
{
	// Create instances for Audi, Ford, Bajaj, and TVS
	Audi audiCar(15.0, 50000, 2000, 5, 5, "Petrol", "A4");
	Ford fordCar(12.0, 40000, 1500, 3, 5, "Diesel", "Mustang");

	Bajaj bajajBike(40.0, 2000, 1, 5, "Air", "Alloys", 12, "Pulsar");
	TVS tvsBike(35.0, 1500, 1, 4, "Liquid", "Spokes", 10, "Apache");

	// Display information
	audiCar.displayInfo();
	cout << endl;
	fordCar.displayInfo();
	cout << endl;
	bajajBike.displayInfo();
	cout << endl;
	tvsBike.displayInfo();

	return 0;
}
