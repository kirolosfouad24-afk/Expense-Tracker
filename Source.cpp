#include <iostream>
#include <string>
using namespace std;

int main()
{
    
    int expenses[7];

    for (int i = 0; i < 7;  i++)
    {
        cout << "expense of day " << i+1 << ": ";
        cin >> expenses[i];

    }

    int limit;

    cout << "enter your limit: ";
    cin >> limit;


    int sum = 0;
    for (int i = 0; i < 7; i++)
    {
        sum += expenses[i];

    }

    int highest = expenses[0];
    int highest_day = 1;

    for (int i = 0; i <7; i++)
    {
        if (expenses[i] > highest)
        {
            highest = expenses[i];
            highest_day += 1;
        }
        
    }
    int overlimit = 0;
    for (int i = 0;i < 7;i++)
    {
        if (expenses[i] > limit)
        {
            overlimit++;
        }
}
    cout<<endl<<endl;
    cout<<"sum of the week: "<<sum<<endl;
    cout<<"average of the week: "<<sum/7<<endl;
    cout<<"most expensive day: "<< highest <<endl;
    cout<<"dayse over the limit: "<< overlimit<<endl;



    return 0;
}