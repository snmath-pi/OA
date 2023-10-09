// The second question consisted of three parts:

// Run time of the first question
// Is there a better solution?
// When will you use naive solution and when will you use optimized solution?

if the size of areacode array is t and size of phone numbers array is s
average length of each areacode is m average length of each phone number is n
Then brute force is O(m*n*t*s)
Using trie is O(m*n*s) ideally build Tire should move out of solve function and keep in heap memory and we can save space to keep areacode array as well if it's a very large array.
