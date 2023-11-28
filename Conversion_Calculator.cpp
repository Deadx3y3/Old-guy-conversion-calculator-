//Group Project: Conversion Calculator

#include <iostream>
#include <iomanip>
using namespace std;

//Class for converting between Metric and Imperial mass
class Mass
{
public:

    //Converts kilograms to pounds w/Formula: Kilograms * 2.205 = Pounds
    void mSAE(double weight) {

        cout << fixed << setprecision(2);
        cout << "The mass conversion of " << weight << " kilograms, is converted to " << weight * 2.205 << " pounds." << endl;
        cout << endl;
    }

    //Converts pounds to kilograms w/Formula: Pounds / 2.205 = Kilograms
    void mMetric(double weight) {

        cout << fixed << setprecision(2);
        cout << "The mass conversion of " << weight << " pounds, is converted to " << weight / 2.205 << " kilograms." << endl;
        cout << endl;
    }
};

//Class for converting between Metric and Imperial temperatures
class Temp
{
public:

    //Converts Celsius to Fahrenheit w/Formula: (C * 9/5) + 32 = F
    void tSAE(double temp) {

        cout << fixed << setprecision(1);
        cout << "The temperature conversion of " << temp << " degrees Celsius, is converted to " << (temp * 9 / 5) + 32 << " degrees Fahrenheit." << endl;
        cout << endl;
    }

    //Converts Fahrenheit to Celsius w/Formula: (F - 32) * 5/9 = C
    void tMetric(double temp) {

        cout << fixed << setprecision(1);
        cout << "The temperature conversion of " << temp << " degrees Fahrenheit, is converted to " << (temp - 32) * 5 / 9 << " degrees Celsius." << endl;
        cout << endl;
    }
};

//Class for converting between Metric and Imperial volumes
class volume {

public:

    //Converts gallons to liters w/Formula: Gallons * 3.78541 = Liters
    void gallonToLiter(double x) {
        cout << "The volume conversion of " << x << " gallons, is converted to " << x * 3.78541 << " liters." << endl;
        cout << endl;
    }

    //Converts liters to gallons w/Formula: Liters * 0.264172 = Gallons
    void literToGallon(double x) {
        cout << "The volume conversion of " << x << " liters, is converted to " << x * 0.264172 << " gallons." << endl;
        cout << endl;
    }

    //Converts ounces to liters w/Formula: Fluid ounces * 0.0078125 = Liters
    void ounceToLiter(double x) {
        cout << "The volume conversion of " << x << " fluid ounces, is converted to " << x * 0.0078125 << " liters." << endl;
        cout << endl;
    }

    //Converts liters to ounces w/Formula: Liters * 33.814 = Fluid ounces
    void literToOunce(double x) {
        cout << "The volume conversion of " << x << " liters, is converted to " << x * 33.814 << " fluid ounces." << endl;
        cout << endl;
    }
};

//Class for converting between metric and standard lengths
class length {

public:

    //Converts feet to meters w/Formula: Feet * 0.3048 = Meters
    void footToMeter(double x) {
        cout << "The length conversion of " << x << " feet, is converted to " << x * 0.3048 << " meters." << endl;
        cout << endl;
    }

    //Converts meters to feet w/Formula: Meters * 3.28084 = Feet
    void meterToFoot(double x) {
        cout << "The length conversion of " << x << " meters, is converted to " << x * 3.28084 << " feet." << endl;
        cout << endl;
    }

    //Converts inches to millimeters w/Formula: Inches * 25.4 = Millimeters
    void inchToMillimeter(double x) {
        cout << "The length conversion of " << x << " inches, is converted to " << x * 25.4 << " millimeters." << endl;
        cout << endl;
    }

    //Converts millimeters to inches w/Formula: Millimeters * 0.0393701 = Inches
    void millimeterToInch(double x) {
        cout << "The length conversion of " << x << " millimeters, is converted to " << x * 0.0393701 << " inches." << endl;
        cout << endl;
    }

    //Converts miles to kilometers w/Formula: Miles * 1.60934 = Kilometers
    void mileToKilometer(double x) {
        cout << "The length conversion of " << x << " miles, is converted to " << x * 1.60934 << " kilometers." << endl;
        cout << endl;
    }

    //Converts kilometers to miles w/Formula: Kilometers * 0.621371 = Miles
    void kilometerToMile(double x) {
        cout << "The length conversion of " << x << " kilometers, is converted to " << x * 0.621371 << " miles." << endl;
        cout << endl;
    }
};

int main() {
    int input1;
    double value;
    char again = 'y'; //Used for continued use of program

    Mass massConverter; //Assigns class Mass as massConverter for main use
    Temp tempConverter; //Assigns class Temp as tempConverter for main use
    volume volumeConverter; //Assigns Class Volume as volumeConverter
    length lengthConverter; //Assigns length class to lenthConverter

    //Continues while user answers yes to continue using the program
    while (again != 'n') {
        do {
            cout << "Welcome to the Old Guys conversion calculator" << endl;
            cout << "Please choose which unit of measurement you would like to convert by entering the number next to your selection" << endl;
            cout << "\n1. Mass \n2. Temperature \n3. Volume \n4. Length \n";
            cin >> input1;
            cout << endl;

            if (cin.fail()) {
                cout << "Invalid choice for menu.";
                cin.clear();
                cin.ignore(1000, '\n');
                cout << endl;
            }
        }while (input1 != 1 && input1 != 2 && input1 != 3 && input1 != 4);

        //Selection for Mass
        if (input1 == 1) {
            int i;

            //Continues until a valid choice is selected by user in the Mass menu
            do {
                cout << "Please select your starting unit: \n1. Metric to Imperial \n2. Imperial to Metric\n";
                cin >> i;
                cout << endl;

                //Clears fail condition from user entering a character instead of a number
                if (cin.fail()) {
                    cout << "Invalid choice for mass conversion.";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << endl;
                }
            }while (i != 1 && i != 2);

            //Continues until a valid value is entered by user
            do {
                cout << "Enter the value to convert: ";
                cin >> value;
                cout << endl;

                //Clears fail condition from user entering a character instead of a number
                if (cin.fail()) {
                    cout << "Invalid value for conversion.";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << endl;
                }
            }while (!value > 0 || cin.fail());

            //Sends value to Mass class for conversion to Imperial units
            if (i == 1) {
                massConverter.mSAE(value);
            }

            //Sends value to Mass class for conversion to Metric units
            else if (i == 2) {
                massConverter.mMetric(value);
            }
        }

        //Selection for Temperature conversion
        else if (input1 == 2) {
            int i;

            //Continues until a valid choice is selected by user in the temperature menu
            do {
                cout << "Please select your starting unit: \n1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius\n";
                cin >> i;
                cout << endl;

                //Clears fail condition from user entering a character instead of a number
                if (cin.fail()) {
                    cout << "Invalid choice for temperature conversion.";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << endl;
                }
            }while (i != 1 && i != 2);

            //Continues until a valid value is entered by user
            do {
                cout << "Enter the temperature value to convert: ";
                cin >> value;
                cout << endl;

                //Clears fail condition from user entering a character instead of a number
                if (cin.fail()) {
                    cout << "Invalid value for conversion.";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << endl;
                }
            }while (!value > 0 || cin.fail());

                //Sends value to Temp Class for conversion to Imperial units
                if (i == 1) {
                    tempConverter.tSAE(value);
                }

                //Sends value to Temp Class for conversion to Metric units
                else if (i == 2) {
                    tempConverter.tMetric(value);
                }
        }

        //Selection for Volume conversion
        else if (input1 == 3) {
            int i;

            //Continues until a valid choice is selected by user in the volume menu
            do {
                cout << "Please select your starting unit: \n1. Gallon to Liter \n2. Liter to Gallon \n3. Ounce to Liter \n4. Liter to Ounce\n";
                cin >> i;
                cout << endl;

                //Clears fail condition from user entering a character instead of a number
                if (cin.fail()) {
                    cout << "Invalid choice for volume conversion.";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << endl;
                }
            }while (i != 1 && i != 2 && i != 3 && i != 4);

            //Continues until a valid value is entered by user
            do {
                cout << "Enter the volume value to convert: ";
                cin >> value;
                cout << endl;

                //Clears fail condition from user entering a character instead of a number
                if (cin.fail()) {
                    cout << "Invalid value for conversion.";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << endl;
                }
            }while (!value > 0 || cin.fail());

            //Sends value to volume class for conversion to metric
            if (i == 1) {
                volumeConverter.gallonToLiter(value);
            }

            //Sends value to volume class for conversion to Imperial
            else if (i == 2) {
                volumeConverter.literToGallon(value);
            }

            //Sends value to volume class for conversion to Metric
            else if (i == 3) {
                volumeConverter.ounceToLiter(value);
            }

            //Sends value to volume class for conversion to Imperial
            else if (i == 4) {
                volumeConverter.literToOunce(value);
            }
        }

        //Selection for length conversion
        else if (input1 == 4) {
            int i;

            //Continues until a valid choice is selected by user in the length menu
            do {
                cout << "Please select your starting unit:" << endl;
                cout << "\n1. Foot to Meter \n2. Meter to Foot \n3. Inch to Millimeter";
                cout << "\n4. Millimeter to Inch \n5. Mile to Kilometer \n6. Kilometer to Mile\n";
                cin >> i;
                cout << endl;

                //Clears fail condition from user entering a character instead of a number
                if (cin.fail()) {
                    cout << "Invalid choice for volume conversion.";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << endl;
                }
            }while (i != 1 && i != 2 && i != 3 && i != 4 && i != 5 && i != 6);

            //Continues until a valid value is entered by user
            do {
                cout << "Enter the length value to convert: ";
                cin >> value;
                cout << endl;

                //Clears fail condition from user entering a character instead of a number
                if (cin.fail()) {
                    cout << "Invalid value for conversion.";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    cout << endl;
                }
            }while (!value > 0 || cin.fail());

            //Sends value to length class for conversion to Metric
            if (i == 1) {
                lengthConverter.footToMeter(value);
            }

            //Sends value to length class for conversion to Imperial
            else if (i == 2) {
                lengthConverter.meterToFoot(value);
            }

            //Sends value to length class for conversion to Metric
            else if (i == 3) {
                lengthConverter.inchToMillimeter(value);
            }

            //Sends value to length class for conversion to Imperial
            else if (i == 4) {
                lengthConverter.millimeterToInch(value);
            }

            //Sends value to length class for conversion to Metric
            else if (i == 5) {
                lengthConverter.mileToKilometer(value);
            }

            //Sends value to length class for conversion to Imperial
            else if (i == 6) {
                lengthConverter.kilometerToMile(value);
            }
        }

        //Loops to beginning of the program if user enters y
        cout << "Would you like to convert anything else?(y/n) ";
        cin >> again;
        cout << endl;

        //Continues until a valid answer is entered by the user
        while (again != 'y' && again != 'n') {
            cout << "Invalid choice, please enter either y for yes of n for no. ";
            cin >> again;
            cout << endl;
        }
    }
    return 0;
}
