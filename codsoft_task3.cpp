#include <iostream>
using namespace std;
int main(){
    int marks, n1, n2, n3, n4, n5;
    int avg;
    cout<<"Enter the marks obtained in five subjects: "<<endl;
    cin>> n1 >> n2 >> n3 >> n4 >> n5;
    marks= n1 + n2 + n3 + n4 + n5;
    avg=(n1 + n2 + n3 + n4 + n5)/5;
    cout<<"Total marks obtained= "<<marks<<endl;
    cout<<"Your average= "<<avg<<endl;
    if(avg<=100 && avg>90){
        cout<<"Grade: O";
    }
    else if(avg<89 && avg>80){
        cout<<"Grade: E";
    }
    else if(avg<79 && avg>70){
        cout<<"Grade: A";
    }
    else if(avg<69 && avg>60){
        cout<<"Grade: B";
    }
    else if(avg<59 && avg>50){
        cout<<"Grade: C";
    }
    else if(avg<49 && avg>40){
        cout<<"Grade: D";
    }
    else if(avg<40){
        cout<<"FAILLED!!";
    }
    return 0;    
}