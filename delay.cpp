/*
Simple Program to have a delay function in c++ because there is no in-built function in c++ new version for linux
*/ 

#include<bits/stdc++.h>

using namespace std;

void delay(float milliseconds)
{
	clock_t endwait; 
	endwait = (float)clock () + milliseconds*CLOCKS_PER_SEC/1000.0 ; 
	while (clock() < endwait) {}
}

int main()
{
	int a;
	cout<<a;
	fflush(stdout);  //you have to clear the buffer before delay function else all the output will be displayed at once
	delay(1500);
	cout<<a;
	fflush(stdout);
	delay(1500);
	return 0;
}