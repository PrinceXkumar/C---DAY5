// Functuion 
/*
#include<iostream>
using namespace std;
void fun(int a, int b){
	if(a>b)
		cout<<"A is Greater.";
	else 
		cout<<"B is Greater.";
}
int main(){
	int x ,  y;
	cout<<"Enter the number : ";
	cin>>x>>y;
	
	fun(x,y);
	cout<<x<<y;
	cout<<"Enter the second numbers :";
	cin>>x>>y; 
	
	fun(x,y);
	cout<<x<<y;
}

*/



//                                 ARRAY 
/*
#include<iostream>
using namespace std;
int main(){
	// declearation  and intialization of array 
	int arr[4] = {10,20,30,40};
	cout<<arr[0]; // print 1st element 
}
*/


/*
#include<iostream>
using namespace std;
int main(){
	int arr[4] = {10,20,30,4};
	for(int i=0; i<4; i++){
		cout<<arr[i]<<" ";  // it's print the array all element
	}
}
*/


// String array 

/*
#include<iostream>
using namespace std;
int main()
{
	string name[4];   // we can also intialize array like this
	name[0] = "Prince";
	name[1] = "rahul";
	name[2] = "Rudal";
	name[3] = "Pinki";
	
	cout<<name[1];  // access the array element 
	cout<<endl;
	name[0] = "Chameli";   //changing the array element 
	for(int i=0; i<4; i++){
		cout<<name[i] <<" ";
	}
}

*/


//          Multi-Dimenational Array
 
 /*
 int arr[A][B] = {				//[A] = for no. of column 
									// [B] for no. of element in row 
					{ 10,20,30},
					{30,50,40}
					}
					
*/

/*
#include<iostream>
using namespace std;
int main()
{
	int arr[3][4] = {
					{1,2,3,4},
					{5,6,7,8},
					{9,10,11,12}
					};
					//print output
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<arr[i][j]<<"\n";
		}
	}				
}

*/



/*
#include<iostream>
using namespace std;
int main(){
	char ch ;
	cout<<"Enter input : ";
	cin>>ch;
	if(ch>='a' && ch<='z'){
		cout<<"It is a lower case.";
	}
	else if(ch >='A' && ch<= 'Z'){
		cout<<"It is a Upper case.";
	}	
	else{
		cout<<"It is a Numeric value.";
	}
}
*/


// While loop
/*
#include<iostream>
using namespace std;
int main(){
	int n ;
	cout<<"Enter the number : ";
	cin>>n;
	int i=0;
	while(i<=n){
		cout<<i<<" ";
		i++;
	}
}

*/

//sum
/*
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int sum =0;
	while(i<=n){
		sum = sum +i;
		
		i++;
	}
	cout<<"sum is : "<<sum;
}

*/


/*
//find sum of all even number b/t 1 to 10
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int sum =0;
	int i=1;
	while(i<=n){
		if(i%2==0)
		sum = sum +i;
		i++;
	}
	cout<<"Sum of all even numbers is : "<<sum;
}

*/

/*
//prime number 
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=2;
	while(i <n){
		if(i%1==0 || i%i==0)
		cout<<i;
		i++;		
	}
}

*/


/*
#include<iostream>
using namespace std;
int main(){
	
	
	int i=1;
	while(i<=5){
		int j=1;
		while(j<=5){
			cout<<"1";
			j = j+1;
		}
		cout<<endl;
		i++;
	}
}

*/
//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	for(int i=1; i<=4; i++){
//		cout<<"1"<<endl;
//	}
//}

















































