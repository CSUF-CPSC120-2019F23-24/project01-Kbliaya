// Name: Kaylee Bliaya
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <string>

int main()
{
  //Declare the variables.
  std::string location;
  double days, hotel, meal, total;

  //Introduction.
  std::cout << "Welcome to the Business Trip Tracker!\n\n";

  //Get the location of the trip.
  std::cout << "What is the business trip location? ";
  std::cin >> location;

  //Get the amount of days the trip will take.
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  //Get the total hotel expenses.
  std::cout << "What are the total hotel expenses? ";
  std::cin >> hotel;

  //Get the total meal expenses.
  std::cout << "What are the total meal expenses? ";
  std::cin >> meal;

  //Calculate the total expenses.
  total = meal + hotel;

  //Print the header row and results.
  std::cout << std::setw(15) << "Location"
    << std::setw(17) << "Days"
    << std::setw(17) << "Hotel"
    << std::setw(17) << "Meal"
    << std::setw(17) << "Total\n";
  std::cout << std::setw(15) << location
    <<std::setw(17) << days
    <<std::setw(17) << hotel
    <<std::setw(17) << meal
    <<std::setw(17) << total << '\n';

    return 0;

}
