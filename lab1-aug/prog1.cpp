
#include <iostream>
using namespace std;
int main()
{   int n;
    cin>>n;
    int arr[n];
   for(int i=0; i<n;i++){
       cin>>arr[i];
   };
  int  left=0;
  int  right=0;
   int key;
  
   for(int i=0;i<n;i++){
    key=arr[i];
    
    for(int j=0;j<i; j++){
    left=left+arr[j];
   }
   for(int k=i+1;k<n; k++){
       right=right+arr[k];
   }
    if(right==left){cout<< "hello";
    cout<<i<<endl;
    cout<<left<<endl;
    cout<<right;
        
        return 0;
    }  
       right=0;
       left=0;
   }
    cout<<"null";
 
    
return 0;
}