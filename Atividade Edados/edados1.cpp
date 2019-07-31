#include <iostream>
#include <cmath>

using namespace std;

struct ncomplexo{        

    float x,y;

};

void mcomplexo (ncomplexo n){    

    cout << "Numero complexo: "<< n.x << "+" << n.y << "i" << endl;

};

ncomplexo scomplexo(ncomplexo n1, ncomplexo n2){       
   
    ncomplexo soma;

    soma.x = n1.x + n2.x;
    soma.y = n1.y + n2.y;

    return soma;

};

float modcomplexo(ncomplexo num){      
    float complexo;

    complexo = sqrt(pow(n.x,2) + pow(n.y,2));

    return complexo;

};

int main(){

    Complexo ncomplexo1, ncomplexo2;

    ncomplexo1.a = 3.4;
    ncomplexo1.b = 2.1;

    ncomplexo2.a = 3.5;
    ncomplexo2.b = 2.2;   


    cout << "Mostrar número complexo: "<< mcomplexo(ncomplexo1) << endl;
    cout << "Soma dos números complexos" << mcomplexo(scomplexo(ncomplexo1, ncomplexo2)) << endl;
    cout << "Módulo do complexo = Z =" << modcomplexo(ncomplexo) << endl;
}