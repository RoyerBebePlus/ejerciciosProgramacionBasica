#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
main(){
	srand(unsigned(time(NULL)));
	int num=rand()%100+1;
	cout<<"Numero: "<<num;
}
