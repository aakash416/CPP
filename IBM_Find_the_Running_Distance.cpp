/******************************************************************************
IBM  5th June 2021

Find the Running Distance

Arun daily goes for running in the playground. He wants to know what is the distance he covers when he runs around the playground. On enquiry about the dimension of the playground, he was given with the length and the diagonal of the playground. Could you help him in find out the total distance he covers based on number of rounds he takes. Here is the specification of the rectangular playground.

Given the length I, diagonal d and number of rounds he runs in the playground, the goal is calculate the running

distance

For example:

If the length of the playground is 40m and diagonal is 41m, then the breadth can be calculated as 9m.

Distance covered in 1 round ie the perimeter of the playground is 2(length+breadth) = 2(40m + 9m) 98m

If he takes 5 rounds, then total distance he covers = 5 *

98-490m

Function Description

Complete the function calRunDistance in the editor below

The function must print the distance in meters.

calRunDistance has the following parameter(s):

length: Length of the playground diagonal: Diagonal of the playground

rounds Number of rounds taken in the playground

Function Description

Complete the function calRunDistance in the editor below. The function must print the distance in meters.

calRunDistance has the following parameter(s): length: Length of the playground diagonal: Diagonal of the playground

rounds: Number of rounds taken in the playground

Constraints

length, diagonal and rounds should be positive integers, otherwise display as "Invalid input

Final output distance covered would also be a positive integer

Input Format For Custom Testing

The first line contains an integer, length, denoting

length of the playground

the

The second line contains an integer diagonal denoting the diagonal of the playground an integer, rounds, denoting the The third line contains

number of rounds ran

Sample Case O

Sample Input For Custom Testing

40

41

5

Sample Output

490

Explanation

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;

int calRunDistance(float l, float d, float r)
{
    float b, p, result;
    b = sqrt((d * d) - (l * l));

    result = round(2 * (l + b) * r);

    if (l > 0 && d > 0 && r > 0)
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

    float l, d, r;
    cin >> l;
    cin >> d;
    cin >> r;
    calRunDistance(l, d, r);

    return 0;
}
