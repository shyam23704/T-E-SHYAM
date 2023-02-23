#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    float s1,s2,s3,s4,s6,s7,sum,total,CGPA;
    
    cout<<"enter your maths marks: ";
    cin>>s1;

    cout<<"enter your chemistry marks: ";
    cin>>s2;

    cout<<"enter your computer marks: ";
    cin>>s3;

    cout<<"enter your IOT marks: ";
    cin>>s4;

   

    cout<<"enter your sfh marks: ";
    cin>>s6;

    cout<<"enter your ic marks: ";
    cin>>s7;

    sum=s1*4+s2*4+s3*3+s4*3+s6+s7;

    total=sum/800;

    CGPA=total*10;
    cout<<"Your CGPA is: "<<setprecision(2)<<CGPA<<endl;

    return 0;

}