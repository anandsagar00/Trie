// Article : https://www.javatpoint.com/trie-data-structure

// Video : https://youtu.be/dBGUmUQhjaM?list=PLgUwDviBIf0pcIDCZnxhv0LkHf5KzG9zp

/*
The word "Trie" is an excerpt from the word "retrieval".
Trie is a sorted tree-based data-structure that stores the set of strings.
It has the number of pointers equal to the number of characters of the alphabet in each node.
It can search a word in the dictionary with the help of the word's prefix.
For example, if we assume that all strings are formed from the letters 'a' to 'z' in the English alphabet,
each trie node can have a maximum of 26 points.

Trie is also known as the digital tree or prefix tree. The position of a node in the Trie determines the key with which that node is connected.

Properties of the Trie for a set of the string:
The root node of the trie always represents the null node.
Each child of nodes is sorted alphabetically.
Each node can have a maximum of 26 children (A to Z).
Each node (except the root) can store one letter of the alphabet.
*/

#include<iostream>
#include<vector>

using namespace std;

