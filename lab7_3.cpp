#include<iostream>
using namespace std;

char before(char x){
    char num;
    if( x > 90 || x < 65){
        num = '0';
    }else if (x == 65){
        num = 'Z';
    }else{
        num = x - 1;
    }
    return num;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
