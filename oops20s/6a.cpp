#include<bits/stdc++.h>
using   namespace std;

class Sample{
    int s;
    public:
        Sample(int x= 0 ){
            s = x;
        }
        friend ostream& operator<<(ostream&out,Sample&obj){
            out<<obj.s;
            return out;
        }
        Sample operator++(int){
            Sample temp= *this;
            s++;
            return temp;
        }
        friend Sample operator+(int x,Sample&obj){
            Sample t;
            t.s = x + obj.s;
            return t;
        }
        Sample operator--(){
            --s;
            return *this;
        }
        Sample operator*(Sample &obj){
            return Sample(s*obj.s);
        }
};

int main(){
    Sample s1(5),s2;
    s2 = s1++;
    cout<<s2<<endl;
    cout<<s1<<endl;
    s2 = 10+s1;
    Sample s3 = (--s1)*s2;
    cout<<s3<<endl;
    return 0;
}