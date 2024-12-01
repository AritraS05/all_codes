#include<bits/stdc++.h>
using namespace std;

class employee{
    int basic_sal;
    public:
        employee(int sal){
            basic_sal = sal;
        }
        int get__basic_sal(){
            return basic_sal;
        }
        virtual int get_allowance() = 0;
        virtual int get_sal() = 0;
        virtual ~employee(){}

};

class manager:public employee{
    public:
        manager(int sal):employee(sal){}
        int get_sal()  override{
            return get__basic_sal() + ( 0.4 * get__basic_sal()); 
        }
        int get_allowance() override{
            return 0.4*get__basic_sal();
        }
};

class clerk:public employee{
    public:
        clerk(int sal):employee(sal){}
        int get_sal() override{
        return get__basic_sal() + ( 0.3 * get__basic_sal());
        }
        int get_allowance() override{
            return 0.3*get__basic_sal();
        }
};

int main(){
    clerk c(50000);
    manager m (1000000);
    int res = (10*m.get_sal()) + (30*c.get_sal());
    cout<<res<<endl;
    cout<<"manager allowance = "<<m.get_allowance()<<endl;
    cout<<"clerk allowance = "<<c.get_allowance()<<endl;
    return 0;
}