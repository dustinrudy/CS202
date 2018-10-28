#include <string>

using namespace std;

class dayType {

	public:

		void printDay() const;

		void setDay(string d);

		void returnNextDay();

		void returnPreviousDay();

	   	dayType(string d = "");

	   	//~dayType();

	private:
	    string day;  //variable to store the day;
	    int numPosition;
	    int weekArray[7];

};
