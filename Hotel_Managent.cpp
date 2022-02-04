#include<bits/stdc++.h>
using namespace std;
int main(){
    int quantity;
    int choice;
    
    // store the quantity of food items and rooms
    int qrooms=0, qpasta=0, qburger=0, qchicken=0, qnoodles=0, qshake=0; 

    // store the valule number of sold foods and rooms
    int srooms=0, spasta=0, sburger=0, schicken=0, snoodles=0, sshake=0;

    //store the price of the total price of each of these food items or rooms
    int total_rooms=0, total_pasta=0, total_burger=0, total_chicken=0, total_noodles=0, total_shake=0;

    cout<<"\n\t Quantity of items we have : ";

    cout<<"\n Rooms Available :";
    cin>>qrooms;

    cout<<"\n Quantity of Pasta : ";
    cin>>qpasta;

    cout<<"\n Quantity of Burger : ";
    cin>>qburger;

    cout<<"\n Quantity of Chicken-Roll : ";
    cin>>qchicken;

    cout<<"\n Quantity of Noodles : ";
    cin>>qnoodles;

    cout<<"\n Quantity of Shake : ";
    cin>>qshake;
    
    m:
    cout<<"\n\t\t\t Please Select from the Menu option ";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta";
    cout<<"\n3) Buger";
    cout<<"\n4) Chicke-Roll";
    cout<<"\n5) Noodles";
    cout<<"\n6) Shake";
    cout<<"\n7) Info rergarding sales and collections";
    cout<<"\n8) Exit";

    cout<<"\n\t\tPlease Enter Your Choice :";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"\n Enter the number of rooms you want";
            cin>>quantity;
            if(qrooms-srooms >= quantity){
                 srooms=srooms+quantity;
                total_rooms =total_rooms+quantity*1200;
                cout<<"\n\n\t\t"<<quantity<<"Room / Rooms have been alloted to you!";
            }  
            else
                 cout<<"\n\tOnly"<<qrooms-srooms<<"Rooms remaining in Hotel. ";
                break;     
        case 2:
            cout<<"\n Enter the quantity Pasta you want";
            cin>>quantity;
            if(qpasta-spasta >= quantity){
                spasta=spasta+quantity;
                total_pasta =total_pasta+quantity*120;
                cout<<"\n\n\t\t"<<quantity<<"Pasta is order!";
            }
            else
                cout<<"\n\tOnly"<<qpasta-spasta<<"Pasta remaining in Hotel. ";
                break;     
        case 3:
            cout<<"\n Enter the quantity of Burger you want :";
            cin>>quantity;
            if(qburger-sburger >= quantity){
                sburger=sburger+quantity;
                total_burger =total_burger+quantity*150;
                cout<<"\n\n\t\t"<<quantity<<"Burgers is order!";
            }            
            else
                 cout<<"\n\tOnly"<<qburger-sburger<<"Burgers remaining in Hotel. ";
                break;    
        case 4:
            cout<<"\n Enter the quantity of Chicken-Roll you want : ";
            cin>>quantity;
            if(qchicken-schicken >= quantity){
                  schicken=schicken+quantity;
                total_chicken =total_chicken+qchicken*50;
                cout<<"\n\n\t\t"<<quantity<<"Chicken-Roll is order!";
            }   
            else
                  cout<<"\n\tOnly"<<qchicken-schicken<<"Chicken-Roll remaining in Hotel. ";
                break;  
        case 5:
            cout<<"\n Enter the quantity of Noodles you want";
            cin>>quantity;
            if(qnoodles-snoodles >= quantity){
                snoodles=snoodles+quantity;
                total_noodles =total_noodles+quantity*120;
                cout<<"\n\n\t\t"<<quantity<<"Noodles is order!";
            }     
            else
            
                cout<<"\n\tOnly"<<qnoodles-snoodles<<"Noodles remaining in Hotel. ";
                break;    
        case 6:
            cout<<"\n Enter the quantity of Shake you want";
            cin>>quantity;
            if(qshake-sshake >= quantity){
                sshake=sshake+quantity;
                total_shake =total_shake+quantity*100;
                cout<<"\n\n\t\t"<<quantity<<"Room / Rooms have been alloted to you!";
            }               
            else
                 cout<<"\n\tOnly"<<qshake-sshake<<"Rooms remaining in Hotel. ";
                break;
                   
        case 7:
            cout<<"\n\t\t Details of Sales and Collection ";
            cout<<"\n\n Number of Rooms we had : "<<qrooms;
            cout<<"\n\n Number of rooms we gave for rent : "<<srooms;
            cout<<"\n\n Remianing rooms : "<<qrooms - srooms;
            cout<<"\n\n Total rooms collection of the day : "<<total_rooms;
            cout<<"=====================================================================";
            cout<<"\n\n Number of pasta we had : "<<qpasta;
            cout<<"\n\n Number of pasta we gave for rent : "<<spasta;
            cout<<"\n\n Remianing pasta : "<<qpasta - spasta;
            cout<<"\n\n Total pasta collection of the day : "<<total_pasta;
            cout<<"=====================================================================";
            cout<<"\n\n Number of burger we had : "<<qburger;
            cout<<"\n\n Number of burger we gave for rent : "<<sburger;
            cout<<"\n\n Remianing burger : "<<qburger - sburger;
            cout<<"\n\n Total burger collection of the day : "<<total_burger;
            cout<<"=====================================================================";
            cout<<"\n\n Number of chicken we had : "<<qchicken;
            cout<<"\n\n Number of chicken we gave for rent : "<<schicken;
            cout<<"\n\n Remianing chicken : "<<qchicken - schicken;
            cout<<"\n\n Total chicken collection of the day : "<<total_chicken;
            cout<<"=====================================================================";
            cout<<"\n\n Number of noodles we had : "<<qnoodles;
            cout<<"\n\n Number of noodles we gave for rent : "<<srooms;
            cout<<"\n\n Remianing noodles : "<<qnoodles - snoodles;
            cout<<"\n\n Total noodles collection of the day : "<<total_noodles;
            cout<<"=====================================================================";
            cout<<"\n\n Number of shake we had : "<<qshake;
            cout<<"\n\n Number of shake we gave for rent : "<<sshake;
            cout<<"\n\n Remianing shake : "<<qshake - sshake;
            cout<<"\n\n Total shake collection of the day : "<<total_shake;


            case 8: 
                    exit(0);

                    default:
                    cout<<"\n Please select the numbers mentioned above ! ";
    }
    
    goto m;
}




