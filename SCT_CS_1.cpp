/*Create a program that can encrypt and decrypt text using the caesar cipher 
algorithm. Allow users to input a message and a shift value to perform 
encryption and decryption*/
#include<iostream>
using namespace std;
void encrypt(char n[25])
{
    int a;
    cout<<"Enter your confusion key :"<<endl;
    cin>>a;
    for (char b=0;(b<25 && n[b]!='\0');b++)
    {
        n[b]=n[b]+a;
    }
    cout<<" Your data is encrypt : "<<n<<endl;
}
void decrypt(char n[25])
{
    int a;
    cout<<"Enter your defusion key : "<<endl;
    cin>>a;
    for (char b=0;(b<25 && n[b]!='\0');b++)
    {
        n[b]=n[b]-a;
    }
        cout<<"Your data is decrypt : "<<n<<endl;
}
int main()
{
    int d;
    char z[25],m;
    while (m!='n')
    {
        cout<<"Enter your input :"<<endl;
        cin>>z;
        cout<<"Press 1-> for Encrypt :"<<endl;
        cout<<"Press 2-> for Decrypt :"<<endl;
        cin>>d;
        switch (d)
        {
            case 1:
                encrypt(z);
            break;
            case 2:
                decrypt(z);
            break;
            default:
                cout<<"Input invalid"<<endl;
        }
        cout<<"Do you want to run again so please y or not so please n:"<<endl;
        cin>>m;
    }
    return 0;
}