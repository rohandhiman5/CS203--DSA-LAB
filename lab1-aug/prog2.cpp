#include<iostream>
using namespace std;

int main(){
    int arr[6][6];

    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            cin >> arr[j][i];
        }
    }

    int result[4][4];

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
      
           
            
result[i][j] = arr[i][j] + arr[i+1][j] + arr[i+1][j+1] +
                           arr[i+2][j]   + arr[i+2][j+2]   + arr[i+1][j+2] +
                           arr[i][j+2];
        }
    }

 // cout<<result[1][1];
  for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout<<result[j][i]<<" ";
            
        }
      cout<<endl;
  }
    //max
    int max=result[1][1];
     for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
      if(result[j][i]>=max)
      {max=result[j][i];}
        }}
    
    
cout<<"max"<<max<<endl;
    return 0;
}
