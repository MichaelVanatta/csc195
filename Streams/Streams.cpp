#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Reasons to pass by reference
// For classes like ostream/istream, cannot create copies, so pass by reference
// Ensure manipulation of variables inside the main method
// Avoid creating copies for large datatypes (resources/time efficient)
// Rule of thumb: Use pass-by-reference whenever possible
// Exception: Cannot point to nothing, so if parameter needs to point to a null value, then use a pointer instead
void Write(const string& text, ostream& ostream)
{
    ostream << text << endl;
}

//overloading methods - same name, different parameters
void Write(const vector<int> numbers, ofstream& ostream)
{
    for (int n : numbers)
    {
        ostream << n << endl;
    }
}

void Read(string& text, ifstream& istream)
{
    istream >> text;
}

void Read(vector<int>& numbers, ifstream& istream)
{
    while (!istream.eof())
    {
        int n;
        istream >> n;

        if (!istream.fail())
        {
            numbers.push_back(n);
        }
    }
}

int main()
{
    string text = "Hello World\n";
    cout << text;

    //cin >> text;
    getline(cin,text);
    //cout << text;

    Write(text, cout);

    //output to file
    ofstream output("data.txt");    //create an open file to stream data
    //output << text;
    Write(text, output);
    int i = 5;
    output << i << endl;
    output.close();

    text = "";
    //input from file
    ifstream input("data.txt");
    //getline(input, text);
    Read(text, input);
    input >> i;
    //input >> text;
    input.close();

    cout << "Reading from file" << endl;
    cout << text << endl;
    cout << i << endl;

    vector<int> numbers = { 1,2,3,4 };

    //store vector to file
    output.open("numbers.txt");
    Write(numbers, output);
    output.close();

    numbers.clear();
    //read vector from file
    input.open("numbers.txt");
    Read(numbers, input);
    input.close();

    for (int n : numbers)
    {
        cout << n << endl;
    }


}