#include <iostream>
#include <vector>

using namespace std;

void print(vector<vector<int>>& result){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << result[i][j];
        }
        cout<<endl;
    }
}
int main() {
    vector<vector<int>> v(3, vector<int> (3,0));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> v[i][j];
        }
    }

    vector<vector<int>> result(3, vector<int> (3,1));
    for(int i = 0; i < 3; i++){
        // cout << i << " : " << endl;
        for(int j = 0; j < 3; j++){
            // cout << '\t' << j << endl;
            if(v[i][j]){
                if(j-1 >= 0 && j-1 < 3){
                    result[i][j-1] = (v[i][j]+result[i][j-1])%2;
                }
                if(j+1 >= 0 && j+1 < 3){                    
                    result[i][j+1] = (v[i][j]+result[i][j+1])%2;
                }
                if(i-1 >= 0 && i-1 < 3){                    
                    result[i-1][j] = (v[i][j]+result[i-1][j])%2;
                }
                if(i+1 >= 0 && i+1 < 3){                    
                    result[i+1][j] = (v[i][j]+result[i+1][j])%2;
                }
                result[i][j] = (v[i][j]+result[i][j])%2;
            }
        }
    }
    print(result);
    return 0;
}