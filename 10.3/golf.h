#ifndef GOLF_H_
#define GOLF_H_
class Golf
{
	private:
		static const int Len = 40;
		char m_fullname [Len];
		int m_handicap;
	public:
		Golf() {m_handicap = 0; m_fullname[0] = '\0';}
		Golf(const char * fullname, int handicap = 0);
		int setgolf();
		void handicap(int hc);
		void showgolf();
		//~Golf();
	
};

#endif