#include <iostream>

using namespace std;

class microcontroller //Base micro controller class
{
public:
virtual int getValue() =0;// Virtual function
void setDegree(int D)
{
    Degree =D;
}
void setPressure (int P)
{
  Pressure =P;
}
protected :
    int Degree;
    int Pressure;

} ;
class Dataqueue
{
 virtual int getValue() =0;
} ;
//Derived class
class Temperature: public microcontroller
{
public:
    int getValue()
    {
        return (Degree);
    }
} ;
class Humidity: public microcontroller
{
   public:
    int getValue()
    {
        return(Pressure);
    }
};


int main(void)
{
    Temperature Temp;
    Humidity  Hum;

    Temp.setDegree(0);
    cout<<" Temperature of the Sensor:"<< Temp.getValue()<< endl;

    Hum.setPressure(0);
    cout<<" Pressure of the sensor:"<< Hum.getValue() << endl;
    return 0;
}
