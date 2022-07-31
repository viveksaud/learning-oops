/*
#insertion and extraction (used same as previous way but for strings)
            << insertion(for output)
            >> extraction(for input)


#mixed operations
-> you can mix string objects with another string object or c style string i.e.char array
-> C++ string can also be concatenated with character constant


#Useful methods:
                assign()
                append()
                insert()
                replace()
                erase()
                find()
                rfind()
                compare()
                c_str()
                size()


*/
#include<iostream>
#include<conio.h>
#include<string>
#include<string.h>
using namespace std;

main()
{
    //extraction and insertion operator
    cout<<"Enter your name"<<endl;
    string s1;
    cin>>s1;
    cout<<"Hello,"<<s1<<endl;
    getch();


    //mixed operations
    string s2="hello";
    char str[]="students";
    string s3;
    s3=s2+str;//string class object + char array
    //s3=s2+123;//error //can't string class oject + number
    s3=s2+"123";//correct//string class object + string
    s3=s2+'A';//string class object + single char(i.e. character constant)
    cout<<s3<<endl;
    //*note: atleast one of the operand must be string class object
    s3=str+'B';//no desired output
    cout<<s3<<endl;


    //useful methods:
    string s4;
    s4.assign("hi");//assignment
    cout<<s4<<endl;

    s4.append(",everyone");//concatenation
    cout<<s4<<endl;

    s4.insert(3,"123");//inserting second argument in index first argument
    cout<<s4<<endl;//output:hi,123everyone

    s4.replace(6,3,"V");//replace(starting index,length,replacedby)
    cout<<s4<<endl;

    s4.erase();//erase content of s4
    cout<<s4<<endl;

    string s5="hello from vivek";
    int index=s5.find("vivek");
    cout<<index<<endl;

    int indexFromReverse=s5.rfind("vivek");//finds from reverse
    cout<<indexFromReverse<<endl;

    string s6="ab", s7="cd";
    int i= s6.compare(s7);
    cout<<i<<endl;

    string s8="k xa halkhabar";
    char strg[20];
    strcpy(str,s1.c_str());//converts string object into c style string
    cout<<strg<<endl;

    int j=s8.size();
    cout<<j<<endl;
}