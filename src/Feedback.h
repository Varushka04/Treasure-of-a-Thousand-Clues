#pragma once
#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <string>
#include <iostream>

class Feedback {
private:
    std::string message; //The feedback
    int moraleBoost; //Give points for good decisions.

public:
    // Constructor
    Feedback(std::string msg = "", int boost = 0);

    // Operator overloader
    Feedback operator+(const Feedback& other) const; //Adds 2 messages together and the 

    // Display function
    void display() const;

    // Getters
    std::string getMessage() const;
    int getMoraleBoost() const;
};

#endif // FEEDBACK_H