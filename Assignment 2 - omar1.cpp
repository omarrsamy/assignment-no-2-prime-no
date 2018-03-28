#include <iostream>
using namespace std;
int main()
{
int counter=0,y,counterRow=0,CounterCoulmn=0;
    string row1="abcde",row2="fghij",row3="klmno",row4="pqrst",row5="uvxyz";

    string coulmn1="afkpu",coulmn2="bglqv",coulmn3="chmrx",coulmn4="dinsy",coulmn5="ejotz";
    string key ;
    cout << "Enter the key : ";
    cin >> key ;
 string x;
 string space=" ";
 cin.ignore();
 cout << "Enter the message : ";
 getline(cin,x);
 y=x.length();
 while(counter<y)
{
    if(x[counter]==space[0]){
        cout << space ;
    }
   while(counterRow<5)
   {

     if(x[counter]==row1[counterRow])
      cout<<key[0];
      counterRow++;
}
 counterRow=0;
   while(counterRow<5)
   {

     if(x[counter]==row2[counterRow])
      cout<<key[1];
      counterRow++;
}

 counterRow=0;
      while(counterRow<5)
   {

     if(x[counter]==row3[counterRow])
      cout<<key[2];
      counterRow++;
}

 counterRow=0;
       while(counterRow<5)
   {

     if(x[counter]==row4[counterRow])
      cout<<key[3];
      counterRow++;
}

 counterRow=0;
    while(counterRow<5)
    {

     if(x[counter]==row5[counterRow])
      cout<<key[4];
      counterRow++;
}

 counterRow=0;
      while(CounterCoulmn<5)
      {
         if(x[counter]==coulmn1[CounterCoulmn])
             cout<<key[0];
             CounterCoulmn++;

      }

   CounterCoulmn=0;
      while(CounterCoulmn<5)
      {
         if(x[counter]==coulmn2[CounterCoulmn])
             cout<<key[1];
             CounterCoulmn++;

      }

        CounterCoulmn=0;
      while(CounterCoulmn<5)
      {
         if(x[counter]==coulmn3[CounterCoulmn])
             cout<<key[2];
             CounterCoulmn++;

      }

       CounterCoulmn=0;

      while(CounterCoulmn<5)
      {
         if(x[counter]==coulmn4[CounterCoulmn])
             cout<<key[3];
             CounterCoulmn++;

      }
      CounterCoulmn=0;
      while(CounterCoulmn<5)
      {
         if(x[counter]==coulmn5[CounterCoulmn])
             cout<<key[4];
             CounterCoulmn++;

      }

       CounterCoulmn=0;
       counter++;
}
    cout << "Enter your key : ";
    cin >> key ;
    string memory1 ;
    cout<<"Enter Cipher text : ";
    string input;
    cin.ignore();
    getline(cin,input);
    int input_count=0 , p =0 ,i=0; ;
    int len=input.length();
    while(input_count<len){
        if(input[input_count]==space[0]){
            cout<<space;
            input_count++;
        }
        else{

            if(input[input_count]== key[0]){
                memory1 = row1;
            }
            else if (input[input_count]== key[1]){
                memory1 = row2;
            }
            else if (input[input_count]== key[2]){
                memory1 = row3;
            }
            else if (input[input_count]== key[3]){
                memory1 = row4;
            }
            else if (input[input_count]== key[4]){
                memory1 = row5;
            }
            input_count++;
            p =0;
            while(p<5){
                if(input[input_count]==key[p]){
                    cout<<memory1[p];
                    break;
                }
                p++;
            }
            input_count++;
        }
    }
    return 0;
}

