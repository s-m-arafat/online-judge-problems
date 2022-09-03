#include<iostream>
#include<string>
using namespace std;

class day_type
{
       string Wdays[7];
       int dayNum;
       string day;
       string prDay;
       string NxtDay;
       string AddDays;
public:
       day_type(int);
       string setday();
       string preday();
       void Nextday();
       string add(int n);
       void print();
};

int main()
{
       day_type Da(0);
       Da.setday();
       Da.preday();
       Da.Nextday();
       int n;
       cout <<"Enter the No. of days to add :";
       cin>>n;
       Da.add(n);
       Da.print();
       return 0;

}
day_type::day_type(int i)
{
       Wdays[0] = "Mon";
       Wdays[1] = "Tues";
       Wdays[2] = "Wed";
       Wdays[3] = "Thu";
       Wdays[4] = "Fri";
       Wdays[5] = "Sat";
       Wdays[6] = "Sun";
       day = Wdays[i];
}

string day_type::setday()
{
    cout<<"Enter day number starting 0 for monday ";
    cin>>dayNum;
    day = Wdays[dayNum];
    cout
}
string day_type::preday()
{
       cout<<Wdays[dayNum-1];
       prDay = Wdays[dayNum-1];
}
void day_type::Nextday()
{
       cout<<Wdays[dayNum+1];
       NxtDay = Wdays[dayNum+1];

}
string day_type::add(int n)
{
       AddDays = Wdays[n%7];
       return Wdays[n%7];
}
void day_type::print()
{
       cout << endl <<"\tDay="<< day <<"day"<< endl;
       cout <<"\tPrevious day :"<< prDay <<"day"<< endl;
       cout <<"\tNext day :"<< NxtDay <<"day"<< endl;
       cout <<"\tAfter Adding Days :"<< AddDays <<"day"<< endl;
}


