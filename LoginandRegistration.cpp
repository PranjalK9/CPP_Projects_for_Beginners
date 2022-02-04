#include<bits/stdc++.h>
using namespace std;

void login();
void registration();
void forgot();


int main(){
  
  int c;
  cout<<"\t\t===============================================================================\n\n\n";
  cout<<"\t\t                Welcome to the login page                   \n\n";
  cout<<"\t\t----------------------------Menu-----------------------------------------------\n";
  cout<<"                                                                  \n";
  cout<<"\t| Press 1 to Login"<<endl;
  cout<<"\t| Press 2 to Registration"<<endl;
  cout<<"\t| Press 3 to Forgot Password"<<endl;
  cout<<"\t| Press 4 to Exit"<<endl;
  cout<<"\n\t\t\t Please Enter your choice : ";
  cin>>c;
  cout<<endl;

  switch(c){
      case 1:
        login();
        break;

      case 2:
        registration();
        break;

      case 3:
        forgot();
        break;

      case 4:
        cout<<"\t\t\t Thankyou! \n\n";
        break;
      default:
            system("cls");
            cout<<"\t\t\t Please Select from the given above \n"<<endl;
            main();


  }

}

void login(){
    int count=0;
    string userId , password ,  id, pass;
    system("cls");
    cout<<"\t\t\t Please Enter the Username and Password : "<<endl;
    cout<<"\t\t\t USERNAME ";
    cin>>userId;
    cout<<"\t\t\t PASSWORD ";
    cin>>password;
    ifstream input("record.txt");

    while(input>>id>>pass){
      if(id == userId && pass == password)
      {
        count=1;
        system("cls");
      }
      
    }
    input.close();

    if(count==1){
      cout<<userId<<"\n  Successfully Login \n Thanks for logging in ! \n";
      main();
    }
    else{
      cout<<"\n Please check your Username and Password \n";
      main();
    }
}

void registration(){
  string ruserId , rpassword, rid, rpass;
  system("cls");
  cout<<"\t\t\t Enter the Username : ";
  cin>>ruserId;
  cout<<"\t\t\t Enter the Password : ";
  cin>>rpassword;

  ofstream f1("record.txt" , ios::app);
  f1<<ruserId<<" "<<rpassword<<endl;
  system("cls");
  cout<<"\n\t\t\t Registration is Successfully! \n ";
  main();
}

void forgot(){
  int option;
  system("cls");
  cout<<"\t\t\t You forgot the password ? No worries \n";
  cout<<"Press 1 to search your id by your Username"<<endl;
  cout<<"Press 2 to go back to the main menu "<<endl;
  cout<<"\t\t\t Enter your choice : ";
  cin>>option;
  switch(option){
    case 1:
    {
      int count = 0; 
      string suserId , sId , spass;
      cout<<"\n\t\t\t  Enter the username which you remebered : ";
      cin>>suserId;

      ifstream f2("record.txt");
      while(f2>>sId>>spass){
        if(sId == suserId){
          count = 1;

        }
      }
      f2.close();
      if (count == 1)
      {
        cout<<"\n\n Your account is found! \n";
        cout<<"\n\n Your Password id :  "<<spass;
        main();
        
      }
      else{
        cout<<"\n\t Sorry! Your Account is Not Found! \n";
        main();
      }
      break;
    }

    case 2:
      {
        main();

      }
      default:
        cout<<"\t\t\t Wrong Choice ! Please Try again. "<<endl;
        forgot();

  }
}