#include <iostream>

using namespace std;

int main() 
{
  for (int i = 1; i <= 10; ++i) {
    for (int j = 0; j < i; ++j) {
      cout << "#";
    }
    cout << "^" << endl; 
  }
  for (int i=1; i <= 10; i=i+1){
  	for (int j = 0; j>=1; j=j-1){
  		if (i>j){
  			cout << "#";
  		}
  		else {
  			cout << "^";
  		}
  	}
  	cout<<endl;
  }
  return 0;
}
Sent


