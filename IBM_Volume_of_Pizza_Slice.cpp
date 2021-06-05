/******************************************************************************

IBM june 2021

Volume of Pizza Slice

Pizza is one of the favorite fast food of many and Gajanan is no exception. However, owing to his health, Gajanan is now limiting the volume that he consumes and keeps a tab on the slice that he is taking. Consider a circular pizza of radius r, and it is sliced forming an angle 8. The thickness of the pizza is assumed to be t. Now, the volume that slice of pizza would be Area of the slice x Thickness of pizza.

You need to write a program to find the volume of this pizza slice for the given angle of the slice, radius of pizza and its thickness as input.

Consider a pizza of radius r= 10cm and the thickness be t = 1cm. Let the angle of the slice be

90°. The total area of the surface of the pizza would be nr² = 3.14 x 102. Since, the slice of pizza has an angle of 90°, the area would (90 / 360) x x r2, which translates to (90 / 360) x 3.14 x 10278.5. Now, since the thickness of the pizza is 1cm, the total volume would be area of the slice times thickness. That is, 78.5 x 1 = 78.5. Now, we round it off to the nearest greater integer i.e. the ceil value, which results in 79.

Should there be any violation of the constraints listed in the constraint section, the output of the

program should print

Function Description

Complete the function sliceVolume in the editor below. The function must print the volume of the

slice of the pizza.

slice Volume has the following parameter(s):

radius: the radius of the pizza thickness: the thickness of the pizza angle: the angle of the slice of the pizza

Note: The final computed value should be rounded off to nearest greatest integer.

Constraints

. All inputs are integers.

0< thickness < 2 (The thickness of the pizza cannot be zero and cannot exceed 2cm).

0 < radius 20 (The radius of the pizza cannot be zero and cannot exceed 20cm).

0<angle < 360

- Pie = 3.14

Input Format For Custom Testing

The input contains 3 lines and each of them are:

1. First line is the radius of the pizza.

2. Second line represents the thickness of the pizza.

3. Third line denotes the angle of the slice of pizza.

Sample Case 0

Sample Input For Custom Testing

10

1

90

Sample Output

79

Explanation

Based on the calculation provided in the description above, applying all the formulae, we

get the volume as 79cm³.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int sliceVolume(int r, int t, int a)
{
    float c = 0, result;

    c = a * t * 3.14 * r * r;
    result = c / 360;

    if (r > 0 && r <= 20 && t > 0 && t <= 2 && a > 0 && a <= 360)
    {
        cout << round(result);
    }
    else
    {
        cout << "Invalid input";
    }
}

int main()
{

    int r, t, a;
    cin >> r;
    cin >> t;
    cin >> a;
    sliceVolume(r, t, a);

    return 0;
}
