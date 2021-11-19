#include<bits/stdc++.h>
using namespace std;
void rotateby90(vector<vector<int>> matrix, int n) 
{ 	cout<<"helo";
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		v[n-j-1][i]=matrix[i][i];
    	}
    }
    for (vector<int> vect1D : matrix)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }   
        cout << endl;
    }
} 
int main(){
	vector<vector<int>> matrix={{1, 2, 3},
              {4, 5, 6},
              {7, 8, 9}};
              
    rotateby90(matrix,3);

	return 0;
}