#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

struct Question{
    std::string question;
    std::vector<std::string> answers;

    std::size_t ask();
};