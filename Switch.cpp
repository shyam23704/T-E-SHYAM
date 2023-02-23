#include<iostream>
using namespace std;

int main()
{
    float s1,s2,s3,s4,s5,s6,sum,percent,pcm,pcmp;
    
    cout<<"enter your maths marks: ";
    cin>>s1;

    cout<<"enter your physics marks: ";
    cin>>s2;

    cout<<"enter your chemistry marks: ";
    cin>>s3;

    cout<<"enter your computer marks: ";
    cin>>s4;

    cout<<"enter your english marks: ";
    cin>>s5;

    cout<<"enter your Second language marks: ";
    cin>>s6;

    sum=(s1+s2+s3+s4+s5+s6);

    percent=((s1+s2+s3+s4+s5+s6)/600)*100;
     
    pcm=(s1+s2+s3);
    
    pcmp=(pcm/300)*100;
    cout<<"Your total PCM marks is "<<pcm<<"/300 \n";
    cout<<"Your PCM percentage is "<<pcmp<<endl;
    cout<<"Your total marks is "<<sum<<"/600 \n";
    cout<<"Your percentage is "<<percent<<endl;
    switch (percent<=100&&percent>=90)
    {
    case 1:
        cout<<"Your Grade is A";
        break;
         case 0:
           switch (percent<=90&&percent>=80)
           {
              case 1:
               cout<<"your grade is B";
                 break;

                  case 0:
                      switch (percent<=80&&percent>=70)
                    {
                        case 1:
                         cout<<"your grade is C";
                          break;
                          case 0:
                           switch (percent<=70&&percent>=60)
                           {
                           case 1:
                            cout<<"Your grade is D";
                            break;
                             case 0:
                              switch (percent<=60&&percent>=50)
                              {
                              case 1:
                                cout<<"your grade is E";
                                break;
                                  case 0:
                                  switch (percent<=50&&percent>=40)
                                  {
                                  case 1:
                                    cout<<"Your grade is F";                                   
                                    break;
                                  
                                  
                                    break;
                                  }
                              
                              
                                break;
                              }
                           
                           
                            break;
                           }
            
            
                      break;
                    }
           
           
             break;
           }   
    
        break;
    }

    

 
   
    


    return 0;
}


