#include "CarSale.h"

using namespace std; // ew

CarSale::CarSale(const string& model, double base_price) : model_(model), base_price_(base_price) {}

string CarSale::model() const
{
    return model_;
}

double CarSale::base_price() const
{
    return base_price_;
}

void CarSale::add(const accessory& a)
{
    acc_.push_back(a);
}

int CarSale::free_accessories() const
{
    int n = 0;
    for (accessory a : acc_)
    {
        if (a.tax == 0) n++;
    }

    return n;
}

double CarSale::final_price() const
{
    int total_tax = 0;
    for (accessory a : acc_)
    {
        total_tax += a.tax;
    }

    return base_price_ + base_price_ * (total_tax / 100.0);
}

// Tests
int main(void)
{
    //Test 1 (passed)
    CarSale cs("Renault 4L", 5000);
    print(cs);
    cout << '\n';

    //Test 2 (passed)
    CarSale cs1("Renault 4L", 5000);
    cs1.add({"4x4 Traction", 10});
    print(cs1);
    cout << '\n';

    //Test 3 (passed)
    CarSale cs2("Renault 4L", 5000);
    cs2.add({"Renault Logo Sticker", 0});
    cs2.add({"Yellow Paint", 0});
    cs2.add({"4x4 Traction", 10});
    print(cs2);
    cout << '\n';

    //Test 4 (passed)
    CarSale cs3("Tesla X-2039", 1000000.42);
    cs3.add({"Flying Module", 50});
    cs3.add({"Lunar Landing Module", 10});
    cs3.add({"Elon Musk's Portrait in gold pain", 100});
    print(cs3);
    cout << '\n';

    //Test 5 (passed)
    CarSale cs4("Zuckerborg Meta-3", 42424242.42);
    cs4.add({"Metaverse immersion plugin", 50});
    cs4.add({"Meta-something wheels", 10});
    cs4.add({"Fakebook plugin", 0});
    print(cs4);
    cout << '\n';
}