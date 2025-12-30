# Write your MySQL query statement below
SELECT eu.unique_id as unique_id, name from Employees e Left Join EmployeeUNI eu
ON e.id = eu.id