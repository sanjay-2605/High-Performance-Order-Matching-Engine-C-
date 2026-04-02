# High Performance Order Matching Engine (C++)

This project implements a high-performance stock exchange order matching engine
that matches buy and sell orders using price-time priority.

## Features
- Buy and Sell Limit Orders
- Order Book Management
- Price-Time Priority Matching
- Trade Execution
- Trade History
- Order Cancellation (optional)
- Performance Optimization

## Technologies Used
- C++
- Data Structures (Priority Queue, Hash Map)
- Algorithms
- Object Oriented Programming

## Matching Logic
Orders are matched using price-time priority:
- Highest buy price matched first
- Lowest sell price matched first
- Earlier orders get priority at same price

## How to Run
g++ main.cpp -o engine
./engine
