/**
 *   @file: gas_consumption.cc
 * @author: Mac Watson
 *   @date: 05-23-2024
 *  @brief: HW2 Gas Consumption
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main() {
    // Constants
    const double TOWN_MPG = 22.5;
    const double HIGHWAY_MPG = 29.5;

    // Variables
    double townMiles, highwayMiles, totalMiles, townGas, highwayGas, totalGas, averageMPG;

    // Input
    cout << "Enter the number of miles driven in town: ";
    cin >> townMiles;
    cout << "Enter the number of miles driven on the highway: ";
    cin >> highwayMiles;

    // Input validation
    if (townMiles < 0 || highwayMiles < 0) {
        cout << "Error: Number of miles driven cannot be negative." << endl;
        return 1;
    }

    // Calculations
    townGas = townMiles / TOWN_MPG;
    highwayGas = highwayMiles / HIGHWAY_MPG;
    totalMiles = townMiles + highwayMiles;
    totalGas = townGas + highwayGas;

    // Output
    cout << "--------------- Gas consumption -------------------" << endl;
    cout << fixed << setprecision(1);
    cout << "The number of miles driven in town: " << townMiles << " miles" << endl;
    cout << "The gas consumption for town driving: " << townGas << " gallons" << endl;
    cout << "The number of miles driven on the highway: " << highwayMiles << " miles" << endl;
    cout << "The gas consumption for highway driving: " << highwayGas << " gallons" << endl;
    cout << "The total miles driven: " << totalMiles << " miles" << endl;
    cout << "The total gas consumption: " << totalGas << " gallons" << endl;

    // Check if average MPG can be calculated
    if (totalMiles > 0) {
        averageMPG = totalMiles / totalGas;
        cout << "The average mpg for the trip: " << averageMPG << " miles/gallon" << endl;
    } else {
        cout << "No average can be calculated" << endl;
    }
    cout << "---------------------------------------------------" << endl;

    return 0;
}
