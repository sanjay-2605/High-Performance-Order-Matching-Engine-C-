#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include <queue>
#include "Order.h"

struct BuyComparator {
    bool operator()(Order* a, Order* b) {
        if (a->price == b->price)
            return a->timestamp > b->timestamp;
        return a->price < b->price;
    }
};

struct SellComparator {
    bool operator()(Order* a, Order* b) {
        if (a->price == b->price)
            return a->timestamp > b->timestamp;
        return a->price > b->price;
    }
};

class OrderBook {
public:
    std::priority_queue<Order*, std::vector<Order*>, BuyComparator> buyOrders;
    std::priority_queue<Order*, std::vector<Order*>, SellComparator> sellOrders;
};

#endif
