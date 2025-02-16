// OOP 1 Project
// Restaurant Management System
/// Created by Sardorbek Karimov(U2110159), Dadaboy Masharipov(U2110195), Diyor Mirzaitbaev(U2110202)
// and Mekhriddin Jumaev(U2110154)


#include <iostream>
#include <unistd.h> // used for function sleep() 

using namespace std;

// functions

void about_drinks(string, float, string, float);

void about_desserts_dishes(string food_name, string food_ingredients, float food_cost);

void finishing(float payment);

void about_program();

void about_restaurant();

void ordering_table(float sum);

float wrong_data_type(float number);

void starline();

int main()
{
    int convert, corvert2, convert3, k = 0;
    
    float wallet = 0, menu_number, drink_number, buy_drink, dessert_number,  buy_dessert, dish_number, buy_dish, backing, product_volume;
    float change_table;
  // Arrays for Drinks
   
    const int n  = 10;
 
  // Array for drink names
    string drinks[n] = {"Coca Cola", "Pepsi", "WF", "Adrenaline", "RC Cola", "Smile Tea",
    "Green Tea", "Fanta", "Red bull", "Coffee"};
  
  // Array for drink volumes
    float volume[n] = {1.5, 1.5, 0.5, 0.7, 1.5, 0.5, 1.0, 1.5, 0.7, 0.3};
  
  // Array for expiration date
    string expiration[n] = {"21 . 12 . 2021", "30 . 11 . 2021", "29 . 11 . 2021", "11 . 02 . 2022", "01 . 02 . 2022",
     "29 . 01 . 2022", "09 . 03 . 2022", "01 . 04 . 2022", "06 . 05 . 2022", "18 . 01 . 2022"};
  
  // Array for drink cost
    float cost_drink[n] = {5.5, 5.4, 3.2, 3.6, 5.0, 2.3, 2.5, 4.0, 3.3, 2.0};

      const int m = 8;

   // Array for Desserts and Salads names
  
   string dessert_salad[m] = {"Lemon Pie", "Chocolate Pie", "Rice Bowl","Tuna Pasta", "Chicken Caesar Salad",
    "Chocolate IceCream", "Cucumber Tomato Salad", "Kotleti"};
  
   // Array for ingredients
   string desert_ingredients[m] = {"Lemon, Eggs, Nut", "Chocolate, Nut, Sugar", "White Rice, Cabbage, Carrot",
    "Tuna, Oil, Salt", "Chicken, Oil, Lettuce", "Chocolate, Milk", "Cucember, Tomato, Onion", "Meat, Flour"};
   
    // Array for desserts and salads cost
    float cost_desert_salad[m] = {25, 30, 25, 35, 40, 45, 25, 40};
   
      const int l = 7;
  
   // Array for Dishes names
   string dishes[l] = {"Palov", "Kebab", "Pizza", "Soup", "Somsa", "Pasta", "Fried chicken"};
   
   // Array for ingredients
   string food_ingredients[l] = {"White Rice, Carror, Meat", "Meat, Tomato, Onion",
   "Flour, Cheese, Meat, Sauce", "ChickenMeat, Liquid, Vegetables", "Lamb, Onion, Flour",
   "Meat, Flour, Sauce", "Chicken, Seasoned Flour, Batter"};
    
    // Array for dishes cost
    float cost_dishes[l] = {100, 130, 125, 100, 90, 120, 90};


// Welcoming
  
  cout<<"\n \t\t\t=========================\n";
        cout<<"\n\t\t\tWELCOME TO OUR RESTAURANT  \n";
        cout<<"\n \t\t\t=========================\n\n";
        cout<<"\n \t\t\t* * * * * * * * * * * * ";
        cout<<"\n\t\t\t";
        cout<<"\n\t\t\t";
        cout<<"\n\t\t\t* * * * * * * * * * * *\n\n\n";


  // Main options page
back_menu:
cout << "\n\n\t\t\tPlease choose one !!!!\n\n";

cout << "\t\t\t1 --- Order Food\n\t\t\t2 --- Order Table\n\t\t\t3 --- About Restaurant\n\t\t\t4 --- About Program\n\t\t\t0 --- Finish";

starline();  // function to print a line of stars

float starting_page;

while(true)
{

starting_page = wrong_data_type(starting_page);   
  
   if(starting_page == 1)
   {
    cout << endl;
    break;
   }
   else if(starting_page == 2)
   {
     
    // if the user wants to change the table
     if(k >= 1)
     {
       
       cout << "You have alreadey booked the table." << endl;
       cout << "1. Change table\n0. Back\n" << endl;
       while(true)
       {
         change_table = wrong_data_type(change_table);  // cheacking wrong datatype
        
         if(change_table == 0) 
            goto back_menu;  // backing
         else if(change_table == 1)
         {
            cout << "OK. You can change your table !!!\n" << endl;
            wallet -= 5;  // budget does not change if changing the table
            break;
         }
         else 
             cout << "Please, enter 1 or 0\n";
          } 
      }
   


   // call to funtion ordering_table() 
   ordering_table(wallet);
    wallet += 5;
    k++;
  cout << "Your budget: " << wallet << " $" << endl;
  cout << "\n0. Back";
  
  starline();  // function to print a line of stars

   while(true)
   { 
    backing = wrong_data_type(backing); // checking wrong datatype
    
    if(backing == 0)
     {
      goto back_menu;
     }
    else
     {
      cout << "You input wrong number. Please choose among given numbers !!!\n";
     }
    }
     break;
   }
  
   else if(starting_page == 3)
   {
   
   // call to funtion about_restaurant()
   about_restaurant();
    
    cout << "\n\n0. Back";  
       
       starline();  // function to print a line of stars

        while(true)
        { 
    backing = wrong_data_type(backing);   // cheaching wrong datatype
    
    if(backing == 0)
     {
      goto back_menu;
     }
    else
     {
      cout << "You input wrong number. Please choose among given numbers !!!\n";
     }
    }

   break;
   }
  
  
   else if(starting_page == 4)
   {
   // call to funtion about_program()
   about_program();
     
     cout << "\n0. Back";
     
     starline();  // function to print a line of stars

       while(true)
       { 
    backing = wrong_data_type(backing); 
    
    if(backing == 0)
     {
      goto back_menu;
     }
    else
     {
      cout << "You input wrong number. Please choose among given numbers !!!\n";
     }
    }
   
   break;
   }
  
   else if(starting_page == 0)
   {
   // call to funtion finishing()  
     finishing(wallet);
     return 0;
   }
   else
   {
     cout << "You input wrong number. Please choose among given numbers !!!\n";
   }
}


label2:

    cout << "\t\t\tWe HAVE SUCH KIND OF MENU. PLEASE CHOOSE ONE\n";
    cout << "\t\t\t1. DRINKS \n\t\t\t2. DESSERTS AND SALADS \n\t\t\t3. DISHES\n\t\t\t0. BACK" << endl;

  starline();  // function to print a line of stars
  
// intputtimg MENU (DRINKS << DESSERT AND SALADS << DISHES)
while(true)
{
   menu_number = wrong_data_type(menu_number);  


 if(menu_number == 0)
  {
     goto back_menu;
  }

///////////////////////////////////////////////////////////////////////////////////
 
 else if(menu_number == 1)  // case 1
{
 
label1:
// outputing drinks menu using array
     for(int i = 0; i < 10; i++)
    {
      /// using array from line 38 
        cout << i + 1 << ". " << drinks[i] << "\n";
    } 
    cout << "0. Back\n";
  
    cout << "\nPlease, enter the number of drink that you want to buy" << endl;
 
    starline();  // function to print a line of ============

 while(true)
 {
  
  // calling function and inputting variable
  drink_number = wrong_data_type(drink_number);
 
  // going back when inputting 0
  if(drink_number == 0)
    {
        goto label2;
        break;
    }

 // when inputtted right numbers and calling function about_drinks and using array
  else if(drink_number==1||drink_number==2||drink_number==3||drink_number==4||drink_number==5||drink_number==6|| drink_number==7|| drink_number==8||drink_number==9||drink_number==10)
    {
  
   convert = int (drink_number);  // to make float drink_number to integer
      // function about_drinks
        about_drinks(drinks[convert - 1], volume[convert - 1], expiration[convert - 1], cost_drink[convert - 1]);
    
       break;

    }
 // when inputted wrong number
  else 
    {
       cout << "You input wrong number. Please choose among given numbers !!!\n";  
    }
 }
 
  cout << "\n\n1. Buy\n0. Back\n";
  

 while(true)
 {
  buy_drink = wrong_data_type(buy_drink);   // checks data type
  
  if(buy_drink == 1)
    {
    
     
      // ordering the number of drink
    cout << "How many do you want to buy ?" << endl;
    while(true)
    {
       product_volume = wrong_data_type(product_volume);
       if (product_volume == int(product_volume))
       {
       wallet += (product_volume * cost_drink[convert - 1]);
       break;
       }
       else 
       cout << "Please, Input only integer numbers, not float !!!" << endl;
    }
    
      
    
      cout << "Your purchase is done !!!\nYour budget: " << wallet << " $" << endl;
      cout << "\n1. Back to the main menu\n2. Back to the drinks menu\n3. Finish\n";
      
       starline();  // function to print a line of stars

       float back_to1; 
     
      while(true)
      {
       back_to1 = wrong_data_type(back_to1);   // checking wrong datatype
      
       if(back_to1 == 1)
           {
           goto label2;
           break;
           }
     
      else if(back_to1 == 2)
           {
           goto label1;
           break;
           }
     
      else if(back_to1 == 3)
          {
          finishing(wallet);  // using finishing function and ending the program
          break;
          }
      else 
          {
          cout << "You input wrong number. Please choose among given numbers !!!\n"; 
          }
      }    
          break;
    }
 
 else if(buy_drink == 0)
    {
        goto label1;
       break;
    }
 else 
    {
    cout << "You input wrong number. Please choose among given numbers !!!\n"; 
    }
 }  
 break;
}

///////////////////////////////////////////////////////////////////////////////////////////////

// case2

else if(menu_number == 2)
{

label3:
   // outputting the array of dessert and salads
   for(int i = 0; i < 8; i++)
    {
        cout << i + 1 << ". " << dessert_salad[i] << "\n";
    }
     cout << "0. Back\n";
   cout << "\nPlease, enter the number of dessert that you want to buy";
   starline();  // function to print a line of stars

   // inputting desert and salad
  while(true)
  {
  dessert_number = wrong_data_type(dessert_number);  // checking wrong datatype
  
    if(dessert_number == 0)
    {
        goto label2;  // going back
        break;
    }

    else if(dessert_number==1||dessert_number==2||dessert_number==3||dessert_number==4||dessert_number==5||dessert_number==6||dessert_number==7||dessert_number==8)
    {  
      corvert2 = int(dessert_number);  // to make float to integer
     
      // calling to fuction and using array
     
       about_desserts_dishes(dessert_salad[corvert2-1], desert_ingredients[corvert2-1], cost_desert_salad[corvert2 -1]);
       
       break;
    }
    else 
    {
       cout << "You input wrong number. Please choose among given numbers !!!\n";  
    }
  }
      
    cout << "\n\n1. Buy\n0. Back\n";
    

 while(true)
 {
   buy_dessert = wrong_data_type(buy_dessert);
   
    if(buy_dessert == 1)
    {
    
            
            // ordering the portion of desserts and salads
       cout << "How many portion do you want to buy ?" << endl;
    while(true)
    {
       product_volume = wrong_data_type(product_volume);  
      
       if (product_volume == int(product_volume))
       {
       wallet += (product_volume * cost_desert_salad[corvert2 -1]);
       break;
       }
       else 
       cout << "Please, Input only integer numbers, not float !!!" << endl;
    }
    

      cout << "Your purchase is done !!!\nYour budget: " << wallet << " $" << endl;
      cout << "1. Back to the main menu\n2. Back to the desserts and salads menu\n3. Finish\n";
     
     starline();  // function to print a line of stars

       float back_to2;
        while(true)
      {
       back_to2 = wrong_data_type(back_to2);
      
       if(back_to2 == 1)
           {
           goto label2;
           break;
           }
    
      else if(back_to2 == 2)
           {
           goto label3;
           break;
           }
    
      else if(back_to2 == 3)
          {
          finishing(wallet);  // ending the program
          break;
          }
      
      else 
          {
          cout << "You input wrong number. Please choose among given numbers !!!\n"; 
          }
    }    

          break;
     }
   
     if(buy_dessert == 0)
    {
        goto label3;
        break;
    }
     else
     {
    cout << "You input wrong number. Please choose among given numbers !!!\n"; 
     }
 }
  break;
}



////////////////////////////////////////////////////////////////////////////
// if3

else if(menu_number == 3)
{

label4:
   // outputting the array of dishes
   for(int i = 0; i < 7; i++)
    {
        cout << i + 1 << ". " << dishes[i] << "\n";
    }
     cout << "0. Back\n";
   cout << "\nPlease, enter the number of dessert that you want to buy" << endl;
   
  starline();  // function to print a line of stars

 while(true)
 {

   dish_number = wrong_data_type(dish_number);  // checking datatype
 
  if(dish_number == 0)
    {
        goto label2;
        break;
    }
    else if(dish_number==1||dish_number==2||dish_number==3||dish_number==4||dish_number==5||dish_number==6||dish_number==7)
    {
       convert3 = int (dish_number);
      // function gives information about the dish
       about_desserts_dishes(dishes[convert3-1], food_ingredients[convert3-1], cost_dishes[convert3 -1]);
       break;
    }
    else 
    {
      cout << "You input wrong number. Please choose among given numbers !!!\n"; 
    }

}
   
   
   cout << "\n\n1. Buy\n0. Back\n";
 
 while(true)
  {
     buy_dish = wrong_data_type(buy_dish);  // checking wrong datatype
  if(buy_dish == 1)
    {
              
              // ordering the portion of food
       cout << "How many portion do you want to buy ?" << endl;
    while(true)
    {
       product_volume = wrong_data_type(product_volume);
       if (product_volume == int(product_volume))
       {

       wallet += (product_volume * cost_dishes[convert3-1]);
       break;
       }
       else 
       cout << "Please, Input only integer numbers, not float !!!" << endl;
    }
      
      
      cout << "Your purchase is done !!!\nYour budget: " << wallet << " $" << endl;
      cout << "1. Back to the main menu\n2. Back to the dishes menu\n3. Finish\n";
     
      starline();  // function to print a line of stars

       float back_to3;
     while(true)
     {
       back_to3 = wrong_data_type(back_to3);  // checking wrong datatype
       
       if(back_to3 == 1)
        {
           goto label2;
           break;
        }   
       else if(back_to3 == 2)
       {
           goto label4;
           break;
       }   
       else if(back_to3 == 3)
       {
          finishing(wallet);   // function for ending the program
          break;
       }
       else 
          {
             cout << "You input wrong number. Please choose among given numbers !!!\n";
          }
      }
     }


  else if(buy_dish == 0)
    {
        goto label4;
    }
  else
    {
    cout << "You input wrong number. Please choose among given numbers !!!\n";
    }
  }
   break;
}
   
 ////////////////////////////////////////////////////////////  
  // default
   else
     {
     cout << "You input wrong number. Please, try again" << endl;
     }
}   

    return 0;
}



// function for drinks. gives information about one drink 
void about_drinks(string drink_name, float drink_volume, string expiration_date, float drink_cost)
{
    cout << "Drink name : " << drink_name << endl;
    
    cout << "Volume : " << drink_volume << " litre" << endl;
    
    cout << "Expiration date : " << expiration_date << endl;
    
    cout << "Cost : " << drink_cost << " $"<< endl;
}

// function for desserts and dishes. gives information about one dessert or food
void about_desserts_dishes(string food_name, string food_ingredients, float food_cost)
{
    cout << "Food name : " << food_name << endl;
    
    cout << "Ingredients : " << food_ingredients << endl;

    cout << "Cost : " << food_cost << " $"<< endl;
}
 
// function for finishing
void finishing(float payment)
{
    cout << "Thank you for your purchase !!!\nYour purchase is " << payment << " $" << endl;
    cout << "Do you want to pay in cash or by card ?\n\n1. Cash\n2. Card\n";
   
   starline();  // function to print a line of stars

    float cash_card;
  
   while(true) 
   {
    cash_card = wrong_data_type(cash_card);
  
    if(cash_card == 1)
    {
      cout << "Please, put your money into machine !\n";
      break;
    }
    if(cash_card == 2)
    {
      cout << "Please, put your card into machine !\n";
      break;
    }
    else
    {
      cout << "You input wrong number. Please choose among given numbers !!!\n";
    }   
   }   
     sleep(3);
  
  for(int i = 3; i >= 0; i--)
  {
      cout << i << endl;
      sleep(1);
  }
  starline();  // function to print a line of stars

   cout << "\nPayment has been succesfully completed !!!\nPlease, take your check !!!\n" << endl;
   sleep(3);
  
      cout<<"\n \t\t\t* * * * * * * * * * * * ";
        cout<<"\n\t\t\t";
        cout << "\n\t\t\t    THANK YOU !!!" << endl;
        cout<<"\n\t\t\t";
        cout<<"\n\t\t\t* * * * * * * * * * * *\n\n\n";
   
}



// function for ordering the table
void ordering_table(float sum)
{
  sum = 0;
    float table_number;  
    const int n = 6; 
int a[n] = {1, 3, 5, 6, 8, 9}; // using array

  cout << " We have these tables. Note that booking per table is 5 $.\n\tPlease, choose one\n";

for(int i = 0; i < n; i++)
{
    cout << "\tTable " << a[i] << endl;
} 
  cout << "\nTables 2, 4, 7 and 10 have already been ordered";
    starline();  // function to print a line of stars

 while(true)
 {

 table_number = wrong_data_type(table_number);  // using function in the other function

if( table_number == 1 || table_number == 3 || table_number == 5 || table_number == 6 || table_number == 8 || table_number == 9)
{
   sum += 5;
 cout << "You booked the table " << table_number << endl;
 break;
}
   
else
cout << "You input wrong number. Please choose among given numbers !!!\n";
} 
}


 // about program 
 void about_program()
 {
  cout << "The program was created by a group consists of 4 iutarians on Noverber 28, 2021. The developers are  \n";
  cout << "Sardorbek Karimov(U2110159), Dadaboy Masharipov(U2110195), Diyor Mirzaitbaev(U2110202) and Mekhriddin Jumaev \n";
  cout << "(U2110154). It is the restaurant management system and we guess that it would be helpful if you use the program. \n";
  cout << "For any questions and offers, contact to @namesurname telegram link. Thank you !!!\n";
 }

  
// About restaurant
 void about_restaurant()
 {
   cout << "Our Restaurant which is called \"G'ijduvan\" is located in the university of Inha in Tashkent. \n";
   cout << "It is on the 3 rd floor of the A block in IUT. We want to provide IUT teachers and students \n";
   cout << "with mouth-watering dishes, delicious desserts, tasty salads and many drinks. You can visit  \n";
   cout << "our restaurant through this location link @name_surname. For any questions and offers, \n";
   cout << "please, contact to our telegram link @surname_name \n";
 
 }



// function to check wrong datatype
float wrong_data_type(float number)
{
while(!(cin>>number))
    {
     
     // clear preveous input
      cin.clear();  
   
    // ignores all the character untill it encounters delimeter    
      cin.ignore(1000,'\n');             
     
      cout << "You input wrong data type. Please, try again !" << endl;
    }
    return number;
}    

// gives us a line of ======
void starline()
{
  cout << endl;
  for(int i = 1; i <= 50; i++)
  {
    cout << "=";
  }
  cout << endl << endl;
}

