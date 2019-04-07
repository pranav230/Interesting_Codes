/*
										Initializating a 2-d or 1-d array with 0

Mainly there are two ways
1.	You can initialize the whole array while declaration
2.	You can initialize the array using a loop

*/
#include<bits/stdc++.h>

using namespace std;
using namespace chrono;

int main()
{
	time_point<system_clock> start, end; 
  	start = system_clock::now();
    
//	First Way
    int arrayA[1000][1000]={0};
    
    end = system_clock::now();
    duration<double> elapsed_seconds = end - start;
    cout<< "elapsed time: " << elapsed_seconds.count() << "s\n";

    int i,j;
	start = system_clock::now();
    
//	Second Way
    int arrayB[1000][1000];
    for(i=0;i<1000;i++)
    	for(j=0;j<1000;j++)
    		arrayB[i][j]=0;

	end = system_clock::now();
    elapsed_seconds = end - start;
    cout<< "elapsed time: " << elapsed_seconds.count() << "s\n";
	
	return 0;
}

/*
First way is way most efficient way to do this.

So never use a loop for initializing an array with same numbers
*/