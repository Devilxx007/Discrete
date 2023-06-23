#include <iostream>

using namespace std;

class Relation
{
public:
    Relation(int n)
    {
        this->n = n;
        relation = new int *[n];
        for (int i = 0; i < n; i++)
        {
            relation[i] = new int[n];
            for (int j = 0; j < n; j++)
            {
                relation[i][j] = 0;
            }
        }
    }

    void add(int i, int j)
    {
        relation[i][j] = 1;
    }

    bool is_symmetric()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (relation[i][j] != relation[j][i])
                {
                    return false;
                }
            }
        }
        return true;
    }

    bool is_reflexive()
    {
        for (int i = 0; i < n; i++)
        {
            if (relation[i][i] == 0)
            {
                return false;
            }
        }
        return true;
    }

    bool is_transitive()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (relation[i][j] == 1 && relation[j][k] == 1)
                    {
                        if (relation[i][k] != 1)
                        {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }

private:
    int n;
    int **relation;
};

int main()
{
    Relation r(3);
    r.add(0, 1);
    r.add(1, 2);
    r.add(2, 0);

    // cout << "Is the relation symmetric? " << r.is_symmetric() << endl;
    if (r.is_reflexive() and r.is_symmetric() and r.is_transitive())
    {
        cout << "this equivalence relation" << endl;
    }
    else if (r.is_reflexive() and r.is_transitive())
    {
        cout << "this is partial ordered relation" << endl;
    }
    else
    {
        cout << "this relation is neither equivalance nor partial ordered" << endl;
    }
}