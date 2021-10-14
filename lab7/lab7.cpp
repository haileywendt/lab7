// lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
double smallest(double x, double y, double z);
double average(double x, double y, double z);
bool all_the_same(int x, int y, int z);
bool all_different(int x, int y, int z);
bool sorted(int x, int y, int z);
string first_digit(string n);
string last_digit(string n);
int digits(string n);

int main()
{
    //Part A Program 1
    /*int x = 0;
    int y = 0;

    for (int n = 1; n < 11; n++) {
        for (int s = 0; s < 121; s++) {
            int r = rand() % 9 + 1;
            if (r == 1) {
                y = y + 1;
            }
            if (r == 2) {
                y = y - 1;
            }
            if (r == 3) {
                x = x + 1;
            }
            if (r == 4) {
                x = x - 1;
            }
            if (r == 5) {
                x = x;
                y = y;
            }
            if (r == 6) {
                x = x + 1;
                y = y + 1;
            }
            if (r == 7) {
                x = x - 1;
                y = y + 1;
            }
            if (r == 8) {
                y = y - 1;
                x = x + 1;
            }
            if (r == 9) {
                x = x - 1;
                y = y - 1;
            }
        }
        cout << "Drunkard #" << n << ": finished at location (" << x << ", " << y << ")" << endl;
    }*/

    //Part A Program 2
    int x = 0;
    int y = 0;
    int time = 0;
    double expdistance = 0.0;
    double avedistance = 0.0;
    int totalx = 0;
    int totaly = 0;
    double avestep = 0.0;
    int totaldistance = 0;

    cout << "Enter the number of minutes for each drunkard to stagger: ";
    cin >> time;

    for (int n = 1; n < 10001; n++) {
        x = 0;
        y = 0;
        for (int s = 0; s < (time * 60); s++) {
            totalx = rand() % 3 - 1;
            totaly = rand() % 3 - 1;

            x += totalx;
            y += totaly;
        }
        totaldistance += sqrt(pow(x, 2) + pow(y, 2));
    }
    
    avestep = (((4 * 1) + (4 * sqrt(2))) / 9);
    expdistance = sqrt((time * 60) * avestep);

    avedistance = totaldistance / 10000.00;

    cout << "Expected distance: " << expdistance << endl;
    cout << "Averagev distance: " << avedistance << endl;

    //Part B1
    /*double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    cout << "Enter three values: ";
    cin >> x >> y >> z;

    cout << "Smallest value is " << smallest(x, y, z) << endl;

    cout << "Average is " << average(x, y, z) << endl;*/

    //Part B2
    /*int x = 0;
    int y = 0;
    int z = 0;
    bool done = false;
    char quit = 'Q';

    while (done != true) {
        cout << "Enter 3 numbers or Q to quit: ";
        cin >> x >> y >> z;
        if (cin.fail()) {
            done = true;
            break;
        }
        if (all_the_same(x, y, z) == true) {
            cout << "Numbers are all the same." << endl;
        }
        else { cout << "Numbers are not all the same." << endl; }
        if (all_different(x, y, z) == true) {
            cout << "Numbers are all different." << endl;
        }
        else { cout << "Numbers are not all different." << endl; }
        if (sorted(x, y, z) == true) {
            cout << "Numbers are sorted." << endl;
        }
        else { cout << "Numbers are not sorted." << endl; }
    }*/

    //Part B3
    /*string n = "0";

    bool done = false;
    char quit = 'Q';

    while (done != true) {
        cout << "Enter number or Q to quit: ";
        cin >> n; 
        if (n == "Q") {
            done = true;
            break;
        }
        cout << "First digit: " << first_digit(n) << endl;
        cout << "Last digit: " << last_digit(n) << endl;
        cout << "Number of digits: " << digits(n) << endl;
    }*/
}

double smallest(double x, double y, double z) {
    double smallest = 0.0;

    if (x < y && x < z) { smallest = x; }
    else if (y < x && y < z) { smallest = y; }
    else if (z < x && z < y) { smallest = z;}
    
    return smallest;
}

double average(double x, double y, double z) {
    double average = 0.0;

    average = (x + y + z) / 3;

    return average;

}

bool all_the_same(int x, int y, int z) {
    if (x == y && x == z && y == z) {
        return true;
    }
    return false;
}

bool all_different(int x, int y, int z) {
    if (x != y && x != z && y != z) {
        return true;
    }
    return false;
}

bool sorted(int x, int y, int z) {
    if (x <= y && y <= z) {
        return true;
    }
    return false;
}

string first_digit(string n) {
    string first_digit = n.substr(0, 1);
    return first_digit;
}

string last_digit(string n) {
    string last_digit = n.substr(n.length()-1);
    return last_digit;
}

int digits(string n) {
    int digits = n.length();
    return digits;
}