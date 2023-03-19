#include <iostream>

using namespace std;

class Monitor {
public:
	int screen_resolution;
	int hz;
	int diagonal;
	string manufacturer;
	double price;
};


int main() {
	Monitor monitor;

	cout << "Input screen_resolution your monitor: ";
	cin >> monitor.screen_resolution;

	cout << "Input hz your monitor: ";
	cin >> monitor.hz;

	cout << "Input diagonal your monitor: ";
	cin >> monitor.diagonal;

	cout << "Input manufacturer your monitor: ";
	cin >> monitor.manufacturer;

	cout << "Input price your monitor: ";
	cin >> monitor.price;


	cout << "Your screen_resolution: " << monitor.screen_resolution << ", hz: " << monitor.hz << ", diagonal: " << monitor.diagonal << ", manufacturer: " << monitor.manufacturer << ", price: " << monitor.price << endl;

	return 0;
}