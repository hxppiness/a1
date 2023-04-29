#include <iostream>
#include <vector>
using namespace std;

class Card {
public:
	Card(string nums, string types) {
		this->nuns;
		this->types;
	}
	string getnum() {
		return nuns;
	};
	string gettype() {
		return types;
	};
	bool bigger(string nums, string types, Card card) {
		if (nums == card.getnum()) {
			if (nums == "hearts") {
				if (card.gettype() == "diamonds") {
					return true;
				}
				if (card.gettype() == "peaks") {
					return true;
				}
				if (card.gettype() == "clubs") {
					return false;
				}
			}
			if (nums == "diamonds") {
				if (card.gettype() == "hearts") {
					return false;
				}
				if (card.gettype() == "peaks") {
					return true;
				}
				if (card.gettype() == "clubs") {
					return true;
				}
			}
			if (nums == "peaks") {
				if (card.gettype() == "hearts") {
					return false;
				}
				if (card.gettype() == "diamonds") {
					return false;
				}
				if (card.gettype() == "clubs") {
					return true;
				}
			}
			if (nums == "clubs") {
				if (card.gettype() == "hearts") {
					return true;
				}
				if (card.gettype() == "diamonds") {
					return false;
				}
				if (card.gettype() == "clubs") {
					return false;
				}
			}
		}
		if (nums == "t") {
			if (card.getnum() == "6") {
				return false;
			}
			else return true;
		}
		if (nums == "j") {
			if (card.getnum() == "10") {
				return true;
			}
			else return false;
		}
		if (nums == "k") {
			if (card.getnum() == "t") {
				return false;
			}
			else return true;
		}
		if (nums == "q") {
			if (card.getnum() == "k" || card.getnum() == "t") {
				return false;
			}
			else return true;
		}
		if (nums == "2") {
			return false;
		}
		if (nums == "3") {
			if (nums == "2") {
				return false;
			}
			else return true;
		}

	};

private:
	string nuns;
	string types;
};


int main()
{

}#include <iostream>
#include <vector>
using namespace std;

class Card {
public:
	Card(string nums, string types) {
		this->nuns;
		this->types;
	}
	string getnum() {
		return nuns;
	};
	string gettype() {
		return types;
	};
	bool bigger(string nums, string types, Card card) {
		if (nums == card.getnum()) {
			if (nums == "hearts") {
				if (card.gettype() == "diamonds") {
					return true;
				}
				if (card.gettype() == "peaks") {
					return true;
				}
				if (card.gettype() == "clubs") {
					return false;
				}
			}
			if (nums == "diamonds") {
				if (card.gettype() == "hearts") {
					return false;
				}
				if (card.gettype() == "peaks") {
					return true;
				}
				if (card.gettype() == "clubs") {
					return true;
				}
			}
			if (nums == "peaks") {
				if (card.gettype() == "hearts") {
					return false;
				}
				if (card.gettype() == "diamonds") {
					return false;
				}
				if (card.gettype() == "clubs") {
					return true;
				}
			}
			if (nums == "clubs") {
				if (card.gettype() == "hearts") {
					return true;
				}
				if (card.gettype() == "diamonds") {
					return false;
				}
				if (card.gettype() == "clubs") {
					return false;
				}
			}
		}
		if (nums == "t") {
			if (card.getnum() == "6") {
				return false;
			}
			else return true;
		}
		if (nums == "j") {
			if (card.getnum() == "10") {
				return true;
			}
			else return false;
		}
		if (nums == "k") {
			if (card.getnum() == "t") {
				return false;
			}
			else return true;
		}
		if (nums == "q") {
			if (card.getnum() == "k" || card.getnum() == "t") {
				return false;
			}
			else return true;
		}
		if (nums == "2") {
			return false;
		}
		if (nums == "3") {
			if (nums == "2") {
				return false;
			}
			else return true;
		}

	};

private:
	string nuns;
	string types;
};


int main()
{

}