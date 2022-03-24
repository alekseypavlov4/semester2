#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int game (string a, string b);
int main(){
	char key = 'x';
	while (key != 'q') {
		srand(time(NULL));
		const int N_knb = 3;
		string knb[N_knb] = {"Rock","Scissors","Paper"};
		string pc = knb[rand()%3];
		string player;
		cout << "Your choice: ";
		cin >> player;
		cout << game(pc,player)<<endl;
		return 0;
	}
}
int game(string a, string b){
	if (b == "Rock" and a == "Scissors") {
		cout <<"You win!" <<endl;
	}
	else if ( b == "Scissors" and a == "Paper") {
		cout <<"You win!" <<endl;
	}
	else if ( b == "Paper" and a == "Rock") {
		cout <<"You win!" <<endl;
	}
	else if ( a == b) {
		cout <<"Draw!" <<endl;
	}
	else {
		cout <<"You lose" <<endl;
	}
	
	cout << "Enemy choice: " << a << endl;
	return 0;
}
