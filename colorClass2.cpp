//COMSC-210 | Lab 16 | Eric-Giulio Hedes
#include <iomanip>
#include <iostream>
using namespace std;

//Get the global size integer
const int SIZE = 25;

//Set up the Color class
class Color
{
    //The private values consist of RGB values
    private:
        int red, green, blue;
    //The public functions consist of getter, setter, and print functions
    public:
        //getter functions; these return the color values
        int getRed() { return red; }
        int getGreen() { return green; }
        int getBlue() { return blue; }
        //setter functions; these set the color values to a specific value
        void setRed(int val) { red = val; }
        void setGreen(int val) { green = val; }
        void setBlue(int val) { blue = val; }
        //print function
        void print();
};

//Start of main()
int main()
{
    //Generate a random seed number
    srand(time(0));
    //Set up the color array
    Color col[SIZE];

    //Use a ranged loop to initialize all of the color elements from the array
    for (int i = 0; i < SIZE; i++)
    {
        col[i].setRed(int(rand() % 255)); //Red
        col[i].setGreen(int(rand() % 255)); //Green
        col[i].setBlue(int(rand() % 255)); //Blue
    }

    //Use another ranged loop to print the colors out
    for (int j = 0; j < SIZE; j++)
        col[j].print();
}
//End of main()

//Set up the color print function
void Color::print()
{
    //Use a static integer for number counting
    static int num = 1;
    //Print out the color information
    cout << "Color Info #" << num << ": (" << getRed() << ", " << getGreen() << ", " << getBlue() << ")" << endl;
    //Increase the num value with each color print
    num++;
}