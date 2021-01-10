#include<iostream>
using namespace std;


double e(int x, int n){
	static double pow = 1;
	static double fact = 1;
	static double result = 0;
	
	if(n==0)
		return 1;
	else{
		result = e(x,n-1);
		pow *= x;
		fact *= n;
		
		return result+(pow/fact);
	}
}


int main(){
	
	cout<<e(3,10)<<endl;
	
	
}
