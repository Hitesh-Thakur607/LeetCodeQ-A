# Write your MySQL query statement below
select E.name as Employee from Employee as E join Employee as ea 
on E.managerId=ea.id and E.salary>ea.salary;  