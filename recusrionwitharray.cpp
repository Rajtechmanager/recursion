// #include<iostream>
// using namespace std;
// void printarray(int arr[],int idx,int n){
// if(idx==n){//mostly if the array is empty then print or size equal then return 
//     return;
// }
// cout<<arr[idx];
// printarray(arr,idx+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int &ele:arr){
//         cin>>ele;
//     }
//     printarray(arr,0,n);//it mostly have these 2 as parameters 
   
//     return 0;
// }


// call stack 
//till the lenght of the call stack 
// and the time complexty is constant time* no of call stack
// time and space n and n n is lenght of then array

// base case is till the array is empty or the size f array
// assumption print current and call n+1
// workin for all and array ends retuns 

//#######################################################################################
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int printmaxvalue(int arr[],int idx,int n){
// if(idx==n){
// return 0;
// }
// return max(arr[idx],printmaxvalue(arr,idx+1,n));
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int &ele:arr){
//         cin>>ele;
//     }
//     cout<<printmaxvalue(arr,0,n);
   
//     return 0;
// }

//## for max we use algorithm############################
//#include<algorithm>
//# print max value space complexty and time complexty is order of n 

// #include<iostream>
// using namespace std;
// int sumofarray(int arr[],int idx,int n){
// if(idx==n){
//     return 0;
// }
// return arr[idx]+sumofarray(arr,idx+1,n);
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int &ele:arr){
//         cin>>ele;
//     }
//   cout<<sumofarray(arr,0,n);
   
//     return 0;
// }
//space and time size of the array 
