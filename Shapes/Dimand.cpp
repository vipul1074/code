#include <iostream>
using namespace std;
int main()
{
			int row;
	cout<<"Enter the number of rows: ";
	cin>>row;
	
	for(int i = 1; i <= row; i++){
		
		for(int k = 1; k <= row-i; k++){
			cout<<" ";
		}
		for(int j = 1; j<=2*i-1; j++){
			cout<<"*";
		}
		cout<<endl;}
		
		
			for(int i = row-1; i >= 1; i--){
		
		for(int k = 1; k <= row-i; k++){
			cout<<" ";
		}
		for(int j = 1; j<=2*i-1; j++){
			cout<<"*";
		}
		cout<<endl;
}}

