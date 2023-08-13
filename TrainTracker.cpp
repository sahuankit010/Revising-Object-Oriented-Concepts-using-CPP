//
// Created by Ankit Sahu on 5/29/23.
//
#include <iostream>

// Node structure for a train
struct TrainNode {  
    int trainNumber;
    TrainNode *next;

    TrainNode(int number) : trainNumber(number), next(nullptr) {}
};

// TrainTracker class to manage the linked list
class TrainTracker {
private:
    TrainNode *head;

public:
    TrainTracker() : head(nullptr) {}

    // Add a train to the linked list
    void addTrain(int trainNumber) {
        TrainNode *newNode = new TrainNode(trainNumber);

        if (head == nullptr) {
            head = newNode;
        } else {
            TrainNode *current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    // Display all trains in the linked list
    void displayTrains() {
        TrainNode *current = head;
        while (current != nullptr) {
            std::cout << "Train Number: " << current->trainNumber << std::endl;
            current = current->next;
        }
    }
};

int main() {
    TrainTracker tracker;
    tracker.addTrain(123);
    tracker.addTrain(456);
    tracker.addTrain(789);

    tracker.displayTrains();

    return 0;
}
