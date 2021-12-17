//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";

#include<iostream>
#include<string>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){
    string num;
    double sum;
    double sum_pow;
    int n;
    ifstream source("score.txt");
    while(getline(source ,num)){
        sum+=atof(num.c_str());
        sum_pow+=pow(atof(num.c_str()) ,2);
        n++;
    }

    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    double mean = sum/n;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sqrt((sum_pow/n)-pow(mean ,2));

    return 0;
}