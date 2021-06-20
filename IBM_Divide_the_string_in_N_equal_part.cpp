/******************************************************************************

IBM  20th June 2021

"Divide the string in N equal part"

In the world of computer programming working with Strings is an important part and it is used in many cases. We have a scenario where if any string has been provided as input and the program should divide it in N equal part. The program should also check if the input string can be divided in N equal parts or not. If it cannot divided in equal parts then it should return Invalid input as output.

For example, if the input string is of length 12 and you want to divide it by two equal parts then each divided string will be of length 6. Program should print all the divided strings in new lines. The input string may include_(underscore character) as a string separator instead of whitespace

So the goal of this program will be to divide the input string in equal parts based on the number of parts as provided in input.

Consider the following input:

Good Morning, which is the string to be processed. Let N = 2, the number of equal length strings. Since, the length of the string is 12, then splitting the string would give 2 you 2 strings Good M and orning. Should the value be N = 5, then the string cannot be split into 5 equal parts. Thus you should be printing the following text:

Invalid input

Function Description

Complete the function getDividedString in the editor below. The function should print every divided string for the given input in new line.

getDividedString has the following

parameter(s):

text: a String representing the piece of

text

count an integer denoting how many

equal part of the text is needed

Constraints

The input text cannot be empty. if it is empty the output should say Invalid Input

The input text contains only alphabers and

may use underscore character for separating the words in the input Whatever part size is given as count the input text should be divided in equal parts based on count's value

Input Format For Custom Testing

The Input contains 2 lines of input:

The first line is the string that needs to be split into equal parts.

The second line depicts the number of parts the input string should be split into.

▾ Sample Case 0

Sample Input For Custom Testing

Good Morning

2

Sample Output

Good M

orning

Explanation

Here the input text is Good Morning which is of length 12, and n = 2; so this string need to be divided in two equal parts. Each part will be 6 character long.

Sample Case 1

Sample Input For Custom Testing

University

3

Sample Output

Invalid

input

Explanation

Input text University is of length 10, and its needed to be divided in 3 equal parts. But as 10 cannot be divisible by 3 the program should print the above output.

*******************************************************************************/

#include <iostream>
using namespace std;
void Codewithvirus(string str, int n)
{
    int str_length = str.size();
    if (str_length % n != 0)
    {
        cout << "Invalid input";
        return;
    }
    int part_size = str_length / n;
    for (int i = 0; i < str_length; i++)
    {
        if (i != 0 && i % part_size == 0)
        {
            cout << endl;
        }
        cout << str[i];
    }
}
int main()
{
    int n;
    string str;
    cin >> str;
    cin >> n;
    Codewithvirus(str, n);
    return 0;
}
