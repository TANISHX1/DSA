# Write your MySQL query statement below
SELECT `name` AS `Employee` FROM `Employee` AS `t`
WHERE `salary` > (select salary from employee where `t`.`managerId` = `id` ) 