#pragma once

namespace breakeBlock
{
	enum KEY
	{
		Y = 89, N = 78, J = 74, K, L, I, ONE = 49, TWO = 50, THREE = 51, SPACE = 32, DEFAULT = 0
	};

	class Input
	{
	private:
		static char inkey;
		static KEY lastKey;
		Input();
		~Input();
	public:
		static KEY KeyInput();
		static KEY GetLastKey();
	};
}