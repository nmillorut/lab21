#include<iostream>
#include<cstdlib>

using namespace std;


int main(int argc, char* argv[]){
    double sum,a;
    if (argc == 1){
        cout<< "Please input numbers to find average.\n";
        return 0;
    }
        for(int i = 0; i < argc-1; i++){
            sum += atof(argv[i+1]);
            }
            a=sum/(argc-1);
            cout<< "---------------------------------\n";
            cout<< "Average of "<< argc-1<<" numbers = "<<a <<endl;
            cout<< "---------------------------------\n";
       
}