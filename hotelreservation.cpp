#include <bits/stdc++.h>
using namespace std;

string hotel_name(string h_name)
{
    vector<string> v{"h1", "h2", "h3"};

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == h_name)
            return h_name;
        else
            cout << "inavalid hotel name" << endl;
    }
}

string hotel_location(string h_location)
{
    vector<string> v{"shimla", "mumbai", "kashmir"};

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == h_location)
            return h_location;
    }
}

string hotel_view(string h_view)
{
    if (h_view == "mountain")
    {
        return h_view;
    }
    if (h_view == "pool")
    {
        return h_view;
    }
}

string hotel_roomtype(string h_roomtype)
{
    if (h_roomtype == "AC")
    {
        return h_roomtype;
    }
    if (h_roomtype == "NON-AC")
    {
        return h_roomtype;
    }
}

int no_Person()
{
    int adult;
    cout << "if chidren is above age 12 then it must in adult " << endl;
    cout << "Enter the no. of adults and children respectively" << endl;
    cin >> adult;
    return adult;
}

int cost_room(int no_person, string view, string room_type)
{
    int price = 0;
    if (no_person == 1)
    {
        price = price + 100;
    }
    if (no_person == 2)
    {
        price = price + 200;
    }
    if (no_person == 3)
    {
        price = price + 1300;
    }
    if (view == "mountain")
    {
        price = price + 100;
    }
    if (view == "pool")
    {
        price = price + 200;
    }
    if (room_type == "AC")
    {
        price = price + 100;
    }
    if (view == "NON-AC")
    {
        price = price + 200;
    }

    return price;
}

int main()
{

    // location of hotel
    string h_location;
    cout << "enter hotel location in  shimla , mumbai , kashmir " << endl;
    cin >> h_location;
    hotel_location(h_location);

    // hotel name
    string h_name;
    cout << "enter hotel name among h1,h2,h3" << endl;
    cin >> h_name;
    string nameOfHotel = hotel_name(h_name);

    // hotel view
    string h_view;
    cout << "enter hotel view mountain or pool" << endl;
    cin >> h_view;
    hotel_view(h_view);

    // room type
    string h_roomtype;
    cout << "enter hotel roomtype AC or NON-AC" << endl;
    cin >> h_roomtype;
    hotel_roomtype(h_roomtype);

    // no. of person

    int no_person = no_Person();

    // price calculation
    int price = cost_room(no_person, h_view, h_roomtype);

    cout << h_location << endl;
    cout << nameOfHotel << endl;
    cout << h_view << endl;
    cout << h_roomtype << endl;
    cout << price << endl;

   

    return 0;
}
