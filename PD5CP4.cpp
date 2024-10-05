#include<iostream>
#include<iomanip>
using namespace std;
double vehicle(char vehical, double price);

main(){

    char vehical;
    cout << "Enter a vehicle type code(M , E, S, V, T):";
    cin >> vehical;
    double price;
    cout << "Enter price of vehicle:";
    cin >> price;
    double result;
    
    result= vehicle(vehical, price);
    cout << "Price after tax is $" << fixed <<setprecision(7)<<result << endl; 

}
double vehicle(char vehical, double price){

    if(vehical=='M'){
        return (price + (price*0.06));
    }
    if(vehical=='E'){
        return (price + (price*0.08));
    }
    if(vehical=='S'){
        return (price+ (price*0.1));
    }
    if(vehical=='V'){
        return (price + (price*0.12));
    }
    if(vehical=='T'){
        return (price + (price*0.15));
    }
}