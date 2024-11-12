#include <bits/stdc++.h>

using namespace std;

#define endl "\n"



void intcode(){
	#ifndef ONLINE_JUDGE 
	    // For getting input from input.txt file 
	    freopen("input.txt", "r", stdin); 
	    // Printing the Output to output.txt file 
	    freopen("output.txt", "w", stdout); 
	#endif
}

const int mx = 1e5+123;

int dp[mx];

int fact ( int n ){ // 5

	if ( n == 0 ) return 1;

	if( dp[n]  != -1 ) return dp[n];

	return dp[n] =  n * fact( n-1 );  // 5 * (  4 , 3 , 2 , 1 , 0  )
}

int main(){
	intcode();
	ios_base::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0); 


    //memset( dp , -1 , sizeof(dp) );

    for (int i=0; i<=mx ; i++ ) dp[i] = -1;

    cout<<fact(45)<<endl;
   




	return 0;
}
