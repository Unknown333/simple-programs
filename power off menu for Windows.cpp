// programmed by Unknown
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	char letter;
	char answer;
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
	cout << "\n";
	cout << "6. exit\n";
	cout << "\n";
	cout << "press a number from 1-6: ";
	cin >> letter;
	switch(letter) {
		
		case '1': system("shutdown -pt 5");
		system("cls");
		cout << "the command will start in 5 seconds\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "press 'a' and 'ENTER' to cancel the shutdown.\n";
		cin >> answer;
		if(answer == 'a') {
			system("shutdown -a");
		}
		return main();
			break;
		case '2': system("shutdown -rt 5");
		system("cls");
		cout << "the command will start in 5 seconds\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "press 'a' and 'ENTER' to cancel the restart.\n";
		cin >> answer;
		if(answer == 'a') {
			system("shutdown -a");
		}
		return main();
			break;
		case '3': system("shutdown -ht 5");
		system("cls");
cout << "the command will start in 5 seconds\n";		
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "press 'a' and 'ENTER' to cancel the hibernation.\n";
		cin >> answer;
		if(answer == 'a') {
			system("shutdown -a");
		}
		return main();
			break;
		case '4': system("shutdown -lt 5");
		system("cls");
cout << "the command will start in 5 seconds\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "press 'a' and 'ENTER' to cancel the log out.\n";
		cin >> answer;
		if(answer == 'a') {
			system("shutdown -a");
		}
		return main();
			break;
		case '5': system("shutdown -ft 5");
		system("cls");
cout << "the command will start in 5 seconds\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "press 'a' and 'ENTER' to cancel the closing of the applications.\n";
		cin >> answer;
		if(answer == 'a') {
			system("shutdown -a");
		}
		return main();
			break;
		case '6': system("exit");
		exit(1);
			break;
		default: cout << "\n";
		cout << "invalid command!";
		return main();
			break;
	}
	
	
	return 0;
	
}
