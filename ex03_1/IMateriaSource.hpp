class IMateriaSource
{
	public:
		virtual ~ImateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(const std::string& type) = 0;
}
