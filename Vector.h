#ifndef VECTOR_H
#define VECTOR_H
class Vector{
	private:
		int index;
		Vector ** Planet = new Vector[];
	public:
		Vector();
		~Vector();
		void inser(int index, Planet * p);
		Planet* read(int index);
		bool remove(int index);
		unsigned size();
}
#endif
