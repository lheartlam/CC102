#include <iostream>

using namespace std;

int main()
{
	int temperature;
	cout << "Enter the temperature in degree: ";
	cin >> temperature;
	if(temperature <32) {
		cout << "Bring a heavy jacket";
	} 
	else if(temperature >= 32 && temperature <= 50) {
		cout << "bring light jacket!";
	}
	else if(temperature > 50) {
		cout << "Not Bring no jacklet";
	}	
	return 0;	
}	
