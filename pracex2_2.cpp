#include<fstream>
#include<iostream>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] < x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	float q;
	ifstream source("score1.txt");
	string line;
	while(getline(source,line)){
		q=atof(line.c_str());
		cout << q << "\n";
	}
	source.close();
	
}

