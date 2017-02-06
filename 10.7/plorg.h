class Plorg
{
	private:
		char m_name [19];
		int m_ratio;
	public:
		Plorg();
		Plorg(const char * name, int ratio = 50);
		void changeRatio(int ratio);
		void showPlorg() const;
};