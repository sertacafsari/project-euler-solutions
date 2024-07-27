import Data.List as List

-- Finds the number of coprime permutations of a list
-- Author: sbafsari
-- Date: 16/06/2024
-- Question Code: 886

-- Function to check if two numbers are coprime
isCoprime :: Integer -> Integer -> Bool
isCoprime a b = gcd a b == 1