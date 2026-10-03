//COMSC-210 | Lab 16 | Eric-Giulio Hedes
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;

//Set up the Color class
class Color
{
    //The private values consist of RGB values
    private:
        int red, green, blue;
    //The public functions consist of getter, setter, and print functions
    public:
        //constructors
        Color() { red = 0; green = 0; blue = 0; } //empty constructor
        Color(int r) { red = r; green = 0; blue = 0; } //partial constructor #1
        Color(int r, int g) { red = r; green = g; blue = 0; } //partial constructor #2
        Color(int r, int g, int b) { red = r; green = g; blue = b; } //full constructor
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
    vector<Color> col;

    //Use a ranged loop to initialize all of the color elements from the array
    //First, do a empty constructor
    col.push_back(Color());
    //Then do the partial constructors
    for (int i = 0; i < 10; i++) //First partial constructor, with one parameter
    {
        Color temp = Color(int(rand() % 255));
        col.push_back(temp);
    }
    for (int i = 0; i < 10; i++) //Second partial constructor, with two parameters
    {
        Color temp = Color(int(rand() % 255), int(rand() % 255));
        col.push_back(temp);
    }
    //Finally do the full constructors, with all three parameters
    for (int i = 0; i < 10; i++)
    {
        Color temp = Color(int(rand() % 255), int(rand() % 255), int(rand() % 255));
        col.push_back(temp);
    }

    //Use another ranged loop to print the colors out
    for (int j = 0; j < col.size(); j++)
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