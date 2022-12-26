#include<iostream>
using namespace std;

main(){
string name;
float totalmatric=1100;
float obtainedmatric;
float totalintermediate=1100;
float obtainedintermediate;
float totalecat=400;
float obtainedecat;
float aggregate;
cout<<"Obtained marks in matric:";
cin>>obtainedmatric;
cout<<"Obtained marks in intemediate:";
cin>>obtainedintermediate;
cout<<"Obtained Ecat marks:";
cin>>obtainedecat;
aggregate=(obtainedmatric*10/totalmatric+obtainedintermediate*40/totalintermediate+obtainedecat*50/totalecat);
cout<<"Aggregate is:"<<aggregate;
}