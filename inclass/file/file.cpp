#include <iostream>
#include <strstream>
#include <fstream>
#include <string>

class File{
    private:
        long long word_count;
        long long char_count;
    public:
        File():word_count(0),char_count(0){}
        void processfile(std::string input){
            std::ifstream file(input);
            std::string word;

            while(file >> word){
                    word_count++;
                    char_count += word.size();
                }
            }

        long long getWordCount()const {return word_count;}
        long long getchar_count()const {return char_count;}
        double getAvg(){return static_cast<double>(word_count)/char_count;}
        
};

int main(){
    std::string input;
    std::cin >> input;
    
    File txt;
    txt.processfile(input);

}