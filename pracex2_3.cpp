#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
char table[8][8];

void showTable();
void randomTable();

int main(){
	srand(time(0));	
	randomTable();
	showTable();
}

void showTable(){
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			cout << table[i][j] << " ";
		}
		cout << "\n";
	}
}

void randomTable(){
	int A;
	char B;
	
	for(int i = 0; i < 8; i++){
		for(int j = 0; j < 8; j++){
			A=rand()%26+1;
			if (A == 1) {B='A';}
			else if (A == 2) {B='B';}
			else if (A == 3) {B='C';}
			else if (A == 4) {B='D';}
			else if (A == 5) {B='E';}
			else if (A == 6) {B='F';}
			else if (A == 7) {B='G';}
			else if (A == 8) {B='H';}
			else if (A == 9) {B='I';}
			else if (A == 10) {B='J';}
			else if (A == 11) {B='K';}
			else if (A == 12) {B='L';}
			else if (A == 13) {B='M';}
			else if (A == 14) {B='N';}
			else if (A == 15) {B='O';}
			else if (A == 16) {B='P';}
			else if (A == 17) {B='Q';}
			else if (A == 18) {B='R';}
			else if (A == 19) {B='S';}
			else if (A == 20) {B='T';}
			else if (A == 21) {B='U';}
			else if (A == 22) {B='V';}
			else if (A == 23) {B='W';}
			else if (A == 24) {B='X';}
			else if (A == 25) {B='Y';}
			else if (A == 26) {B='Z';}
			table[i][j]=B;
		}
	}
	
}
//Write definition of function randomTable() here.


