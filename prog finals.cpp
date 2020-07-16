#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main (){
string name;
string address;
int phone;
string city;
string country;
string line;
int menu;
string loop;
string again;


	// Begin Menu
	cout << "\nWelcome to the Virtual Address Book!" << endl;
do {
	cout << "\nPlease select the appropriate option from the menu below...\n" << endl;

	cout << "Menu:\n" << endl;

	cout << "1 - Create a new contact." << endl;
	cout << "2 - View contact information." << endl;
	cout << "3 - Edit a contact's information." << endl;
	cout << "4 - Delete a contact." << endl;
	cout << "5 - Exit program.\n" << endl;
	cout << "Please input the corresponding number: "; cin >> menu;
	// End of Menu



// Option 1 
if (menu == 1) {
cout << "\nName: ";
getline(cin, name);
cin.ignore();
string filename = name + ".txt";
ofstream myfile (filename.c_str ());

	if (myfile.is_open())
	{
    myfile << "Name: " << name << "\n";
	    cout << "Please input address: ";
	cin >> address;
    myfile << "Address: " << address << "\n";
	    cout <<"Please input phone number: ";
	cin >> phone;
    myfile << "Phone Number: " << phone << "\n";
	    cout <<"Please input city: ";
	cin >> city;
    myfile << "City: " << city << "\n" ;
	    cout <<"Please input country: ";
	cin >> country;
    myfile << "Country: " << country << "\n";
    myfile.close();
	}
} 
// End Option 1

// Option 2
if (menu == 2) {
std::string filename = name + ".txt";

cout << "Input the name: ";
cin >> name;
 ifstream myfile (filename.c_str ());
  if (myfile.is_open())
  {
    while (! myfile.eof() )
    {
      getline (myfile,line);
      cout << line << endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

}
// End Option 2

// Option 3
if (menu == 3) {

cout << "\nUNDER CONSTRUCTION 3" << endl;

}
// End Option 3

// Option 4
if (menu == 4) {

cout << "\nUNDER CONSTRUCTION 4" << endl;

}
// End Option 4

// Option 5
if (menu == 5) {

cout << "\nUNDER CONSTRUCTION 5" << endl;

}
// End Option 5



// Start Menu Prompt
cout << "\nWould you like to go to the main menu? (Yes) or (No): ";
cin >> again;

	} while (again == "yes" || again == "Yes" || again == "YEs" || again == "YES" || again == "yeS" || again == "yES" || again == "YeS" || again == "y" || again == "Y");
	
	if (again == "no" || again == "No" || again == "nO" || again == "NO" || again == "n" || again == "N") {
	
	cout << "\nThank you for using the Virtual Address Book, the program will now close." << endl;
	
	}
// End Menu Prompt





return 0;
}
