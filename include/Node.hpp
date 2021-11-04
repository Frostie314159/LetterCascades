#pragma once

#include <iostream>
#include <vector>
#include <future>

#include "Question.hpp"

struct Node{
    std::string name, text;
    Question question;
    std::vector<Node> followingNodes;

    void handle();
};