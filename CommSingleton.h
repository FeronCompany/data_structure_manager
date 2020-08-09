

#ifndef COMMSINGLETON_H
#define COMMSINGLETON_H

template<typename T>
class CommSingleton
{
public:
	static T& instance()
	{
		static T inst;
		return inst;
	}

private:
	CommSingleton() {}
	CommSingleton(CommSingleton& comm) {}
};

#endif // COMMSINGLETON_H
