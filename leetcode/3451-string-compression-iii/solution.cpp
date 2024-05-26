class Solution {
public:
    string compressedString(string word) {
       string comp; // Initialize an empty string to store the compressed string

    int i = 0;
    while (i < word.size()) {
        char c = word[i]; // Get the current character of the word
        int length = 1; // Initialize the length of the current prefix

        // Find the maximum length prefix of word consisting of a single character repeating at most 9 times
        while (i + length < word.size() && length < 9 && word[i + length] == c) {
            length++;
        }

        // Append the length of the prefix followed by the character to comp
        comp.push_back('0' + length); // Convert length to char and append
        comp.push_back(c);

        // Move to the next character after the processed prefix
        i += length;
    }

    return comp;  
    }
};
