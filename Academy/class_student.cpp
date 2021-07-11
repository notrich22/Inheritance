#include"Header.h"
class Student :public Human
{
	string specialty;
	string group;
	double rating;
public:
	const string& get_specialty()const
	{
		return specialty;
	}
	const string& get_group()const
	{
		return group;
	}
	double get_rating()const
	{
		return rating;
	}
	void set_specialty(const string& specialty)
	{
		this->specialty = specialty;
	}
	void set_group(const string& group)
	{
		this->group = group;
	}
	void set_rating(double rating)
	{
		this->rating = rating;
	}

	//				Constructors:
	Student
	(
		const string& last_name, const string& first_name, unsigned int age,
		const string& specialty, const string& group, double rating
	) :Human(last_name, first_name, age)
	{
		set_specialty(specialty);
		set_group(group);
		set_rating(rating);
		cout << "SConstructor:\t" << this << endl;
	}
	~Student()
	{
		cout << "SDestructor:\t" << this << endl;
	}

	//				Methods:
	void print()
	{
		Human::print();
		cout << "�������������: " << specialty << ", ������: " << group << ", ������������: " << rating << endl;
	}
};

ostream& operator<<(ostream& os, const Student& obj)
{
	os << (Human&)obj << " ";
	os << "�������������: " << obj.get_specialty() << ", ������: " << obj.get_group() << ", ������������: " << obj.get_rating();
	return os;
}