//programmed by Unknown
//code improvement!!
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	char letter;
	char answer;
	system("title coded by Unknown *\\/*");
	system("color 0A");
	cout << "\n";
	cout << "\n";
	cout << "\n";
	cout << "   ____________________________\n";
	cout << "  |  power off menu of the PC  |\n";
	cout << "   ----------------------------\n";
	cout << "\n";
	cout << "\n";
	cout << "1. switch off\n";
	cout << "\n";
	cout << "2. restart\n";
	cout << "\n";
	cout << "3. hibernation\n";
	cout << "\n";
	cout << "4. log out\n";
	cout << "\n";
	cout << "5. Force closed applications to run without warning users.\n";
	cout << "\n";
	cout << "6. Combine with a shutdown option to cause the next boot to go to the firmware user interface.\n";
	cout << "\n";
	cout << "7. exit\n";
	cout << "\n";
	cout << "press a number from 1-7: ";
	cin >> letter;
	switch(letter) {
		
		case '1': 
		
		system("cls");
		cout<< "[+]confirm switch off? Y/n: ";
		cin>>answer;
		if (answer == 'Y' || answer == 'y') {
			
			system("shutdown -p");
			system("exit");
			
		}else{
			
			system("cls");
			return main();
		}
		
		
			break;
		case '2': system("cls");
		cout<< "[+]confirm restart? Y/n: ";
		cin>>answer;
		if (answer == 'Y' || answer == 'y') {
			
			system("shutdown -r");
			system("exit");
			
		}else{
			
			system("cls");
			return main();
		}
		
			break;
			
		case '3': system("cls");
		cout<< "[+]confirm hibernation? Y/n: ";
		cin>>answer;
		if (answer == 'Y' || answer == 'y') {
			
			system("shutdown -h");
			system("exit");
			
		}else{
			
			system("cls");
			return main();
		}
		
			break;
		case '4': system("cls");
		cout<< "[+]confirm log out? Y/n: ";
		cin>>answer;
		if (answer == 'Y' || answer == 'y') {
			
			system("shutdown -l");
			system("exit");
			
		}else{
			
			system("cls");
			return main();
		}
		
			break;
		case '5':system("cls");
		cout<< "[+]confirm application closure? Y/n: ";
		cin>>answer;
		if (answer == 'Y' || answer == 'y') {
			
			system("shutdown -f");
			system("exit");
			
		}else{
			
			system("cls");
			return main();
		}
		
			break;
			
		case '6':system("cls");
		cout<< "[!]confirm entry into the firmware? Y/n: ";
		cin>>answer;
		if (answer == 'Y' || answer == 'y') {
			
			system("shutdown -fw");
			system("exit");
			
		}else{
			
			system("cls");
			return main();
		}
		
			
			break;
		case '7': system("exit");
		exit(1);
			break;
		default: cout << "\n";
		cout << "invalid command!";
		system("cls");
		return main();
			break;
	}
	
	
	return 0;
	
}
