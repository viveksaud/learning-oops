#include<fstream>//including the class for both writing and reading to a file i.e. to use the class ofstream and ifstream to make their object for creating channel between program and file to pass data.
#include<iostream>//including the class for both writing on the screen and reading from the keyboard i.e.to use the object cout and cin
#include<conio.h>
using namespace std;

int main()
{
    ofstream fout;//channel created i.e. path created i.e stream created
    getch();//program will wait till we hit ENTER key
    fout.open("file1.txt");//if the file exist already then it will be opened and if doesn't then first file will be created then opened  (file opening means opening in RAM, not in hard disk )
    getch();
    fout<<"hello";// now, data is passed to the file i.e. data is written in file.It is still in RAM, so still its space will be zero byte in hard disk
    getch();
    fout.close();//cout was associated with screen while fout is associated with file//now,file is closed i.e. removed from RAM and placed in HDD.Now we can see its size is changed from 0 byte.
    getch();
    return 0;

}