#include "Node.hpp"

void Node::handle(){
        std::cout << this->text << std::endl;
        if(this->name != "end"){
            std::size_t m_nodeIndex = this->question.ask();
            std::cout << std::endl;
            std::async(&Node::handle, this->followingNodes.at(m_nodeIndex));
        }
}