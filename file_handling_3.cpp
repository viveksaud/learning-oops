/*
#file opening modes:(as a second argument in open()) *note: can apply multiple mode by separating them by or sign i.e.|
ios::in     ||| input/read(default while reading)
ios::out    ||| output/write(default while writing)  |||      if there is previously content in the file,it erases that content and then starts writing
ios::app    ||| append                               |||      it starts writing data from the end of previous content
ios::ate    ||| update                               |||     
ios::txt    ||| text(default)                        |||     (considers meanings of \n,etc)
ios::binary ||| binary                               |||     (doesn't consider meanings of \n,etc)


#tellg()
*defined in istream class
*its prototype is
                streampos tellg();   (where,streampos class--->>>>stream position )
*returns the position of the current character in input stream

#tellp()
*defined in ostream class
*its prototype is 
                streampos tellp();
*returns the position of the current character in output stream

#seekg()
*defined in istream class
*its prototype is 
                ->istream& seekg(streampos pos); 
                e.g. fin.seekg(0);
                ->istream& seekg(streamoff off,ios_base::seekdir way); where, =>pos is position relative to beginning, =>off is offset value relative to the way parameter, =>way is the values either ios_base::beg,ios_base::cur or ios_base::end
                e.g. fin.seekg(2,ios_base::beg);

#seekp()
*defined in ostream class
*its prototype is 
                ->istream& seekg(streampos pos); 
                e.g. fin.seekg(0);
                ->istream& seekg(streamoff off,ios_base::seekdir way); where, =>pos is position relative to beginning, =>off is offset value relative to the way parameter, =>way is the values either ios_base::beg,ios_base::cur or ios_base::end
                e.g. fin.seekg(2,ios_base::beg);


*/

#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{//reading
    // ifstream fin;
    // fin.open("file1.txt");
    // int pos;
    // char ch;

    // pos=fin.tellg();
    // cout<<pos;//0

    // fin>>ch;
    // pos=fin.tellg();
    // cout<<"\n"<<pos;//1

    // fin>>ch;
    // fin>>ch;
    // fin>>ch;
    // fin>>ch;
    // pos=fin.tellg();
    // cout<<"\n"<<pos<<"\n"<<(char)fin.get();//this character is space which in index 5(position 6th)


/*//unexpected output
    // pos=fin.tellg();
    // cout<<pos;//0
    // cout<<(char)fin.get();//h
    // fin>>ch;
    // pos=fin.tellg();
    // cout<<"\n"<<pos;//1
    // cout<<(char)fin.get();//e

    // fin>>ch;
    // pos=fin.tellg();
    // cout<<"\n"<<pos;//2
    // cout<<(char)fin.get();//l


    // fin>>ch;
    // fin>>ch;
    // fin>>ch;
    // pos=fin.tellg();
    // cout<<"\n"<<pos;//5
    // cout<<(char)fin.get();//w
*/

//writing
    ofstream fout;
    fout.open("file1.txt",ios::app);//by default it is in write mdoe(i.e. ios::out) but in this mode ,all the data will be erased.
    //To use that data as it is, we open in append mode.
    int pos;
    char ch;

    pos=fout.tellp();
    cout<<pos;//0//while in append mode,appending data starts from EOF,but also its index is set as 0 instead of index after counting index of previous data

    fout<<"vivek";
    pos=fout.tellp();
    cout<<pos;//5


fout.close();
    getch();
    return 0;
}
