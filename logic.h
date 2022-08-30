class Logic{
	char* name;
	public:
	Logic();
	Logic(const char*);
	void setName();
	bool operator<(const Logic&);
	bool operator>(const Logic&);
	bool operator==(const Logic&);
	~Logic();
};
