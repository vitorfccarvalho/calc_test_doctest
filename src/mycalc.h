#include <iostream>
#include <cmath>

using namespace std;

float add_two (float a, float b){
    return a+b;
}

float sub_two (float a, float b){
    return a-b;
}

float mlt_two (float a, float b){
    return a*b;
}

float div_two (float a, float b){
    if(b == 0){
        cout << "Erro: Divided by Zero" << endl;
    }else{
        return a/b;
    }
    return 0;
}
