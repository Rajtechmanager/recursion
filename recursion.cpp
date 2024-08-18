//we assume that answer will be correct for all we assume 
//base case i will tell that f(0) is 1
//assumption->>>>> logic 
//self work
// afunction call it self
//pmi principle of mathametical induction
//for exaple proff sum of n natural numberr
//iit say  pmi has three things 
//base case we know the answer
////assumption->>>>> we assumne that formula work for one term 
//self work -->we cheak that will it work for other terms

//for example we will figure out for factorial
// #include<iostream>
// using namespace std;
// int factorial(int n){
// if(n==0){
// return 1;
// }
// return n*factorial(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<factorial(n);
//     return 0;
// }
//time complexty nof of time function called * complexty of 1
// for ex 5 5 time callled*1;
//space complexty order of n call stack n time called
// #include<iostream>
// using namespace std;
// int fibonachi(int n){
// if(n==0){
//     return 0;
// }
// if(n==1){
//     return 1;
// }
// return fibonachi(n-1)+fibonachi(n-2);
// }


// int main(){
//     int n;
//     cin>>n;
//     cout<<fibonachi(n);
//     return 0;
// }
//base case 1 or 0 both are base casee values a re 0 ad 1 coreespongly
//assumtion if i calculate the value of n-1 term and add it with n-2 th ter m will give me 
//cheak for other casese order of n space and order of n time
// sum of digits using the recursion
// #include<iostream>
// using namespace std;
// int sumofdigit(int n){
// if(n==1){
//     return 1;
// }
// return n+sumofdigit(n-1);//constant time no of call stacks(n space ) * 1 = (n time compexty)
// }


// int main(){
//     int n;
//     cin>>n;
//     cout<<sumofdigit(n);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int sumofdigit2(int n){
// if(n==0){
//     return 0;
// }

// return n%10+sumofdigit2(n/10);//no of time callstack is called * time of each 1
// }// call are lenghrt


// int main(){
//     int n;
//     cin>>n;
//     cout<<sumofdigit2(n);
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int praiseq(int n,int q){
// if(q==0){
// return 1;
// }
// return n*praiseq(n,q-1);// THIS IS ALSO CALLED RECCURENCE 
// }


// int main(){
//     int n,q;
//     cin>>n>>q;
//     cout<<praiseq(n,q);
//     return 0;
// }
//space compety i am going 16 time for 16 so call stack  is call 16 times if i have q 
//call stack is called 16 time  space is q
//constant time 16*1 time is  q

//LESSS SPACE COMPEXTY AND LESS TIME COMOPLEXTY 
  //HOW USING SIMOLE MATHS EVEN POWER CAN BE WRITTEN 2 power 3 * power 3 or 2(m+n
  //RESULTING IN LESS CALL STACKS)
// #include<iostream>
// using namespace std;
// int praiseq(int n,int q){
// if(q==1){
// return n; 
// }
// if(q%2==0){
// return praiseq(n,q/2)*praiseq(n,q/2);
// }
// else{
//     return n*praiseq(n,q/2)*praiseq(n,q/2);//if 
// }
// }


// int main(){
//     int n,q;
//     cin>>n>>q;
//     cout<<praiseq(n,q);
//     return 0;
// }

