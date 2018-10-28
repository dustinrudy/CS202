#include <string>

using namespace std;

class romanType {

	public:
		void printRoman() const;

	      // Description: Function to print the roman numeral.
	      // Postcondition: The num is printed in roman numerals.

		void printInt() const;

				// Description: Function to print the integer.
	      // Postcondition: The num is printed in integer form.

		bool checkIfValid(string a);

				// Description: Function to check if input entered by user is a valid roman numeral.
	      // Postcondition: Outputs a bool based on character in the string.

	  void setRomanNum(string n);

	  		// Description: Function to set romanNumeral member of romanType class to what has been entered by the user.
	      // Postcondition: Stores romanNumeral into class object


	  void convertToInteger();

	  		// Description: Converts Roman Numeral using switch case to a real number or integer
	      // Postcondition: Stores integer into private member variable positiveInt
	      

	   romanType(string num = "");
	      //Constructor with parameters
	    

	private:
	    string romanNumeral;  // variable to store the roman numeral
	    int positiveInt; // variable to store the integer
};
