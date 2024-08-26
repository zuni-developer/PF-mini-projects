//2D arrays (addition of 2 matrix)
#include<iostream>
using namespace std;
int main(){
	int A[2][3]={{2,5,9},{6,9,15}};
	int B[2][3]={{6,3,4},{9,5,2}};
	int C[2][3];
	//printing A
	cout<<"A:"<<endl;
	for(int i=0;i<2;i++){  			//i is for columns in matrix
		for(int j=0;j<3;j++){  		//j is for rows in matrix
				cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	//printing B
	cout<<"B:"<<endl;
	for(int i=0;i<2;i++){  			//i is for columns in matrix
		for(int j=0;j<3;j++){  		//j is for rows in matrix
				cout<<B[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	//showing result
	cout<<"C: (A+B)"<<endl;
	for(int i=0;i<2;i++){  			//i is for columns in matrix
		for(int j=0;j<3;j++){  		//j is for rows in matrix
				C[i][j]=A[i][j]+B[i][j];
				cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
