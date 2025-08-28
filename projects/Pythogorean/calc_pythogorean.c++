#include <iostream>
#include <cmath>
using namespace std;

double calc_hypo(double opp, double adj);
double calc_opp(double hypo, double adj);
double calc_adj(double hypo, double opp);
int main()
{
    double hypo, adj, opp;
    int unknown;

    cout << "What is Unknown? \n 1 - [hypo] \n 2 - [opp] \n 3 - [adj]" << "\n";
    cin >> unknown;

    switch (unknown){
        case 1:

        cout << "Opposite: "<< "\n";
        cin >> opp;

        cout << "Adjacent: "<< "\n";
        cin >> adj;

        if (hypo <= 0 || opp <= 0){
            cout << "values must be positive! "<< "\n";
            break;
        }

        hypo = calc_hypo(opp , adj);
        cout << "Hypotenuse is " << hypo << endl;
        break;

        case 2:

        cout << "Hypotenuse: "<< "\n";
        cin >> hypo;

        cout << "Adjacent: "<< "\n";
        cin >> adj;

        if (hypo <= 0 || adj <= 0){
            cout << "values must be positive! "<< "\n";
            break;
        }
        if (hypo <= adj){
            cout << "Hypotenuse must be grater than Adjacent! "<< "\n";
            break;
        }

        opp = calc_opp(hypo , adj);
        cout << "Opposite is " << opp << endl;
        break;

        case 3:
        cout << "Hypotenuse: "<< "\n";
        cin >> hypo;

        cout << "Opposite: "<< "\n";
        cin >> opp;

         if (hypo <= 0 || opp <= 0){
            cout << "values must be positive! "<< "\n";
            break;
        }


        if (hypo <= opp){
            cout << "Hypotenuse must be grater than Opposite! "<< "\n";
            break;
        }


        adj = calc_adj(hypo , opp);
        cout << "Adjacent is " << adj << endl;
        break;


        default:
        cout << "Invalid!";

    }


    return 0;
}

double calc_hypo(double opp, double adj)
{
    return sqrt(pow(opp , 2) + pow(adj, 2));
}


double calc_opp(double hypo, double adj)
{
 
    return sqrt(pow(hypo , 2) - pow(adj, 2));
}


double calc_adj(double hypo, double opp)
{
    return sqrt(pow(hypo , 2) - pow(opp, 2));
}