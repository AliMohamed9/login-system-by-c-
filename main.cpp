#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void new_user(string name[],string password[],int privilege[],string s1,string s2,int a,int b,int d);
void edit_user_details(string s3,string s4,int c,int e);
 void add_new_user(string s5,string s6,int n);
int main()
{
    const  int Max=1;
    string s1,s2,s3,s4,s5,s6;
    int a,b,d,c,e,n;
    string name [Max];
    string password[Max];
    int privilege[Max];
        cout<<"enter your name \n";
    for(int i=0; i<Max; i++)
        cin>>name[i];
        cout<<"enter your password \n";
    for(int i=0; i< Max; i++)
        cin>>password[i];
        cout<<"enter your privilege number \n";
    for(int i=0; i<Max; i++)
         cin>>privilege[i];
    int z,x,y;
    for(z=0; z<=7; z++)
    {
        for(x=0; x<=z-1; x++)
          cout<<"        ";
        for(y=0; y<=11-2*z; y++)
          cout<<"       *";
          cout<<endl;
    }
          cout<<"                                                MEMNON                 \n";
          cout<<"                                 I AM NOT HERE TO FIT ONTO YOUR WORLD  \n";
          cout<<"                                    I MA HERE TO BULID MY OWN WORLD    \n";

          cout<<"    1) if you want to log in press 1 and press enter                  \n";
          cout<<"    2) if you want to change your details press 2 and enter           \n";
          cout<<"    3)if you want to add anew user press 3 and enter                  \n";
          cin>>b;
         if(b==1)
        {
            new_user(name,password,privilege,s1,s2,a,b,d);
        }
        else if(b==2)
         {
             edit_user_details(s3, s4, c, e);
         }
         else if (b==3)
         {
          add_new_user(s5, s6, n);
         }
}
void new_user(string name[],string password[],int privilege[],string s1,string s2,int a,int b,int d)
{

    {
           cout<<"please sir enter your name \n";
           cin>>s1;
        for(int i=0; i<3; i++)
        {
            while(s1!=name[i])
            {
            cout<<"this is wrong name ,please sir enter correct name \n ";
            cin>>s1;
            }
            break;
        }
            cout<<"enter your password \n";
            cin>>s2;
        for(int i=0; i<3; i++)
        {
            while(s2!=password[i])
            {
            cout<<"this is wrong password ,please sir enter correct password \n  ";
            cin>>s2;
            }
            break;
        }

            cout<<"enter your privilege number (only numbers)";
            cin>>a;
        for(int i=0; i<3; i++)
        {
            while(a!=privilege[i] )
            {
            cout<<"this is wrong privilege number ,please enter correct privilege number \n ";
            cin>>a;
            }
            break;

        }
        for(int i=0; i<3; i++)
        {
            if(s1==name[i]&& s2==password[i]&& a==privilege[i])

            {
            cout<<"*************************welcome sir in our page*****************************\n";
            cout<<"              *********************************************                  \n";

           cout<<"\n if you want to show your details in our page press 4 and enter            \n";
            cin>>d;
              while (d!=4)
                {
            cout<<"please sir chose only 4 if you want to show your details in our page \n";
            cin>>d;
                }
                if (d==4)
                {
            cout<<"your name is "<<s1<<endl;
            cout<<"your privilege number is "<<a<<endl;
             cout<<"your password is "<<s2<<endl;
                }

            }
            break;
        }

    }
}
void edit_user_details(string s3,string s4 ,int c,int e)
{
    cout<<"if you want to change your details please enter 2 and press enter \n";
    cin>>e;
    if (e==2)
      {
        cout<<"enter your new name \n";
        cin>>s3;
        cout<<"enter your new password \n";
        cin>>s4;
        cout<<"enter your privilege number \n";
        cin>>c;
      }
}
void add_new_user(string s5,string s6,int n)
{
    cout<<"enter the name \n";
    cin>>s5;
    cout<<"enter the password \n";
    cin>>s6;
    cout<<"enter the privilege number \n";
    cin>>n;
    cout<<"*******************welcome in our page*************************";

}
