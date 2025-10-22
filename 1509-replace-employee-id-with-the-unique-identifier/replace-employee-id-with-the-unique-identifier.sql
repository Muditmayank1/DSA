# Write your MySQL query statement below
SELECT eu.unique_id AS unique_id, e.name as name 
FROM Employees e left Join EmployeeUNI eu 
ON eu.id = e.id;