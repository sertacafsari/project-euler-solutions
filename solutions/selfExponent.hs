-- Find the last ten digits of the series, 1^1 + 2^2 + 3^3 + ... + 1000^1000
-- Author: sbafsari
-- Date: 25/12/2024
-- Question Code: 48

selfExpoLastTen :: Integer
selfExpoLastTen = lastTenDigits $ sum [x^x | x <- [1..1000]]

selfExpo:: Integer
selfExpo = sum [x | x <- [1..1000], x == x^x]

lastTenDigits :: Integer -> Integer
lastTenDigits n = n `mod` 10^10