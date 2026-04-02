#ifndef ORDER_H
#define ORDER_H

#include <string>

enum OrderType { BUY, SELL };

class Order {
public:
    int orderId;
    OrderType type;
    double price;
    int quantity;
    long timestamp;

    Order(int id, OrderType t, double p, int q, long ts)
        : orderId(id), type(t), price(p), quantity(q), timestamp(ts) {}
};

#endif
