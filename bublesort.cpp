#include<iostream>
using namespace std;
int main(){
	int temp;
	int bilangan[]={5,3,4,1,2,7,6,8,9,10};
	for(int i=0;i<10;i++){
		cout<<bilangan[i]<<",";
	}
	cout<<endl;
	for(int i=0;i<10;i++){
		for(int j=0;j<9;j++){
			if(bilangan[j+1]<bilangan[j]){
				temp=bilangan[j];
				bilangan[j]=bilangan[j+1];
				bilangan[j+1]=temp;
				cout<<bilangan[j]<<","<<bilangan[j+1]<<endl;
			}
		}
	}
	cout<<"lihat"<<endl;
	for(int i=0;i<10;i++){
		cout<<bilangan[i]<<",";
	}
}
