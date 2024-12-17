#include <iostream> // this simple app for calculate two name length and combination it
#include <string>
using namespace std;

int main(){
	int a;
	string name1,name2,namecomb;
	cout << "enter name 1 space name 2: ";
	cin >> name1 >> name2;
    namecomb = name1 + name2;
	cout << "enter 1 for show name combination,enter 2 for show length of name combination: "<< endl;
	cin >> a;
	switch (a){
		case 1 : cout << "name combination is : " << namecomb;
		        break;
		case 2 : cout << "name combination length is: " << namecomb.size();
		        break;
		default : cout <<"wrong number";
	}
	return 0;
}