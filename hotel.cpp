
#include <iostream>

using namespace std;

int main()
{
    int quant,choice;
    
    //Quantity
    int Qrooms=0 ,Qpasta=0 ,Qburger=0 ,Qnoodles=0 ,Qshake=0 ,Qchicken=0;
    
    //food items sold
    int Srooms=0 ,Spasta=0 ,Sburger=0 ,Snoodles=0 ,Sshake=0 ,Schicken=0;

    //Total price of items
    int Trooms=0 ,Tpasta=0 ,Tburger=0 ,Tnoodles=0 ,Tshake=0 ,Tchicken=0;
    
    
    
    
    cout<<"\n\t Quantity of items we have";
    cout<<"\n Rooms available:";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta:";
    cin>>Qpasta;
    cout<<"\n Quantity of burger:";
    cin>>Qburger;
    cout<<"\n Quantity of noodles:";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake:";
    cin>>Qshake;
    cout<<"\n Quantity of chicken-roll:";
    cin>>Qchicken;
    
    
    m:
    cout<<"\n\t\t\t Please select from the menu option";
    cout<<"\n\n1) Rooms";
    cout<<"\n2) Pasta ";
    cout<<"\n3) Burger ";
    cout<<"\n4) Noodles ";
    cout<<"\n5) shake ";
    cout<<"\n6) Chicken-roll ";
    cout<<"\n7) Information regarding sales and collection ";
    cout<<"\n8) Exit ";
    
    cout<<"\n\n please enter your choice! ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
              cout<<"\n\n Enter the number of rooms you want: ";
              cin>>quant;
              if(Qrooms-Srooms >= quant){
                  Srooms+=quant;
                  Trooms+=quant*1200;
                  cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you";
              }
              else {
                  
                  cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel";
                  
              }
              break;
              
              
        
        
        case 2:
              cout<<"\n\n Enter the pasta Quantity: ";
              cin>>quant;
              if(Qpasta-Spasta >= quant){
                  Spasta+=quant;
                  Tpasta+=quant*250;
                  cout<<"\n\n\t\t"<<quant<<" pasta is the ordere! ";
              }
              else {
                  
                  cout<<"\n\t Only"<<Qpasta-Spasta<<" pasta remaining in hotel";
                  
              }  
			  break;   
              
              
        case 3:
              cout<<"\n\n Enter the Burger Quantity: ";
              cin>>quant;
              if(Qburger-Sburger >= quant){
                  Sburger+=quant;
                  Tburger+=quant*120;
                  cout<<"\n\n\t\t"<<quant<<" Burger is the ordere! ";
              }
              else {
                  
                  cout<<"\n\tOnly "<<Qburger-Sburger<<" burger remaining in hotel";
                  
              }   
              break;
        
        case 4:
              cout<<"\n\n Enter the Noodles Quantity: ";
              cin>>quant;
              if(Qnoodles-Snoodles >= quant){
                  Snoodles+=quant;
                  Tnoodles+=quant*200;
                  cout<<"\n\n\t\t"<<quant<<" plate  noodle is the ordere! ";
              }
              else {
                  
                  cout<<"\n\tOnly "<<Qnoodles-Snoodles<<" Noodles remaining in hotel";
                  
              }
              break;
              
        case 5:
              cout<<"\n\n Enter the Shakes Quantity: ";
              cin>>quant;
              if(Qshake-Sshake >= quant){
                  Sshake+=quant;
                  Tshake+=quant*220;
                  cout<<"\n\n\t\t"<<quant<<" glass shakes is the ordere! ";
              }
              else {
                  
                  cout<<"\n\tOnly "<<Qshake-Sshake<<" Shakes remaining in hotel";
                  
              }
              break;
              
        
        case 6:
              cout<<"\n\n Enter the Chicken-roll Quantity: ";
              cin>>quant;
              if(Qchicken-Schicken >= quant){
                  Schicken+=quant;
                  Tchicken+=quant*150;
                  cout<<"\n\n\t\t"<<quant<<" Chicken-roll  is the ordere! ";
              }
              else {
                  
                  cout<<"\n\tOnly "<<Qchicken-Schicken<<" Chicken-roll remaining in hotel";
                  
              }
              break;
              
        case 7:
              
              cout<<"\n\t\tDetails of sales and collection ";
              cout<<"\n\n Number of rooms we had : "<<Qrooms;
              cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
              cout<<"\n\n remaining rooms "<<Qrooms-Srooms;
              cout<<"\n\n Total rooms collection for the day  "<<Trooms;
              
              
              
               
             
              cout<<"\n\n Number of Pastas we had : "<<Qpasta;
              cout<<"\n\n Number of pasta we sold "<<Spasta;
              cout<<"\n\n remaining pastas "<<Qpasta-Spasta;
              cout<<"\n\n Total pasta collection for the day  "<<Tpasta;
              
              
               
              cout<<"\n\n Number of burger we had : "<<Qburger;
              cout<<"\n\n Number of burger we sold "<<Sburger;
              cout<<"\n\n remaining burger "<<Qburger-Sburger;
              cout<<"\n\n Total burger collection for the day  "<<Tburger;
              
              
              
              cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
              cout<<"\n\n Number of Noodles we sold "<<Snoodles;
              cout<<"\n\n remaining Noodles "<<Qnoodles-Snoodles;
              cout<<"\n\n Total Noodles collection for the day  "<<Tnoodles;
              
              
              cout<<"\n\n Number of Shakes we had : "<<Qshake;
              cout<<"\n\n Number of Shakes we sold "<<Sshake;
              cout<<"\n\n remaining Shakes "<<Qshake-Sshake;
              cout<<"\n\n Total Shakes collection for the day  "<<Tshake;
              
              cout<<"\n\n Number of Chicken-roll we had : "<<Qchicken;
              cout<<"\n\n Number of Chicken-roll we sold "<<Schicken;
              cout<<"\n\n remaining Chicken-roll "<<Qchicken-Schicken;
              cout<<"\n\n Total Chicken-roll collection for the day  "<<Tchicken;
              
              cout<<"\n\n Total  collection for the day  "<< Tchicken + Trooms + Tpasta + Tburger + Tnoodles + Tshake;
              
              
              break;
              
              
        case 8:
            exit(0);
            
            default:
                cout<<"\n Please select the numbers mentioned above!";
    }
    goto m;
    
    
    
    
    
    
    
}

