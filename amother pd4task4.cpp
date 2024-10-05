#include<iostream>
using namespace std;
string projectcalculation(int hours, int days, int worker);
main(){

int hours, days, worker,updated;
cout << "Enter the needed hour:";
cin >> hours;

cout << "Enter the days that :";
cin >> days;
cout << "Enter number of all workers:";
cin >> worker;
string result;
result = projectcalculation(hours, days, worker);
updated=stoi(result);
if(updated>hours )
{
    cout<<"Yes! "<<updated<<" hours left.";
}
if(updated<hours )
{
    cout<<"Not enough time! "<<updated<<" hours needed.";
}


}

string projectcalculation(int hours, int days, int worker){
    if(((9*worker)*(days)) > hours){
        return to_string (((9*worker)*(days))-hours);
        
    }
    if(((9*worker)*(days)) < hours){
        return to_string((hours)-((9*worker)*(days)));
    }
}