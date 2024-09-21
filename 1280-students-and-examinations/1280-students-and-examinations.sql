# Write your MySQL query statement below


select std.student_id, std.student_name, sub.subject_name, count(e.subject_name) as attended_exams

from students as std
cross join subjects as sub
left join examinations as e on std.student_id = e.student_id and e.subject_name = sub.subject_name

group by std.student_id, sub.subject_name, std.student_name
order by std.student_id, sub.subject_name;
