#include "../header/Form.hpp"


	void Form::Signed(Bureaucrat target)
	{
		if (target.getGrade() < _canSign)
			_signature = true;
		else
		 	throw GradeTooLowException();
	}