#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int board[5][5];
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			board[i][j] = 0;
		}
	}
	
	cout<<"5x5 Chess Board Game";
	
	vector<int> P1;
	
	cout<<"Enter Player 1 inputs: "<<endl;
	
	for(int i=0; i<5; i++) {
		
		cin>>P1[i];
		
	}
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			if(i == 4) {
				board[i][j] = P1[i];
			}	
		}
	}
	
	cout<<"Current Grid : "<<endl;
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cout<<board[i][j]<<" ";
		}
		cout<endl;
	}
	
	vector<int> P2;
	
	cout<<"Enter Player 2 inputs: "<<endl;
	
	for(int i=0; i<5; i++) {
		
		cin>>P2[i];
		
	}
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			if(i == 0) {
				board[i][j] = P2[i];
			}	
		}
	}
	
	cout<<"Current Grid : "<<endl;
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cout<<board[i][j]<<" ";
		}
		cout<endl;
	}

	cout<<"Next move : "<<endl;
	cout<<"To stop the game press 0 : "<<endl;
	
	int move = 0;
		
	while(move != 0) {
		cin>>move;
		
		for(int i=0; i<5; i++) {
			for(int j=0; j<5; j++) {
				if(board[i][j] == move) {
					int temp = board[i][j];
					board[i][j] = 0;
					board[i+1][j] = move;
				}
			}
		}
		
		cout<<"Current Grid : "<<endl;
	
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			cout<<board[i][j]<<" ";
		}
		cout<endl;
	}		
		
	}	
	
	
	
}
