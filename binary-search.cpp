/*Given an array of integers in increasing order b[size], find the location of a target element (n), or return -1
 * if it is not in the array.
 Array sorted with buuble sort algorithm
 * */
/*Implemented with bianry search algorithm*/
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<random>
using namespace std;
using std::cout;

void my_bubble_sort(int *b,int size){
/*this routine sorts an array of integer using bubble sort algorithm*/

	for(int i=size-1;i>0;i--){
	for(int j=0;j<i;j++){
	if(b[i]<b[j]){
	int temp = b[i];
	b[i] = b[j];
	b[j] = temp;}}}

}
int binary_search(int n,int size,int *b){
	int xi,xf;
	xi =0;
	xf = size;
	while(xi<=xf){
	int mid = (xi+xf)/2;
	if(n==b[mid]) return mid;
	else if(n<b[mid]) 
		xf=mid-1;
		else xi = mid+1;
	}
}
int main(){
 int size,n;
 cout<<"Enter the size of the array:";
 cin>>size;
 cout<<"Enter the numberto search:";
 cin>>n;
 std::mt19937 rng;
 rng.seed(std::random_device()());
 int *b;
 b = (int*)malloc(size*sizeof(int));
 for(int idx=0;idx<size;idx++){
 std::uniform_int_distribution<std::mt19937::result_type> dist6(1,size);
 b[idx] = dist6(rng);}
 cout<<"Before sorting:"<<"\n";
 for(int idx=0;idx<size;idx++)
 cout<<b[idx]<<" ";
 my_bubble_sort(b,size); 
 cout<<"\n"<<"After sorting:"<<"\n";
 for(int idx=0;idx<size;idx++)
 cout<<b[idx]<<" ";
 cout<<"Position of the target element,-1 is if not present:"<<"\n";
 cout<<binary_search(n,size,b)<<"\n";
 return 0;
 }

 
