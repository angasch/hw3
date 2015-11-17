#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void random_array(double* x, int N){
	for(int i=0; i<N; i++)
		x[i] = (double) rand() / (double)RAND_MAX;
}



void statistics(double* x, int N, double& m, double& v){
	m = 0.0;
	v = 0.0;
	for(int i=0; i<N; i++){
		 m +=  x[i];	
	}
	m=m/N;
	
	for(int i=0; i<N; i++){
		 v += (x[i]-m)*(x[i]-m);
	}
	v=v/N;
}


int main(){
   const int N = 100;
   double p[N];
   double mean, var;

   random_array(p, N);
   statistics(p, N, mean, var);
   

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
