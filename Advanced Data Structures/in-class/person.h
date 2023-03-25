class person
{
	public:
		person();
		~person();
		
		std::string getName();
		void setName(std::string name);
		
	private:
		std::string name_;
		
}