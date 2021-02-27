#include<iostream>
#include<string>

class HeartRates
{

	public:
		explicit HeartRates( std::string name)
			: fullname (name)
			 {

			}

		void setfullname (std::string name)
		{
			fullname = name;
		}
		std::string getfullname() const
		{
			return fullname;
		}
               
		
	private:
		std::string fullname;
};
