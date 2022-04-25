// PrintNameofNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

string getUnitsStr(int units) {
    string unitsStr = "";
  
    switch (units) {
    case 0:
        unitsStr = "zero"; break;
    case 1:
        unitsStr = "one"; break;
    case 2:
        unitsStr = "two"; break;
    case 3:
        unitsStr = "three"; break;
    case 4:
        unitsStr = "four"; break;
    case 5:
        unitsStr = "five"; break;
    case 6:
        unitsStr = "six"; break;
    case 7:
        unitsStr = "seven"; break;
    case 8:
        unitsStr = "eight"; break;
    case 9:
        unitsStr = "nine"; break;
    }

    return unitsStr;
}

string getTeensStr(int tens) {
    string teensStr = "";

    switch (tens) {
    case 0:
        teensStr = "ten"; break;
    case 1:
        teensStr = "eleven"; break;
    case 2:
        teensStr = "twelve"; break;
    case 3:
        teensStr = "thirteen"; break;
    case 4:
        teensStr = "fourteen"; break;
    case 5:
        teensStr = "fifteen"; break;
    case 6:
        teensStr = "sixteen"; break;
    case 7:
        teensStr = "seventeen"; break;
    case 8:
        teensStr = "eighteen"; break;
    case 9:
        teensStr = "nineteen"; break;
    case 10:
        teensStr = "ten"; break;
    case 11:
        teensStr = "eleven"; break;
    case 12:
        teensStr = "twelve"; break;
    case 13:
        teensStr = "thirteen"; break;
    case 14:
        teensStr = "fourteen"; break;
    case 15:
        teensStr = "fifteen"; break;
    case 16:
        teensStr = "sixteen"; break;
    case 17:
        teensStr = "seventeen"; break;
    case 18:
        teensStr = "eighteen"; break;
    case 19:
        teensStr = "nineteen"; break;
    case 20:
        teensStr = "twenty"; break;
    }

    return teensStr;
}

string getTensStr(int tens) {
    string tensStr = "";

    switch (tens) {
    case 1:
        tensStr = "ten"; break;
    case 2:
        tensStr = "twenty"; break;
    case 3:
        tensStr = "thirty"; break;
    case 4:
        tensStr = "fourty"; break;
    case 5:
        tensStr = "fifty"; break;
    case 6:
        tensStr = "sixty"; break;
    case 7:
        tensStr = "seventy"; break;
    case 8:
        tensStr = "eighty"; break;
    case 9:
        tensStr = "ninety"; break;
    }
    return tensStr;
}

string getHundredsStr(int hundreds) {
    string hundredsStr = "";

    switch (hundreds) {
    case 1:
        hundredsStr = "one hundred"; break;
    case 2:
        hundredsStr = "two hundred"; break;
    case 3:
        hundredsStr = "three hundred"; break;
    case 4:
        hundredsStr = "four hundred"; break;
    case 5:
        hundredsStr = "five hundred"; break;
    case 6:
        hundredsStr = "six hundred"; break;
    case 7:
        hundredsStr = "seven hundred"; break;
    case 8:
        hundredsStr = "eight hundred"; break;
    case 9:
        hundredsStr = "nine hundred"; break;
    }

    return hundredsStr;
}

string getThousandsStr(int th) {
    string thousandsStr = "";

    switch (th) {
    case 1:
        thousandsStr = "one thousand"; break;
    case 2:
        thousandsStr = "two thousand"; break;
    case 3:
        thousandsStr = "three thousand"; break;
    case 4:
        thousandsStr = "four thousand"; break;
    case 5:
        thousandsStr = "five thousand"; break;
    case 6:
        thousandsStr = "six thousand"; break;
    case 7:
        thousandsStr = "seven thousand"; break;
    case 8:
        thousandsStr = "eight thousand"; break;
    case 9:
        thousandsStr = "nine thousand"; break;
    }

    return thousandsStr;
}


string printNameOfNumber(int number) {
    string result = "";

    int units, tens, hundreds, thousands;

    if (number <= 9) {
        result = getUnitsStr(number);
    }
    else if (number <= 20) {
        result = getTeensStr(number);
    }
    else if (number <= 99) {
        int units = number % 10;
        int tens = number / 10;
        if (units == 0) {
            result = getTensStr(tens);
        }
        else {
            result = getTensStr(tens) + " " + getUnitsStr(units);
        } 
    }
    else if (number <= 999) {
        int units = number % 10;
        int tens = (number / 10) % 10;
        int hundreds = number / 100;

        result = getHundredsStr(hundreds);
    
        if (units == 0 && tens != 0) {
            result += " " + getTensStr(tens);
        }
        else if (units != 0 && tens == 0) {
            result += " " + getUnitsStr(units);
        }
        else if (units != 0 && tens != 0) {
            result += " " + getTensStr(tens) + " " + getUnitsStr(units);
        }
    }
    else if (number <= 9999) {
        int units = number % 10;
        int tens = (number / 10) % 10;
        int hundreds = (number / 100) % 10;
        int thousands = number / 1000;

        result = getThousandsStr(thousands);

        if (hundreds != 0 && tens == 0 && units == 0) {
            result += " " + getHundredsStr(hundreds);
        }
        else if (hundreds == 0 && tens != 0 && units != 0) {
            if (tens == 1) {
                result += " " + getTeensStr(units);
            }
        }
        else if (hundreds == 0 && tens == 0 && units != 0) {
            result += " " + getUnitsStr(units);
        }
        else if (hundreds != 0 && tens != 0 && units == 0) {
            result += " " + getHundredsStr(hundreds) + " " + getTensStr(tens);
        }
        else if (hundreds != 0 && tens == 0 && units != 0) {
            result += " " + getHundredsStr(hundreds) + " " + getUnitsStr(units);
        }
        else if (hundreds != 0 && tens != 0 && units != 0) {
            result += " " + getHundredsStr(hundreds) + " " + getTensStr(tens) + " " + getUnitsStr(units);
        }
    }

    return result;

}

int main()
{
    int number;
    cin >> number;

    cout << printNameOfNumber(number) << endl;

    return 0;
}

