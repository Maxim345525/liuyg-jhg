#include<iostream>
#include<fstream>
using namespace std;
using std::fstream;
using std::ostream;
using std::istream;
struct File
{
private:
	string path;
	fstream file;
	ios_base::open_mode open_mode;
public:
	void setPath(string path) { this->path = path; }
	void setOpenMode(ios_base::open_mode open_mode) { this->open_mode = open_mode; }
	ios_base::open_mode getOpenMode() { return open_mode; }
	void getPath() { return path; }
	File()
	{
		setPath("text.txt");
		setOpenMode(ios::out);
	}
	File(string path) : File()
	{
		setPath(path);
	}
	File(string path, ios_base::open_mode open_mode) : File(path)
	{
		setOpenMode(open_mode);
	}
	~File()
	{
		path.clear();
		file.close();
		open_mode = 0;
	}
	bool Save() {
		if (open.mode != ios::out)
		{
			open_mode = ios::out;
		}
		file.open(path, open_mode);
		if (file.is_open())
		{
			file << text << endl;
			this->CloseFile();

		}
	}
	bool Load() {
	}
	bool Append() {}
	bool CreateFile() {
		if (open_mode != ios::out)
		{
			open_mode = ios::out;
		}
		file.open(path, open_mode);
		return(file.is_open.open()) ? true : false;
	}
	bool Close() {}
};

int main()
{
	string path = "text.txt";
	fstream file;
	std::ios_base::open_mode openMode = ios::in;
	file.open(path, ios::in);
	if (file.is_open())
	{
		cout << "File was open" << endl;
		file.close();
	}
	else
	{
		cout << "File not open" << endl;
	}

	return 0;
}