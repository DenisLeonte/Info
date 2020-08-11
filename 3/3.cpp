#include <iostream>
#include <string>
#include <fstream>
#include <utility>

using namespace std;

bool isRunning = true;

void menu(){
    cout<<"Workout analysis"<<endl;
    cout<<"1.Insert new data"<<endl;
    cout<<"2.Show last set of data"<<endl;
    cout<<"3.Show general stats"<<endl;
    cout<<"0.End program"<<endl;
}

int choice(){
    int aux;
    cin>>aux;
    return aux;
}

void input(){
    ifstream in("Exercises.txt", ios::app);
    int ex[4];
    int n,d,m,kcal = 0;
    double w;
    cout<<"Day Month Weight ex1 ex2 ex3 ex4 ex5"<<endl;
    cin>>d>>m>>w>>ex[0]>>ex[1]>>ex[2]>>ex[3]>>ex[4];
    //Kcal calculator here
    in>>d>>m>>w>>kcal>>ex[0]>>ex[1]>>ex[2]>>ex[3]>>ex[4];
    in.close();
}

void last(){
    ifstream in("Exercises.txt");
    int ex[4];
    int d,m,kcal;
    double w;
    while(in){
        in>>d>>m>>w>>kcal>>ex[0]>>ex[1]>>ex[2]>>ex[3]>>ex[4];
    }
    cout<<d<<" "<<m<<" "<<w<<" "<<kcal<<" "<<ex[0]<<" "<<ex[1]<<" "<<ex[2]<<" "<<ex[3]<<" "<<ex[4]<<" "<<endl;
    in.close();
}

void all(){
    ifstream in("Exercises.txt");
    int ex[4],EX[4];
    int d,D,m,M,kcal,KCAL;
    double w,W;
    while(in){
        in>>d>>m>>w>>kcal>>ex[0]>>ex[1]>>ex[2]>>ex[3]>>ex[4];
        KCAL+=kcal;EX[0]+=ex[0];EX[1]+=ex[1];EX[2]+=ex[2];EX[3]+=ex[3];EX[4]+=ex[4];
    }
    cout<<KCAL<<" "<<EX[0]<<" "<<EX[1]<<" "<<EX[2]<<" "<<EX[3]<<" "<<EX[4]<<" "<<endl;
}

void logic(int choice){
    switch(choice)
    {
        case 1:
            input();
            break;
        case 2:
            last();
            break;
        case 3:
            all();
            break;
        case 0:
            isRunning = false;
            break;
    }
}

void loop(){
    while(isRunning)
    {
        system("clear");
        menu();
        int opt;
        opt = choice();
        logic(opt);
    }
}

int main(){
    loop();
}