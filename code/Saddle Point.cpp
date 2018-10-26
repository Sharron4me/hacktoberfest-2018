#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,max_el,max_i;
cout<<"enter The dimensions of matrix\n";
cin>>n;
int flag=1;
int ar[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>ar[i][j];
        if(i==0&&j==0){
            max_el=ar[i][j];
        }
        else if(j==0&&max_el<ar[i][j]){
            max_el=ar[i][j];
            max_i=i;
        }
    }
}
for(int i=0;i<n;i++){
    if(ar[max_i][0]>ar[max_i][i]){
        flag=0;
        break;
    }
}
if(flag) cout<<"Saddle Point Present\n";
else cout<<"Saddle Point not present\n";
return 0;
}
