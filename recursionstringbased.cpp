// #include<iostream>
// #include<string>
// using namespace std;
// string removeoccuranceofa(string arr,int idx){
// if(idx==arr.size()){
//     return "";
// }
// if(arr[idx]=='a'){
// return removeoccuranceofa(arr,idx+1);
// }
// else{
// return arr[idx]+removeoccuranceofa(arr,idx+1);
// }
// //space and time both are order of n

// }
// int main(){
//     string n;
//     cin>>n;
//  cout<<removeoccuranceofa(n,0);
   
//     return 0;
// }




//###############################################################################


// #include<iostream>
// #include<string>
// using namespace std;
// string removeoccuranceofa(string arr,int idx){
// if(idx==arr.size()){
//     return "";
// }
// if(arr[idx]=='a'){
// return removeoccuranceofa(arr,idx+1);
// }
// else{
// return arr[idx]+removeoccuranceofa(arr,idx+1);
// }
// //space and time both are order of n

// }
// int main(){
//     string n;
//     cin>>n;
//  cout<<removeoccuranceofa(n,0);
   
//     return 0;
// }

//######################################################################
// #include<iostream>
// #include<string>
// using namespace std;
// bool checkforpalendrome(string arr,int idx,int length){
// if(idx>length){
//     return true;
// }
// if(arr[idx]!=arr[length]){
// return false;
// }
// return checkforpalendrome(arr,idx+1,length-1);

// }
// int main(){
//     string n;
//     cin>>n;
//  cout<<checkforpalendrome(n,0,n.length()-1);
   
//     return 0;
// }
//# for string it is valid 

#include<iostream>
using namespace std;
bool checkforpalendrome(int num,int &org){
if(num==0){
    return true;
}
    bool isPalin = checkforpalendrome(num / 10, org) && (num % 10 == org % 10);
    
    // Update the original number by removing its last digit
    org /= 10;
    
    return isPalin;
}

int main(){
    int n;
    cin>>n;
 cout<<checkforpalendrome(n,n);
   
    return 0;
}