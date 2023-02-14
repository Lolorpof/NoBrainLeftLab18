#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(int N){
	vector<int> v;
    for(int i = 0; i < N; i++) v.push_back(rand()%10);
    return v;
}

void showVector(vector<int> a){
	cout << "[";
	for(unsigned int i = 0; i < a.size(); i++){
		cout << a[i];
		if(i == a.size() - 1) cout << "]";
		else cout << " ";
	}
}

int dotProduct(vector<int> a, vector<int> b){
	int sum = 0;
	for(unsigned int i = 0; i < a.size(); i++) sum += a[i] * b[i];	
	return sum;
}
