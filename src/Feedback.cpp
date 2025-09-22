#include "Feedback.h"

// Constructor
Feedback::Feedback(std::string msg, int boost)
    : message(msg), moraleBoost(boost) {
}

// Overload + operator to combine two Feedbacks
Feedback Feedback::operator+(const Feedback& other) const {
    return Feedback(
        message + " " + other.message,
        moraleBoost + other.moraleBoost
    );
}

// Display the message and morale boost //Change from cout to gui
void Feedback::display() const {
    std::cout << message << " (Morale +" << moraleBoost << ")\n";
}

// Getter for message
std::string Feedback::getMessage() const {
    return message;
}

// Getter for moraleBoost
int Feedback::getMoraleBoost() const {
    return moraleBoost;
}