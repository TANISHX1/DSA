# Write your MySQL query statement below
SELECT `name` AS `Customers` FROM Customers 
LEFT JOIN `Orders`
ON  `Customers`.`id` = `Orders`.`customerId` 
WHERE `Orders`.`CustomerId` IS NULL

# Write your MySQL query statement below
-- SELECT c.name AS Customers FROM Customers c LEFT JOIN orders o ON c.id=o.customeriD WHERE O.customerID is NULL;
