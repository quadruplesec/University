#ifndef RESALEPRODUCT_H
#define RESALEPRODUCT_H

#include "Product.h"

class ResaleProduct : public Product
{
    public:
        ResaleProduct(int id, float price, int profit_margin);
        int get_profit_margin() const;
        void set_profit_margin(int margin);
        float get_sell_price() const override;
                
    private:
        int profit_margin_;
};

ResaleProduct::ResaleProduct(int id, float price, int profit_margin) :
    Product(id, price), profit_margin_(profit_margin) {}

int ResaleProduct::get_profit_margin() const
{
    return profit_margin_;
}

void ResaleProduct::set_profit_margin(int margin)
{
    profit_margin_ = margin;
}

float ResaleProduct::get_sell_price() const
{
    return price_ * (100 + profit_margin_) / 100.0;
}

#endif