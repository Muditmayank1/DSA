# Write your MySQL query statement below
SELECT w.id FROM Weather w, Weather w1 where w.temperature>w1.temperature and DATEDIFF(w.recordDate,w1.recordDate)=1;