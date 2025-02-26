#include <iostream>

using namespace std;

int main (){
	int day;
	cout << "Enter day NO of week ";
	cin >> day;
	
	switch (day){
		case 1:{
			cout << "MONDAY";
			break;
		}
		
		
		case 2:{
			cout << "TUESDAY";
			break;
		}
		
		case 3:{
			cout << "WEDNESDAY";
			break;
		}
		
		case 4:{
			cout << "THUSDAY";
			break;
		}
		
		case 5:{
			cout << "FRIDAY";
			break;
		}
		
		case 6:{
			cout << "SATURDAY";
			break;
		}
		
		case 7:{
			cout << "SUNDAY";
			break;
		}
		
		default : {
			cout << "there is no day in week such no. sorry";
			break;
		}
		
	}
}
