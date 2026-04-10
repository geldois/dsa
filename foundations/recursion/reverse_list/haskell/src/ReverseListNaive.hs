-- Implement a naive-recursive reverse list

module ReverseListNaive where


reverseList :: [a] -> [a]
reverseList [] = []
reverseList (x:xs) = reverseList xs ++ [x]
