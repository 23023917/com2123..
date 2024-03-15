#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double height,distanceInFeet,distanceInInches,angle;
    cout<< "Enter height in inches:" << endl;
    cin>>height;

    cout<< "Enter distance in feet:" << endl;
    cin>>distanceInFeet;

    cout<< "Enter distance in inches:" << endl;
    cin>>distanceInInches;

    cout<< "Enter the angle in degrees:" << endl;
    cin>>angle;

    double convertDistance = distanceInFeet*12;

    const double PI = 3.14;
    double convertAngle = angle*PI/180;

    double heightOfTree = height+distanceInInches*tan(convertAngle);

    double convertHeightOfTree = heightOfTree/12;

    cout<< "The height of tree in feet is:" <<convertHeightOfTree << endl;

    return 0;

}
