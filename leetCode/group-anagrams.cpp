vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // map to store groups of anagrams
    unordered_map<string, vector<string>> anagrams;

    // Iterate through each word in the input list of strings
    for (const auto& word : strs) {
        // Sort the characters of the word
        string sortedWord = word;
        sort(sortedWord.begin(), sortedWord.end());

        // If the sorted word is already in the map, append the original word to its list
        if (anagrams.find(sortedWord) != anagrams.end()) {
            anagrams[sortedWord].push_back(word);
        }
        // Otherwise, create a new entry in the map with the sorted word as the key
        else {
            anagrams[sortedWord] = { word };
        }
    }

    // Convert the map values into a vector of vectors
    vector<vector<string>> result;
    for (const auto& pair : anagrams) {
        result.push_back(pair.second);
    }

    return result;
}
