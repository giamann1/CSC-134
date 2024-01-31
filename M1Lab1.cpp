#include <iostream>
using namespace std;

/*
CSC 134
M2T2 - Apple Orchard Part 2
Manning
1/31/24
Simple interactive store.
*/




int main ()
{
    string name;
    int apples;
    double price_each;
    double total;
    //ASk user for information
    cout << "Hi, what's your name? ";
    cin >> name;
    cout << "Welcome to our orchard, " << name << endl;
    // TODO: Ask how many apples they want
    cout << "How many apples do you want?";
    cin >> apples;
    // TODO: Ask the price for each 
    cout << "price per apple";
    cin >> price_each;
    total = apples * price_each;

    // Do calculations


    
    // Print the output
    // print number of apples, price each
    cout << "We have " << apples << " apples for sale." << endl;
    cout << "Cost is $" << price_each << "each." << endl;

    double total_price = apples * price_each;
    // then print the total price
    cout << "The price for all of them is $" << total_price << endl;
    // TODO: ask the user how many to buy

    // TODO: Make prices look "Correct" (e.g. $25.00)
    
    return 0;
}