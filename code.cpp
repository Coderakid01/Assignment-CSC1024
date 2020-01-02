#include <iostream>//Header file
using namespace std;
char choice, decision;
// credit to Akid DONT ERASE THIS COMMENT !
int main() {
do {
	cout << "Airplane System \n";
	cout << " A - Flight \n";
	cout << " B - Flight and Hotel \n";
	cout << " Please enter package type : ";
	cin >> choice;//Record the Input from user

		if (choice == 'A') {//If the option is A then execute the Flight Execution only



			int n, sum = 0, i, destination; //Declare int Datatype for value


			cout << "Destination Package \n";
			cout << "1 - China Guangzhou,Shanghai (RM2000) \n";
			cout << "2 - Indonesia Barli,Jakarta (RM1600) \n";
			cout << "3 - Thailand Chang Mai,Phuket (RM1200) \n";

			cout << "Where are you going ? : ";
			cin >> destination;

			if (destination == 1) {// if Destination 1
				cout << "Destination China Guangzhou,Shanghai (RM 2000) \n";
				cout << "Number of Guest : ";//The input will be record for looping
				cin >> n;


				for (i = 0; i < n; ++i) //Looping based on input record number
				{
					int num, kids = 0, adult = 0, Price, discount;
					cout << i + 1 << " Guest Age : ";//Input for the guest age
					cin >> num;

					if (num <= 12) {
						discount = num * 2000 * 20 / 100;
						kids = 2000 - discount;

					}
					else {
						adult = num * 2000;//Formula for Adult Price

					}

					Price = kids + adult;//Formula for the Total Ticket Price

					cout << "Total Price is " + Price;//Final output

				}
			}

			else if (destination == 2) {// if Destination 1
				cout << "Destination Indonesia Bali,Jakarta (RM 1600) \n";
				cout << "Number of Guest : ";//The input will be record for looping
				cin >> n;


				for (i = 0; i < n; ++i) //Looping based on input record number
				{
					int num, kids = 0, adult = 0, Price, discount;
					cout << i + 1 << " Guest Age : ";//Input for the guest age
					cin >> num;

					if (num <= 12) {
						discount = num * 1600 * 20 / 100;
						kids = 1600 - discount;

					}
					else {
						adult = num * 1600;//Formula for Adult Price

					}

					Price = kids + adult;//Formula for the Total Ticket Price

					cout << "Total Price is " + Price;//Final output

				}
			}

			else if (destination == 3) {// if Destination 1
				cout << "Thailand Chang Mai,Phuket (RM 1200) \n";
				cout << "Number of Guest : ";//The input will be record for looping
				cin >> n;


				for (i = 0; i < n; ++i) //Looping based on input record number
				{
					int num, kids = 0, adult = 0, Price, discount;
					cout << i + 1 << " Guest Age : ";//Input for the guest age
					cin >> num;

					if (num <= 12) {
						discount = num * 1200 * 20 / 100;
						kids = 2000 - discount;

					}
					else {
						adult = num * 1200;//Formula for Adult Price

					}

					Price = kids + adult;//Formula for the Total Ticket Price

					cout << "Total Price is " + Price;//Final output

				}
			}
			else {
				cout << "Error Please enter the proper input!";
			}
			cout << "Do you want to continue? Y/N : "; //Prompt user to give an input letter either 'Y' or 'N'
			cin >> decision;

			if (decision == 'Y') {//If user choose 'Y' then repeat the step
				continue;
			}
			else {//Else end this program execution
				cout << "Thank You!";
			}

		}


		else if (choice == 'B') {//If the option is A then execute the Flight Execution only


			int n, sum = 0, i, destination; //Declare int Datatype for value


			cout << "Destination Package \n";
			cout << "1 - China Guangzhou,Shanghai (RM2000) \n";
			cout << "2 - Indonesia Barli,Jakarta (RM1600) \n";
			cout << "3 - Thailand Chang Mai,Phuket (RM1200) \n";

			cout << "Where are you going ? : ";
			cin >> destination;

			if (destination == 1) {// if Destination 1
				int num, kids = 0, adult = 0, Price, discount, Hotel, Total, Room;
				char RoomType;
				cout << "Destination China Guangzhou,Shanghai (RM 2000) \n";
				cout << "Number of Guest : ";//The input will be record for looping
				cin >> n;


				for (i = 0; i < n; ++i) //Looping based on input record number
				{
					cout << i + 1 << " Guest Age : ";//Input for the guest age
					cin >> num;

					if (num <= 12) {
						discount = num * 2000 * 20 / 100;
						kids = 2000 - discount;

					}
					else {
						adult = num * 2000;//Formula for Adult Price

					}

					Price = kids + adult;//Formula for the Total Ticket Price

					cout << "Total Price is " + Price;//Final output

				}
				Price = kids + adult;//Formula for the Total Ticket Price
				cout << "Room Details \n";
				cout << "E - Executive Suite (RM 650) \n";
				cout << "S - Suite (RM 500) \n";
				cout << "D - Deluxe (RM 450) \n";

				cout << "Choose Room Type : ";
				cin >> RoomType;
				cout << "Number of Room : ";
				cin >> Room;

				if (RoomType == 'E') {//Option 1
					Hotel = 650 * Room;
				}

				else if (RoomType == 'S') {//Option 2
					Hotel = 500 * Room;
				}

				else if (RoomType == 'D') {//Option 3
					Hotel = 450 * Room;
				}

				else {
					cout << "Error";
				}

				Total = Price + Hotel;//Formula for total price

				cout << "Your Flight Ticket price is " + Price;//Final output
				cout << "Your Hotel Price is " + Hotel;
				cout << "Total Price is " + Total;
			}

			else if (destination == 2) {// if Destination 1
				int num, kids = 0, adult = 0, Price, discount, Hotel, Total, Room;
				char RoomType;
				cout << "Destination Indonesia Bali,Jakarta (RM 1600) \n";
				cout << "Number of Guest : ";//The input will be record for looping
				cin >> n;


				for (i = 0; i < n; ++i) //Looping based on input record number
				{
					cout << i + 1 << " Guest Age : ";//Input for the guest age
					cin >> num;

					if (num <= 12) {
						discount = num * 1600 * 20 / 100;
						kids = 1600 - discount;

					}
					else {
						adult = num * 1600;//Formula for Adult Price

					}

					Price = kids + adult;//Formula for the Total Ticket Price

					cout << "Total Price is " + Price;//Final output

				}
				Price = kids + adult;//Formula for the Total Ticket Price
				cout << "Room Details \n";
				cout << "E - Executive Suite (RM 650) \n";
				cout << "S - Suite (RM 500) \n";
				cout << "D - Deluxe (RM 450) \n";

				cout << "Choose Room Type : ";
				cin >> RoomType;
				cout << "Number of Room : ";
				cin >> Room;

				if (RoomType == 'E') {//Option 1
					Hotel = 650 * Room;
				}

				else if (RoomType == 'S') {//Option 2
					Hotel = 500 * Room;
				}

				else if (RoomType == 'D') {//Option 3
					Hotel = 450 * Room;
				}

				else {
					cout << "Error";
				}

				Total = Price + Hotel;//Formula for total price

				cout << "Your Flight Ticket price is " + Price;//Final output
				cout << "Your Hotel Price is " + Hotel;
				cout << "Total Price is " + Total;
			}

			else if (destination == 3) {// if Destination 1
				int num, kids = 0, adult = 0, Price, discount, Hotel = 0, Total, Room;
				char RoomType;
				cout << "Destination Thailand Chang Mai, Phuket (RM 1200) \n";
				cout << "Number of Guest : ";//The input will be record for looping
				cin >> n;


				for (i = 0; i < n; ++i) //Looping based on input record number
				{
					cout << i + 1 << " Guest Age : ";//Input for the guest age
					cin >> num;

					if (num <= 12) {
						discount = num * 1200 * 20 / 100;
						kids = 1200 - discount;

					}
					else {
						adult = num * 1200;//Formula for Adult Price

					}

					Price = kids + adult;//Formula for the Total Ticket Price

					cout << "Total Price is " + Price;//Final output

				}
				Price = kids + adult;//Formula for the Total Ticket Price
				cout << "Room Details \n";
				cout << "E - Executive Suite (RM 650) \n";
				cout << "S - Suite (RM 500) \n";
				cout << "D - Deluxe (RM 450) \n";

				cout << "Choose Room Type : ";
				cin >> RoomType;
				cout << "Number of Room : ";
				cin >> Room;

				if (RoomType == 'E') {//Option 1
					Hotel = 650 * Room;
				}

				else if (RoomType == 'S') {//Option 2
					Hotel = 500 * Room;
				}

				else if (RoomType == 'D') {//Option 3
					Hotel = 450 * Room;
				}

				else {
					cout << "Error";
				}

				Total = Price + Hotel;//Formula for total price

				cout << "Your Flight Ticket price is " + Price;//Final output
				cout << "Your Hotel Price is " + Hotel;
				cout << "Total Price is " + Total;
			}




			else {
				cout << "Error Please enter the proper input!";
			}
			cout << "Do you want to continue? Y/N : "; //Prompt user to give an input letter either 'Y' or 'N'
			cin >> decision;

			if (decision == 'Y') {//If user choose 'Y' then repeat the step
				continue;
			}
			else {//Else end this program execution
				cout << "Thank You!";
			}


		}
		cout << "Do you want to continue? Y/N : "; //Prompt user to give an input letter either 'Y' or 'N'
		cin >> decision;

		if (decision == 'Y') {//If user choose 'Y' then repeat the step
			continue;
		}
		else {//Else end this program execution
			cout << "Thank You!";
		}
	}while (decision == 'Y');

		return 0;
	}