#include<stdio.h>
class Student{
public:
	char *name;
	int age;
	float score;
	void say()
	{

		printf("%s的年龄是%d,成绩是%f\n",name,age,score);
	}
};
int main2()
{
	Student stu1;
	stu1.name="小明";
	stu1.age=15;
	stu1.score=92.5f;
	stu1.say();
	
	return 0;
}