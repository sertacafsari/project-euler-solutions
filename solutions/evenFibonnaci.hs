-- Finds the sum of all even fibonnaci numbers below 4 million
-- Author: sbafsari
-- Date: 16/06/2024
-- Question Code: 2
evenFibSum :: Integer
evenFibSum = sum [x | x <- takeWhile (< 4000000) fibonnaciNums, even x]
    where
        fibonnaciNums = 0 : 1 : zipWith (+) fibonnaciNums (tail fibonnaciNums)
