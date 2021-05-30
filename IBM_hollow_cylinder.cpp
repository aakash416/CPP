/******************************************************************************

29 May 2021
IBM coding Exm
"Compute Cylindrical Volume"
Consider a sheet of steel (referred as "plane" in the diagram below)
which is then rolled into a cylinder. The dimensions of the plane (or sheet) are denoted by:
h-Height of the sheet
w-Width of the sheet
t-Thickness of the sheet
After rolling the sheet into a cylinder, a hollow cylinder is also formed (as depicted in the picture).
You are required to write a program to find the volume of this hollow cylinder.
Consider the example of a sheet having dimensions h, w and t. then upon rolling the sheet
into a cylinder along the height, then the external perimeter of cylinder would be equal to
w and the height of the cylinder would still be h. Using the formulae for perimeter of a circle,
we can determine the radius of external cylinder which when subtracted by the thickness t of sheet
would yield the radius of the inner cylinder. Then using the regular formula of volume of cylinder (rh)
can be used to determine the volume of tive inner cylinder,

*******************************************************************************/


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float h, w, t, r, a, reslut;
    cin >> h;
    cin >> w;
    cin >> t;
    r = w / (3.14 * 2) - t;
    a = 3.14 * r * r * h;
    reslut = round(a);
    if (h > 0 && w > 0 && t > 0)
    {
        cout << reslut;
    }
    else
    {
        cout << "Invalid Input";
    }
    return 0;
}
