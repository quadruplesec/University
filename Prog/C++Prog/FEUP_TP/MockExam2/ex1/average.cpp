#include <fstream>
#include <string>
#include "show_file.h"
#include <iomanip>

using namespace std;

void average(const string& input_fname, const string& output_fname) 
{
    ifstream input(input_fname);
    ofstream output(output_fname);
    int total_lines = 0;

    while(!input.eof())
    {
        string line;
        double x, average{0}, total{0};
        getline(input, line);
        istringstream iss(line);

        while (iss >> x)
        {
            average += x;
            total++;
        }

        average = average / total;
        output << fixed << setprecision(3) << average << '\n';
        total_lines++;
    }

    output << "lines=" << total_lines;
}
