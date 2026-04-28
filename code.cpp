#include <iostream>
#include<climits>
using namespace std;
// int main () {
    // int age=25;
    // char grade='A';
    // float  PI = 3.14f;
    // bool isitsafe=false;
    // double price=100.99;
    // cout << "Preeti \n Raj"<<endl;
    // cout <<"\n hello"<<endl;
    // cout << "age"<<endl;
    // cout << age <<endl;
    // cout <<sizeof(age)<<endl;
    // cout << grade<<endl;
    // cout<<sizeof(char)<<endl;
    // cout<<PI<<endl;
    // cout<<isitsafe<<endl;
    // cout<< price << endl;
    // char grade ='a';
    // int value=grade;
    // cout<<value<<endl;
    // input in c++
    // int age;
    // cout<<"enter your age:"<<endl;
    // cin>>age;
    // cout<< "your age is:"<<age<<endl;
    // operator
    // int a=10,b=15;
    // int sum=a+b;
    // cout<<"sum="<<a+b<<endl;
    // int a,b;
    // int sum=a+b;
    // cout<<"enter  a:";
    // cin>>a;
    // cout << "enter b:";
    // cin>>b;
    // cout << a+b<<endl;
    // cin>>sum;
    //increament and decreament operator which is also known as the uniary operator.
    // int a=10;
    // int b=--a;
    // cout<<"b="<<b<<endl;//9
    // cout <<"a="<<a<<endl;//9
//  ..................................................... 
    // int n=-45;
    // if(n>=0){
    //     cout<<"n is positive number";
    // }else {
    //     cout << "n is negative";
    // }
    // int age;
    // cout<<"enter your age:";
    // cin>>age;
    // if(age>=18){
    //     cout<<"you are eligible for vote \n";
    // }else {
    //     cout << "you are not eligible for vote\n";
    // }
    // int n;
    // cout <<"enter number:";
    // cin>>n;
    // if(n%2==0){
    //     cout<<" number is even";

    // }else{
    //     cout <<" no is odd";
    // }
    // ...............................
    // int a,b;
    // cout<<"enter a:";
    // cin>>a;
    // cout<<"enter b:";
    // cin>>b;
    // cout<<"a+b="<<a+b<<endl;
    // cout<<"a-b="<<a-b<<endl;
    // cout<<"a*b="<<a*b<<endl;
    // cout<<"a/b="<<a/b<<endl;
    // cout<<"a%b="<<a%b<<endl;
    // ...............................................
    // int p,t,r;
    // float S.I;
    // cout<<"enter the value of p";
    // cin>>p;
    // cout<<"enter the value of t";
    // cin>>t;
    // cout<<"enter the value of r";
    // cin>>r;
    // S.I=p*t*r/100;
    // cout<<"Simple interst="<<S.I<<endl;
    // ........................................
    // int marks; 
    //     cout<<"enter marks:";
    //     cin>>marks;
    //     if(marks >=90){
    //         cout<<"A\n";
    //     }else if(marks>=80 && marks <90){
    //         cout << "B\n";

    //     }else{
    //         cout<<"C";
    //     }
    // ......................
    // char ch;
    // cout<<"enter char:";
    // cin>>ch;
    // if(ch>='a' && ch<='z'){
    //     cout<<"lowercase";
    // }else{
    //     cout<<"uppercase";
    // }
    // int n=20;
    // int count=1;
    // while(count<= n){
    //     cout<<"count"<<" ";
    //     count++;
    // }
    // cout<<endl;
    // .........................................
    // FOR LOOP
    // int n =3;
    // for(int i=1;i<=n;i++){
    //     cout<<i<<endl;
    // } 
    // int n=10;
    // for(int i=1;i<=n;i=i+2){
    //     cout<<i<<endl;

    // }
    // SUM OF NUMBER FROM 1 TO N
    // int n=50;
    // int sum=0;

    // for (int i=1;i<=n;i++){
    //     sum=sum+i;

    // }
    // cout<<sum;
    //while loop
    // int i=1;
    // int n=50;
    // int sum=0;
    // while (i<=n){
    //     sum=sum+i;
    //     i++;
        

    // }
    // cout<<sum<<endl;
    // int n=14;
    // bool isPrime=true;
    
    // for(int i=2;i*i<=n;i++){.....// by the use of n-1 is i*i<=n-1 because root n * root n=n hota hai uske bad factor repeat hone lgta hai.here is logic  
    //     if(n%2==0){
    //         isPrime=false;
    //         break;
    //     }
    // }
    // if (isPrime==true){
    //     cout<<"prime no\n";
    // } else {
    //     cout<<"non -Prime no\n";
    // }
    // .......NESTED LOOP......//
    // for(int i=1;i<=5;i++){
    //     cout<<"*****"<<endl;
    // }
    // int x=10;
    // for(int i =1; i<=x;i++)
    // {
    //     cout<<"*";
    // }
    // cout<<endl;
    // .........PATTERN.........................//
    // int n=4;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cout<<j <<" ";
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for(int i=0;i< n;i++){
    //     for(int j=0;j< n;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // int n=6;
    // for(int i=0;i<n;i++){
    //     char ch ='A';
    //     for(int j=0;j<n;j++){
    //         cout<<ch;
    //         ch=ch+1;
    //     }
    //     cout<<endl;
    // }
    // ................................
    // int n=3;
    // int num=1; 
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<num <<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // cout<<"after pattern:"<<num<<endl;
    // ......character pattern...........
    //  int n=3;
    // char ch='A'; 
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<ch <<" ";
    //         ch ++;
    //     }
    //     cout<<endl;
    // }
    // cout<<"after pattern:"<<ch<<endl;
    //............................TRIANGLE PATTERN...........................
    // int n=3;
    // for(int i=0; i<n;i++)
    // {
    //     for(int j=0;j<i+1;j++){
    //         cout<<"*" <<" ";
    //     }
    //     cout<<endl;
    // }
    // int n=3;//Floyds triangle
    // int num =1;
    // for(int i=0; i<n;i++)
    // {
    //     for(int j=0;j<i+1;j++){
    //         cout<<num <<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // int n=3;
    // for(int i=0; i<n;i++)
    // {
    //     for(int j=0;j<i+1;j++){
    //         cout<<i+1<<" ";
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for(int i=0;i<n;i++){
    //    char ch = 'A' + i;   // changes for each row
    //     for(int j=0;j<i+1;j++){
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for(int i =0;i<n;i++)
    // {
    //     for(int j=1;j<=i+1;j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // int n=5;
    // for(int i=n;i>0;i--){
    //     cout << i<<endl;
    // }
    // int n=5;
    // for(int i=0;i>n;i--){
    //     for(int j=i+1;j>0;j--){
    //         cout << j<<endl;
    //     }
    // }
    // ....................INVERTED TRIANGLE.......................
    // int n=4;
    // for(int i=0;i<n;i++){
    //     // spaces
    //     for(int j=0;j<i;j++){
    //         cout<<" ";
    //     }
    //     // numbers
    //     for(int j=0;j<n-i;j++){
    //         cout<<(i+1);
    //     }
    //     cout<<endl;
    // }
    // ...............PYRAMID TRIANGLE.............................
    // int n=4;
    // for(int i=0;i<n;i++){
    //     // spaces=n-i-1..times
    //     for(int j=0;j<n-i-1;j++){
    //         cout<<" ";
    //     }
    //     // nums1=i+1
    //     for(int j=1;j<=i+1;j++)
    //     {
    //         cout<<j;

    //     }
    //     //num2=i
    //     for(int j=i;j>0;j--){
    //         cout<<j;
    //     }

    //     cout<<endl;


    // }  
    // ...........h0llow diamond pattern..............
    // top part
    // int n=4;
    // // top
    // for(int i=0;i<n;i++){
    //     // spaces
    //     for(int j=0;j<n-i-1;j++ ){
    //         cout <<" ";
            
    //     }
    //     cout <<"*";
    //     if(i!=0){
    //         // spaces
    //         for(int j=0;j<2*i-1;j++){
    //             cout << " ";
    //         }
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // // bottom part
    // for(int i=0;i<n-1;i++)
    // {
    //     // spaces
    //     for(int j=0;j<i+1;j++ ){
    //         cout <<" ";
    //     }
    //     cout<<"*";
    //     if(i!=n-2){
    //         // spaces
    //         for(int j=0;j <2*(n-i)-5;j++ ){
    //         cout <<" ";
    //     }
            
            
    //         cout<<"*";
    //     }
    //     cout <<endl;
    // }
    // ................BUTTERFLY PATTERN................
    // int n=4;
    // for(int i=1;i<n;i++){
    //      for(int j=0;j<i+1;j++){
    //          cout<<"*" <<" ";
    //      }

    // }
    // cout <<endl;
    // .......................FUNCTION..........................
//     // function defnition
//  void printhello(){
//     cout<< "hello\n";
// }
// int main()
// {
//     //function call  /invoke
//     printhello();
// int printhello() {
//     cout << "hello\n";
//     return 3;
// }
// int main(){
//     // function call /invoke
//     cout<<printhello()<<endl;
// ........FUNCTION SYNTAX...............
//SUM OF TWO NUMBERS
//this is function defnition.
// int sum(int a,int b){
//     int s=a+b;
//     return s;
// }
// // minimum of two number
// int minoftwo(int a,int b){
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
// }
// //now we have to use function call..
// int main(){
//     cout << "min="<<minoftwo(5,3)<<endl;//arguments
//     cout << sum(10,5)<<endl;
// .................................................................
// int sumN(int n)
// {
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+= i;
//     }
//     return sum;
// }
// int main(){
//     cout<<sumN(5)<<endl;
//     cout <<sumN(10)<<endl;
// .....................................
// int main(){
    // int a =6,b=10;
     // cout <<(a&b)<<endl;//bitwise and (&) operator
    // cout<<(a|b)<<endl;//bitwise OR (|) operator
    // cout<<(a^b)<<endl;//bitwise XOR (^) operator
    // cout<<(4<<1)<<endl; // bitwise leftshift (<<) operator by 1
    // cout <<(10<<2)<<endl;// leftshift by 2
    // cout <<(4>>1)<<endl;//bitwise rightshift(>>) operator by 1
    // cout <<(8>>2)<<endl;// rightshift by 2
    // cout<<(a&b)<<endl;
    // cout <<(a|b)<<endl;
    // cout <<(a^b)<< endl;
    // cout <<(10>>1)<<endl;
    // cout <<(10<<2)<<endl;
    // .............................................................
    // cout << sizeof(int)<< endl;
    // cout << sizeof(long int) << endl;
    // cout << sizeof(long long int)<< endl;
    // .......................................................


    // .........ARRAY IN DATA STRUCTURE...................
int main()
{
    // int marks[5]={90,95,100,105,110};
    // marks[0]=210;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<marks[4]<<endl;
    // int size=5;
    // int sz=sizeof(marks);
    // cout<<sizeof(marks)/sizeof(int)<<endl;
    // // loops : 0 to size-1
    // for(int i=0;i<size;i++)
    // {
    //     cout<<marks[i]<<endl;
    // }
    int nums[]={5,15,22,1,-15,24};
    int size=6;
    int smallest = INT_MAX;

    for(int i=0;i<size;i++)
    {
        if(nums[i] < smallest)
        {
            smallest = nums[i];
        }
    }

    cout<<"The smallest number is:"<<smallest<<endl;
    return 0;
}
// int linearsearch(int arr[],int sz,int target){
//     for(int i=0;i<sz,i++) {
//         if(arr[i] == traget){
//         return i;
//     }
// }
// return -1;//not found

// }
// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int sz=7;
//     int target =8;
//     cout<<linearsearch(arr,sz,target)<<endl;
// .....................REVERSE ARRAY..................
// void reverseArray(int arr[],int sz){
//     int start=0,end=sz-1;

//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

// }
// int main(){
//     int arr[]={4,2,7,8,1,2,5};
//     int sz=7;

//     reverseArray(arr,sz );
//     for(int i=0;i<sz;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
