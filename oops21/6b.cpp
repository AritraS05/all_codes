#include<bits/stdc++.h>
using namespace std;

class Sample
{
public:
    static int j;
    Sample()
    {
        --j;
    }
    static void display()
    {
        cout<<"j="<<j<<endl;
    }
};
int Sample::j  =20;

int main()
{
    Sample s1,s2;
    s1.display();
    s2.display();
    Sample s3;
    s3.display();
    Sample s4;
    Sample::display();
    Sample s[10];
    for(int i=0;i<10;i++)
    s[i].display();
}