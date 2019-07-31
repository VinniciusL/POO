#include <iostream>
#include <cmath>

using namespace std;

struct Quadrado{       

    float x;

};

struct Circulo{        

    float y;

};

float area1(Quadrado lado){        

    float areaquadrado;

    areaquadrado = lado.x*lado.x;

    return areaquadrado;

}

float area2(Circulo raio){     

    float areacirculo;

    areacirculo = M_PI * pow(raio.y,2)/2;

    return areacirculo;

}

float area3(Quadrado lado[]){      

    float areaquadrado[3], somatorio;

    somatorio = 0;

    for(int i=0; i<=2; i++){

        areaquadrado[i] = lado[i].x*lado[i].x;
        soma = soma + areaquadrado[i];
    }

    return somatorio;

}

float area4(Circulo raio[]){   

    float areacirculo[3], somatorio;

    somatorio = 0;

    for(int i=0; i<=2; i++){

        areacirculo[i] = M_PI * pow(raio[i].y,2)/2;
        somatorio = somatorio + areacirculo[i];
    }

    return somatorio;

}

float area5(Circulo raio[], Quadrado lado[]){     //Calcula a soma das áreas de um vetor de círculos e de um vetor de quadrados

    float areacirculo[3], areaquadrado[3], somatorioc, somatorioq;

    somatorioc= 0;
    somatorioq = 0;

    for(int i=0; i<=2; i++){

        areacirculo[i] = M_PI * pow(raio[i].y,2)/2;
        somatorioc = somatorioc + areacirculo[i];

        areaquadrado[i] = lado[i].x*lado[i].x;
        somatorioq = somatorioq + areaquadrado[i];
    }

    return somatorioc + somatorioq;

}

int main(){

    cout << endl << "-- Questao 2 --" << endl;

    Quadrado q1, q_vet[3];
    Circulo c1, c_vet[3];

    q1.lado = 10;
    c1.raio = 5;

    q_vet[0].lado = 5;
    q_vet[1].lado = 10;
    q_vet[2].lado = 15;

    c_vet[0].raio = 3;
    c_vet[1].raio = 6;
    c_vet[2].raio = 9;

    cout <<  "Retornar area de um quadrado: " << q1.lado << ": " << area1(q1) << endl;
    cout <<  "Retornar area de um circulo: " << c1.raio << ": " << area2(c1) << endl;
    cout <<  "Retornar o somatoorio das aareas de um vetor de quadrados: " << area3(q_vet) << endl;
    cout <<  "Retornar o somatoorio das aareas de um vetor de circulos: " << area4(c_vet) << endl;
    cout <<  "Somatorio de todas as areas: " << area5(c_vet, q_vet) << endl;


return 0;

};