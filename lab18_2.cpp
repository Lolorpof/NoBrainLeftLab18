#include<iostream>
using namespace std;

void myString(char *&ptr, int N){
	ptr = new char[N];   
	for(int i = 0; i < N;i++) *(ptr + i) = 'A'+i;
	ptr[N] = 0;
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}
