#include<iostream>
#include<iomanip>
using namespace std;
float area(float length, float width, float hight, string unit);
main(){

    float length, width, hight ;
    string unit;
    cout << "Enter length of pyramid:";
    cin >> length;
    cout << "Enter width of pyramid";
    cin >> width;
    cout << "Enter hight of pyramid:";
    cin >> hight;
    cout << "Enter the units (km, cm, mm,):";
    cin >> unit;
    float result;
    result = area(length, width, hight,unit );
    cout << result <<fixed << setprecision(8)<< unit;
}

float area(float length, float width, float hight, string unit){
    float answer ;
    answer= length*width*hight;

    if(unit=="mm"){
        return answer*1000;
    }
    if(unit=="km"){
        return answer/1000;

    }
    if(unit=="cm"){
        return answer/100;
    }


}