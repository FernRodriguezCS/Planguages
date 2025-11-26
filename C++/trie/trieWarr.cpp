// this program implements a trie with an array of pointers acting as the alphabet
#include <iostream>
#include <string>
#include <cctype> // for islower && isalnum

bool isLowerCaseAlpha(const std::string &word)
{
    for (char c : word)
    {
        if (c < 'a' || c > 'z')
            return false;
    }
    return true;
}

class TrieNode
{
public:
    TrieNode *trie[26] = {nullptr};
    bool endofWord = false;
};

class Trie
{
public:
    TrieNode *root = new TrieNode();
    bool insert(const std::string &word)
    {
        if (!isLowerCaseAlpha(word))
        {
            std::cerr << word << " is not lowercase and is not a proper word" << '\n';
            return false;
        }

        TrieNode *current = root;
        for (int i = 0; i < word.size(); i++)
        {
            int index = word[i] - 'a'; // converts char to its corresponding position in alphabet
            if (current->trie[index] == nullptr)
            {
                // node DNE so make it and traverse to it char by char
                current->trie[index] = new TrieNode; // current needs to point to new trienode or next character at index
                current = current->trie[index];      // current is now equal t the new node we just made
            }
            else
            {
                // child already exists traverse to it and then continue per char
                current = current->trie[index];
            }
        }
        // when the loop is over we have reached the end of the inserted word
        current->endofWord = true;
        return true;
    }

    bool exists(const std::string &word)
    {
        if (!isLowerCaseAlpha(word))
        {
            std::cerr << word << " is improper for this search\n";
        }

        TrieNode *current = root;
        for (int i = 0; i < word.size(); i++)
        {
            int index = word[i] - 'a';
            if (current->trie[index] == nullptr) // char DNE
            {
                return false;
            }
            current = current->trie[index];
        }
        return current->endofWord;
    }

    bool startsWith(const std::string & word)
    {
        if(!isLowerCaseAlpha(word))
        {
            std::cerr << word << " Not proper for this program try again\n";
            return false;
        }
        
        TrieNode* current = root;
        for(int i = 0; i < word.size();i++)
        {
            int index = word[i] - 'a';
            if(current->trie[index] == nullptr) return false;
            current = current->trie[index];
        }
        return true;
    }
};

int main(void)
{
    Trie t;

    t.insert("code");
    t.insert("coder");
    t.insert("coding");
    t.insert("two");
    t.insert("tea");
    t.insert("ten");

    std::cout << std::boolalpha;

    std::cout << "exists(\"code\"): "   << t.exists("code")   << "\n"; // true
    std::cout << "exists(\"coder\"): "  << t.exists("coder")  << "\n"; // true
    std::cout << "exists(\"cod\"): "    << t.exists("cod")    << "\n"; // false
    std::cout << "exists(\"coding\"): " << t.exists("coding") << "\n"; // true
    std::cout << "exists(\"co\"): "     << t.exists("co")     << "\n"; // false
    std::cout << "exists(\"tea\"): "    << t.exists("tea")    << "\n"; // true
    std::cout << "exists(\"te\"): "     << t.exists("te")     << "\n"; // false

    std::cout << "startsWith(\"co\"): " << t.startsWith("co") << "\n"; // true
    std::cout << "startsWith(\"cod\"): "<< t.startsWith("cod")<< "\n"; // true
    std::cout << "startsWith(\"coda\"): "<< t.startsWith("coda")<< "\n"; // false
    std::cout << "startsWith(\"t\"): "  << t.startsWith("t")  << "\n"; // true
    std::cout << "startsWith(\"ta\"): " << t.startsWith("ta") << "\n"; // false

    return 0;
}