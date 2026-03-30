select user_id, MAX(time_stamp) AS last_stamp
from Logins
WHERE YEAR(time_stamp) = 2020
group by user_id;