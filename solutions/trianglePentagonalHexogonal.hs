-- Find the next triangle number that is also pentagonal and hexagonal
-- Author: sbafsari
-- Date: 25/12/2024
-- Question Code: 45

findNextTriPenHex :: Int
findNextTriPenHex = head [x | x <- triangularNumbers, isPentagonal x, isHexagonal x, x > 40755]

-- Generate triangular numbers
triangularNumbers :: [Int]
triangularNumbers = [n * (n + 1) `div` 2 | n <- [1..]]

-- Check if a number is pentagonal
isPentagonal :: Int -> Bool
isPentagonal x = let n = (1 + sqrt (1 + 24 * fromIntegral x)) / 6 in n == fromIntegral (floor n)

-- Check if a number is hexagonal
isHexagonal :: Int -> Bool
isHexagonal x = let n = (1 + sqrt (1 + 8 * fromIntegral x)) / 4 in n == fromIntegral (floor n)
