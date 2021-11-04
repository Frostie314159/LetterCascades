#include "Question.hpp"

std::size_t Question::ask(){
        std::cout << this->question << std::endl;
        while(true){
            std::cout << "You can answer with ";
            for(std::size_t i=0; i<this->answers.size(); ++i){
                if(this->answers.size() > 2){
                    if(i<answers.size()-2){
                        std::cout << this->answers.at(i) << ", ";
                    }else if(i==answers.size()-2){
                        std::cout << this->answers.at(i) << " or ";
                    }else{
                        std::cout << this->answers.at(i) << std::endl;
                    }
                }else{
                    if(i!= this->answers.size()-1){
                        std::cout << this->answers.at(i) << " or ";
                    }else{
                        std::cout << this->answers.at(i) << std::endl;
                    }
                }
            }
            std::string m_answer;
            std::cin >> m_answer;
            auto m_iterator = std::find(this->answers.begin(), this->answers.end(), m_answer);
            if(m_iterator == this->answers.end()){
                std::cout << "Invalid Answer!" << std::endl;
                continue;
            }else{
                return std::distance(this->answers.begin(), m_iterator);
            }
        }
    }