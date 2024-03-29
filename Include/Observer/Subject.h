//
// Created by Francesco on 18/07/2022.
//

#ifndef GAME_SUBJECT_H
#define GAME_SUBJECT_H

#include "Observer.h"


class Subject {
public:
    virtual void addObserver(std::shared_ptr<Observer> observer) {};
    virtual void removeObserver(std::shared_ptr<Observer> observer) {};
    virtual void notify() = 0;

protected:
    virtual ~Subject() {};

};

#endif //GAME_SUBJECT_H
