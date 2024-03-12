#include<iostream>
#include<string.h>
using namespace std;

class Student
{
public:
    int attendance, tuitionfee, semesterfee;
    float classTest, midExam,finalExam;

    char str_id[33] = "CSE2103024006",str_pswd[33] = "jamiul52",str_id1[33],str_pswd1[33];

    void setinfo()
    {
        cout << "\t\t\t\t\t\t\tERP Login"<< endl;
        cout << "Enter your ID : ";
        cin >> str_id1;
        cout << "Enter your password : ";
        cin >> str_pswd1;
    }
    void Display_menu();
    void Student_pro(string id);
    void Courselist()
    {
        cout << "\n1.Physics I\n2.OOP\n3.English II\n4.Math II\n5.OOP Sessional\n";
    }
    void Classroutine();
    void Payment(int t, int s);
    void Result(float marks);
    float Marks( int a,float c, float m,float f)
    {
        return a+c+m+f;
    }
};

class MyProfile//for bike class
{
protected :
    string User_Name, Password, HomeTown,str_name1, str_pswd1 ;

private :
    string Mail;
    int Number, age, birthyear;

public :
    void Registration();
    void setLogin();

    int Calculate_ID()
    {
        int ID = 2103024006;
        return ID % 10;
    }

    int Age()
    {
        int present = 2022;
        age = present - birthyear;
        return age;
    }

    string getUser1()
    {
        return User_Name;
    }

    string getUser2()
    {
        return str_name1;
    }

    string getPassword1()
    {
        return Password;
    }

    string getPassword2()
    {
        return str_pswd1;
    }
    virtual void Display() = 0;// Abstract the method

};

class Amazon: public MyProfile
{
public:
    void Display()
    {
        cout << "\t\t\tThanks for dealing with Amazon." << endl;
        cout << "Brand: Yamaha" << endl;
        cout << "Model: XSR155" << endl;
        cout << "Top Speed: 145 Kmph (approx)" << endl;
        cout << "Year: 2022" << endl;
        cout << "Color: Black" << endl;
        cout << "Price in BDT: 545,000 Tk. (ABS)" << endl;
    }
};

class Daraz: public MyProfile
{
public:
    void Display()
    {
        cout << "\t\t\tThanks for dealing with Darz." << endl;
        cout << "Brand: Yamaha" << endl;
        cout << "Model: XSR155" << endl;
        cout << "Top Speed: 145 Kmph (approx)" << endl;
        cout << "Year: 2022" << endl;
        cout << "Color: Black" << endl;
        cout << "Price in BDT: 545,000 Tk. (ABS)" << endl;
    }
};

class Evaly: public MyProfile
{
public:
    void Display()
    {
        cout << "\t\t\tThanks for dealing with Evaly." << endl;
        cout << "Brand: Yamaha" << endl;
        cout << "Model: XSR155" << endl;
        cout << "Top Speed: 145 Kmph (approx)" << endl;
        cout << "Year: 2022" << endl;
        cout << "Color: Black" << endl;
        cout << "Price in BDT: 545,000 Tk. (ABS)" << endl;
    }
};

class Efood
{
private:
    //how many item user order = ordernum and which item user order = oder
    int distance[4] = {565,446,53,65}, order, ordernum;
    double price[11] = {0,344.56,351.86, 631.45,577.43,
                        395.66,269.37,600.56,120,150,170
                       };
    string ch;
    string display[5][9] = {{"Rest\\Dis",">DHA","RAJ","KHU","CHA","BAR","SYL","MYM","RAN"},
                            {"   KFC   ",">75 ","198","177","277","135","242","118","288"},
                            {" PizzaHut",">71 ","199","174","274","132","239","115","285"},
                            {" Nando's ",">82 ","209","185","285","143","250","126","296"},
                            {"starkabab",">72 ","203","175","275","133","240","116","286"}
    };

public:
    //for bike and also efood pricesum = sum the taken item price
    double amount, total_amount, payable_Amount,pricesum = 0;
    int accountNo, accountNo1 = 20022002, pin, pin1 = 5555;//for bike and also efood

    void setAccountNo()
    {
        cout << "Enter your Account NO: ";
        cin >> accountNo;
    }

    void setPayable_Amount()
    {
        cout << "Enter Amount: ";
        cin >> payable_Amount;
    }

    void setPin()
    {
        cout << "Enter your Pin: ";
        cin >> pin;
    }

    double getAmount();
    void ArrayDisplay();//display the division distance
    void NearestRest();//calculate the nearest restuarant
    void Menu();// price menu for restuarant
    void Echoose();// choose for item
    double PaymentFood();

};

class Payment: public Amazon, public Daraz, public Evaly, public Efood// payment class for efood also
{
public:
    int p = 0;
    void Display()
    {
        cout << "\t\t\t\t\t...Payment option..." << endl;
        cout << "1. Bkash/Nogod." << endl;
        cout << "2. Debit Card/Credit card." << endl;
        cout << "3. Bank ." << endl;
    }
    double BkashNogod();
    double DebitCredit();
    double Bank();
    void Cal_amount();//calculation amount
    void Paymentfunction();// all payment operation here
    double setBikeandFood();
};

void ECommerce() // for bike
{
    Daraz I;
    Payment p;
    p.p = 2;//use when user check bike info
    string buy;
    int id =I.Calculate_ID();
    if(id >=0 && id <=3)
    {
        Amazon am;
        am.Registration();
        am.setLogin();

        // user id check
        if(am.getUser1() == am.getUser2() && am.getPassword1() == am.getPassword2())
        {
            am.Display();
            cout << "Do you want to buy ? yes : no ";
            cin >> buy;
            if (buy == "yes")
            {
                if(am.Age() >= 18)
                {
                    p.Paymentfunction();
                }
                else
                    cout << "Sorry! You are under 18." << endl;
            }
            else
                cout  << "Thank you for spending time with us." << endl;
        }
        else
            cout << "User ID and Incorrect Password! Please try again..." << endl;
    }
    else if(id >=4 && id <=6)//for daraz
    {
        Daraz dz;
        dz.Registration();
        dz.setLogin();
        if(dz.getUser1() == dz.getUser2() && dz.getPassword1() == dz.getPassword2())
        {
            dz.Display();
            cout << "Do you want to buy? yes : no ";
            cin >> buy;
            if (buy == "yes")
            {
                if(dz.Age() >= 18)
                {
                    p.Paymentfunction();
                }
                else
                    cout << "Sorry! You are under 18." << endl;
            }
            else
                cout  << "Thank you for spending time with us." << endl;
        }
        else
            cout << "User ID and Incorrect Password! Please try again..." << endl;
    }
    else
    {
        Evaly ev;
        ev.Registration();
        ev.setLogin();
        if(ev.getUser1() == ev.getUser2() && ev.getPassword1() == ev.getPassword2())
        {
            ev.Display();
            cout << "Do you want to buy? yes : no ";
            cin >> buy;
            if (buy == "yes")
            {
                if(ev.Age() >= 18)
                {
                    p.Paymentfunction();
                }
                else
                    cout << "Sorry! You are under 18." << endl;
            }
            else
                cout  << "Thank you for spending time with us." << endl;
        }
        else
            cout << "User ID and Incorrect Password! Please try again..." << endl;
    }
}

void Restuarant()//efood
{
    Payment e;
    e.p = 1;
    e.ArrayDisplay();
    e.NearestRest();
    e.Menu();
    e.Echoose();
    e.Paymentfunction();
}

int main()
{
    string choose,repeat;//choose for option choose and repeat for repeatedly check
    Student s1,s2,s3;
    s1.setinfo();

    int match_id = strcmp(s1.str_id,s1.str_id1),match_pswd = strcmp(s1.str_pswd,s1.str_pswd1);
    if(match_id == 0 && match_pswd == 0)
    {
        do
        {
            s1.Display_menu();
            cout << "\nChoose one :";
            cin >> choose;

            if(choose == "Profile")
                s2.Student_pro(s2.str_id);

            else if (choose == "CourseList")
                s2.Courselist();

            else if (choose == "ClassRoutine")
                s3.Classroutine();

            else if (choose == "Payment")
            {
                cout << "\nEnter tuition Fee: ";
                cin >> s3.tuitionfee;
                cout << "Enter semester Fee: ";
                cin >> s3.semesterfee;

                s3.Payment(s3.tuitionfee,s3.semesterfee);
            }
            else if (choose == "Result")
            {
                cout << "\nEnter attendance marks: ";
                cin >> s3.attendance;
                cout << "Enter classtest: ";
                cin >> s3.classTest;
                cout << "Enter midExam: ";
                cin >> s3.midExam;
                cout << "Enter finalExam: ";
                cin >> s3.finalExam;

                float marks = s3.Marks(s3.attendance,s3.classTest,s3.midExam,s3.finalExam);
                s3.Result(marks);
            }
            else if (choose == "ECommerce")
                ECommerce();
            else if(choose == "Efood")
                   Restuarant();
            else
                cout << "You choose wrong option!";
            cout << "\nIf you want to continue, then type continue : ";
            cin >> repeat;
        }
        while( repeat == "continue" || repeat == "Continue");
    }
    else
    {
        cout << "Incorrect Password or ID."<< endl;
    }
    return 0;
}

void Student :: Display_menu()// ERP display option
{
    cout << "\t\t\t\t\t\t\tLogin Successfully " << endl;
    cout << "\t\t\t\t\t\t   Student Panel(Jamiul Kawsar)" << endl;
    cout << "Profile"<< endl;
    cout << "CourseList"<< endl;
    cout << "ClassRoutine"<< endl;
    cout << "Payment"<< endl;
    cout << "Result"<< endl;
    cout << "ECommerce" << endl;
    cout << "Efood" << endl;
}

void Student :: Student_pro(string id)//for student
{
    cout << "\nStudent Name: Jamiul Kawsar"<< endl;
    cout << "Student ID: "<< id << endl;
    cout << "Program : B.Sc in Computer Science and Engineering"<< endl;
    cout << "Mobile : 01913959039"<< endl;
}

void Student :: Classroutine()//for student
{
    cout << "   SL    Course Title          Day               Class Time             Teacher Name "<<endl;
    cout << "========================================================================================"<<endl<<endl;
    cout << "   01    Physics I       Sunday/Wednesday     9.15am-10.30am        Md. Mahfuzzaman"<<endl;
    cout << "   02    OOP(Theory)     Monday/Wednesday     10.30am-11.45am       Md. Shah Jalal Jamil"<<endl;
    cout << "   03    English II      Sunday/Monday        12.-1.15/9.15-10.30   Jakiya Sultana Any "<<endl;
    cout << "   04    Math II         Sunday/Wednesday     11am-12pm/12pm-1pm    Md. Nazmul Alam"<<endl;
    cout << "   05    OOP(Sessional)  Monday               12pm - 2.45 pm        Md. Shah Jalal Jamil"<<endl;
}

void Student :: Payment(int t, int s)//for student
{
    int total = t+s, total_fee = 12100;
    if(total_fee == total)
        cout << "Payment clear."<< endl;
    else if(total_fee > total)
        cout << "Due = "<< total_fee - total << " Tk" << endl;
    else if(total_fee < total)
        cout << "Advance = "<< total - total_fee << " Tk" << endl;
    else
        cout << "Something went wrong! Please Try again..."<< endl;
}

void Student :: Result(float marks)//for student
{
    if (marks <= 0 || marks > 100)
        cout << "Wrong input!";
    else if(marks >= 80)
        cout << "Congratulations! You got A+";
    else if (marks >= 76)
        cout << "Congratulations! You got A";
    else if (marks >= 70)
        cout << "Congratulations! You got A-";
    else if (marks >= 66)
        cout << "Congratulations! You got B+";
    else if (marks >= 60)
        cout << "Congratulations! You got B";
    else if (marks >= 56)
        cout << "Congratulations! You got B-";
    else if (marks >= 50)
        cout << "Congratulations! You got C+";
    else if (marks >= 46)
        cout << "Congratulations! You got C";
    else if (marks >= 40)
        cout << "Congratulations! You got D";
    else
        cout << "Failed.";
}

double Payment :: setBikeandFood()//set for which amount assign bike or foodprice
{
    double a;
    if(p == 1)
    {
        a = PaymentFood();
    }
    if(p == 2)
    {
        a = 545000;
    }
    return a;
}

double Payment :: BkashNogod()
{

    double am = setBikeandFood();

    total_amount =(am + (0.12 * am) +(0.015 * am));
    return total_amount;
}

double Payment :: DebitCredit()
{
    double am = setBikeandFood();
    total_amount = am + (0.12 * am) +(0.01 * am);
    return total_amount;
}

double Payment :: Bank()
{
    double am = setBikeandFood();
    total_amount = am + (0.12 * am) +(0.0005 * am);
    return total_amount;
}

void Payment :: Cal_amount()//calculation amount
{
    setAccountNo();
    setPayable_Amount();
    setPin();
    if(pin == pin1 && accountNo == accountNo1)
    {
        if (total_amount <= payable_Amount)
            cout << "Payment successful!" << endl;
        else if(total_amount > payable_Amount)
            cout << "You have to pay the total fee.\nClear your due: " << total_amount - payable_Amount << " Tk."<< endl;
        else
            cout << "something went wrong! Please Try again..." << endl;
    }
    else
        cout << "Wrong Account No or Pin! Please Try again..." << endl;
}

void Payment :: Paymentfunction()//payment for both bike and efood
{
    string choice;

    Display();
    cout << "Select one: ";
    cin >> choice;
    if(choice == "1")//for bkash
    {
        cout << "You have to pay: " <<  BkashNogod() << " Tk." << endl;
        Cal_amount();
    }
    else if (choice == "2")// for card
    {
        cout << "You have to pay: " <<  DebitCredit() << " Tk." << endl;
        Cal_amount();
    }
    else if(choice == "3")// bank
    {
        cout << "You have to pay: " <<  Bank() << " Tk." << endl;
        Cal_amount();
    }
    else
        cout << "Something went wrong! Try again..." << endl;
}

void MyProfile ::  Registration()// registration for bike website
{
    cout << "\t\t\t\t\tPlease Register..." << endl;
    cout << "user name: ";
    cin>> User_Name;
    cout << "Password: ";
    cin>> Password;
    cout << "Email ID: ";
    cin>> Mail;
    cout << "Mobile Number: ";
    cin>> Number;
    cout << "Home town: ";
    cin>> HomeTown;
    cout << "Birth Year: ";
    cin>> birthyear;
}

void MyProfile :: setLogin()//login information for bike website
{
    cout << "\t\t\t\t\tPlease Login First..." << endl;
    cout << "User name: ";
    cin >> str_name1;
    cout << "Password: ";
    cin >> str_pswd1;
}

void Efood :: ArrayDisplay()//display the distance of between restuarant and location
{
    for(int i = 0; i < 5; i ++)
    {
        for(int j = 0; j < 9; j++)
            cout << "\t" << display[i][j];
        cout << endl << endl;
    }
}

void Efood :: NearestRest()//find nearest restuarant
{
    int value = distance[0];
    for(int i = 0; i < 4; i++)
    {
        if(value > distance[i])
            value = distance[i];
    }

    if(value == distance[0])
    {
        cout << "\nKFC is the nearest Restaurant! And it's distance "<< value  << " KM" << endl;
    }

    if(value == distance[1])
    {
        cout << "\nPizzaHut is the nearest Restaurant! And it's distance "<< value  << " KM" << endl;
    }

    if(value == distance[2])
    {
        cout << "\nNando's is the nearest Restaurant! And it's distance "<< value  << " KM" << endl;
    }

    if(value == distance[3])
    {
        cout << "\nStarKabab is the nearest Restaurant! And it's distance "<< value  << " KM" << endl;
    }
}

void Efood :: Menu()// price menu for efood
{
    cout << endl<< "\t\t\t Menu-Price"<< endl<< endl;
    cout << "1. Fried Chicken (Hot & Crispy)                 : Tk 344.56 / 2 Pieces" << endl;
    cout << "2. Burger - Chicken Zinger                      : Tk 351.86 / 1 Burger" << endl;
    cout << "3. Zinger meal(1 burger+ 1 Chicken+fries+drinks): Tk 631.45 / 1 Meal" << endl;
    cout << "4. Boneless Chicken strips with dip             : Tk 577.43 / 6 Pieces" << endl;
    cout << "5. Hot Wings                                    : Tk 395.66 / 6 Pieces" << endl;
    cout << "6. Snack box (1 pc chicken + fries)             : Tk 269.37 / 1 Box" << endl;
    cout << "7. Beef Tehari                                  : Tk 600.56 / 1 Meal" << endl;
    cout << "8. Coffee                                       : Tk 120 / 1" << endl;
    cout << "9. Thai Soup                                    : Tk 150 / 1 Pieces" << endl;
    cout << "10. Chicken/ Beef Noodle Soup                   : Tk 170 / 1 Pieces" << endl;
}

void Efood :: Echoose()//efood item choose and total price return
{
    cout  << "How many you have: ";
    cin >> ordernum;
    for(int j = 1; j <= ordernum; j++)
    {
        cout << "Which food you want to Order sir: ";
        cin >> order;
        if(order > 0 && order <=10)
        {
            for(int i = 0; i < order; i++)
            {
                if(i = order)
                    pricesum = pricesum +price[i];
            }
        }
        else
        {
            ordernum++;
            cout << "Sorry sir! We don't have that item. Please, try another item."<< endl;
        }
    }
}

double Efood :: PaymentFood()//food price return for payment
{
    return  pricesum ;
}

