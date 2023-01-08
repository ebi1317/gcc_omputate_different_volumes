//
//  main.cpp
//  C++ program computate different volumes.
//
//  Created by ebrhaim zeinali

#include <iostream>
#include <math.h>>

using namespace std;

int main()
{

    bool logVar = true;
    string inputChar;
    string introString = "Choose type:\n\t(c)cuboid\n\t(C)cube\n\t(s)sphere\n\t(x)exit\n";
    double a,b,c,r;
    while(logVar == true)
    {

        cout << introString;
        cin  >> inputChar;

        if(inputChar == "c")
        {
            cout << "side lengths a, b, c :";
            cin  >> a >> b >> c;
            cout << "Volume:" << a*b*c<< endl;

        }

        else if(inputChar == "C")
        {
            cout << "side lengths a:";
            cin  >> a;
            cout << "Volume:" <<pow(a,3)<< endl;

        }

        else if(inputChar == "s")
        {
            cout << "radius r:";
            cin  >> r;
            cout << "Volume:" <<  (4.0/3.0) *3.14159265359 * pow(r,3) << endl;

        }

        else if(inputChar == "x")
        {
            cout << "see you next time";
            break;

        }

        else
        {
            cout<<"invalid input\n";
        }




    }





    return 0;
}
