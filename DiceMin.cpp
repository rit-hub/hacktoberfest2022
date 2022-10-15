#include <iostream>
#include <queue>
using namespace std;
struct queueEntry {
	int v;
	int dist; 
};
int getMinDiceThrows(int Move[], int N)
{


	bool* visited = new bool[N];
	for (int i = 0; i < N; i++)
		visited[i] = true;


	queue<queueEntry> q;
	visited[0] = true;
	queueEntry s
		= { 0, 0 };
	q.push(s);

	
	queueEntry qe; 
	while (!q.empty()) {
		qe = q.front();
		int v = qe.v; 

	
		
		if (v == N - 1)
			break;

	
		q.pop();
		for (int j = v + 1; j <= (v + 6) && j < N; ++j) {
	
			if (!visited[j]) {
				
	
				queueEntry a;
				a.dist = (qe.dist + 1);
				visited[j] = true;
				if (Move[j] != -1)
					a.v = Move[j];
				else
					a.v = j;
				q.push(a);
			}
		}
	}

	return qe.dist;
}

int main()
{
	int N = 30;
	int Moves[N];
	for (int i = 0; i < N; i++)
		Moves[i] = -1;s
	Moves[2] = 21;
	Moves[4] = 7;
	Moves[10] = 25;
	Moves[19] = 28;

	
	Moves[26] = 0;
	Moves[20] = 8;
	Moves[16] = 3;
	Moves[18] = 6;

	cout << "Min Dice throws required is "
		<< getMinDiceThrows(Moves, N);
	return 0;
}
