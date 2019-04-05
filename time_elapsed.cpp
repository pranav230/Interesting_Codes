/*
Time elapsed in between any function
This can be used when clock() function does not work
*/
#include <iostream> 
#include <chrono> 
#include <ctime> 

using namespace std;
  
int main() 
{ 
    // Using time point and system_clock 
    chrono::time_point<std::chrono::system_clock> start, end; 
  
    start = chrono::system_clock::now(); 
    
    //Use any function here

    end = chrono::system_clock::now(); 
  
    chrono::duration<double> elapsed_seconds = end - start;
  
    cout<< "elapsed time: " << elapsed_seconds.count() << "s\n";
}