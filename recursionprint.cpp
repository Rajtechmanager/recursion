// #include<iostream>
// #include<vector>
// using namespace std;
// void f(int n,int idx,int m){
// if(idx==m+1){
// return;
// }
// cout<<" "<<idx*n;
//  f(n,idx+1,m);
// }
// int main(){
//     int n;
//     int m;
//     cin>>n;
//     cin>>m;
//     f(n,1,m);
//     return 0;
// }

//sum of naturalnumber wit alternate sign
// #include<iostream>
// #include<vector>
// using namespace std;
// int f(int n,int idx){
// if(idx==n+1){
// return 0;
// }
// if(idx%2==0) return -idx+f(n,idx+1);
// if(idx%2==1) return idx+f(n,idx+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<f(n,1);
//     return 0;
// }

//##################################################################################################
//GREATEST COOMON DIVISOR
//
//sum of naturalnumber wit alternate sign
// #include<iostream>
// #include<vector>
// using namespace std;
// int f(int n,int m){
// if(m==0 ){
// return n;
// }
// if(n==0 ){
// return m;
// }
// if(n>m) return f(n%m ,m);
// else return f(n,m%n);
// }
// int main(){
//     int n;
//     int m;
//     cin>>n;
//     cin>>m;
//     cout<<f(n,m);
//     return 0;
// }
//////////////////////////////////////////////////
// #include<iostream>
// #include<cmath>
// using namespace std;
// int f(int n,int idx){
// if(n==0){
// return 0;
// }
// return pow(n%10,idx) + f(n/10,idx);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<f(n,3);
//     return 0;
// }

//##############################################################
//#frog jump problem
#include<iostream>
#include<cmath>
using namespace std;
int f(int arr[],int n,int idx){
    if(idx==n-1){
return 0;
    }
if(idx==n-2){
return abs(arr[idx+1]-arr[idx]);
}
return min(abs(arr[idx+1]-arr[idx])+f(arr,n,idx+1),abs(arr[idx+2]-arr[idx])+f(arr,n,idx+2));

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int &ele:arr){
     cin>>ele;
        }    
    cout<<f(arr,n,0);
    return 0;
}