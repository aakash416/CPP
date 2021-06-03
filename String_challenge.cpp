// String challenge

// For this challenge you will be calculating how to display a 5 star rating.
/*
have the function StarRating(str) take the str parameter being passed which will be an average rating between 0.00 and 5.00, and convert this rating into a list of 5 image names to be displayed in a user interface to represent the rating as a list of stars and half stars. Ratings should be rounded up to the nearest half. There are 3 image file names available: "full.jpg", "half.jpg", "empty.jpg". The output will be the name of the 5 images (without the extension), from left to right, separated by spaces. For example: if str is "2.36" then this should be displayed by the following image:
So your program should return the string "full full half empty empty".
*/

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string StarRating(string str)
{
    istringstream convert(str);
    float value;
    convert >> value;
    string result = "";
    int starCount = 0;
    while (starCount < 5)
    {
        if (value >= 1)
        {
            result += "full ";

            value -= 1;
        }
        else if (value > 0)
        {
            if (value + .25 >= 1)
            {
                result += "full ";
            }
            else if (value + .25 >= .5)
            {
                result += "half ";
            }
            else
            {
                result += "empty ";
            }

            value -= value;
        }
        else
        {
            result += "empty ";
        }
        starCount++;
    }
    return result;
}
int main()
{
    string s;
    cin >> s;
    cout << StarRating(s) << endl;
    return 0;
}
