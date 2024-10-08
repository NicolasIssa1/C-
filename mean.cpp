#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Step 3: Function to read data from the file into the vector
void read_data(istream& input, vector<float>& data)
{
    float value;
    //reads a single numeric value into the variable
    //named value. 
    while (input >> value) {
        //data is the vector of float
        //values that will receive data read from
        //the input stream.
        data.push_back(value);
    }
}

// Step 5: Function to calculate the mean of the data
float mean_value(const vector<float>& data) {
    float sum = 0;
    for (float num : data) {
        sum += num;
    }
    return sum / data.size();
}

int main(int argc, char* argv[])
{
  if (argc != 2) {
    cerr << "Usage: ./mean <filename>" << endl;
    return 1;
}

// Step 4: Open the file for reading
ifstream infile(argv[1]);
if (not infile) {
  cerr << "Error: cannot access " << argv[1] << endl;
  return 2;
}

// Step 5: Create a vector to store the data
  vector<float> data;

// Step 6: Call the read_data function
read_data(infile, data);

// Step 7: Output how many values were read
cout << data.size() << " values read from file" << endl;

// Step 8: Calculate and display the mean value
    if (!data.empty()) {
        float mean = mean_value(data);
        cout << "Mean value = " << mean << endl;
    } else {
        cout << "No data in file." << endl;
    }

  return 0;
}