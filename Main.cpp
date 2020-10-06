#include <iostream>
using namespace std;

void pembagian(double a, double b){
cout<<"Hasil Perkalian = "<< a / b<<"\n";

void perkalian(double a, double b){
cout<<"Hasil Perkalian = "<< a * b<<"\n";

}

int main(){

double i,j;

cout<<"Masukan bilangan 1 : "; cin>>i;
cout<<"Masukan bilangan 2 : "; cin>>j;
cout<<endl;
perkalian(i,j);
pembagian(i,j);
}
