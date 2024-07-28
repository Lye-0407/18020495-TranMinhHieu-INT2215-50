class Student
{
    public:
    vector<int> scores;

    void input()
    {
        scores.resize(5);
        for (int i = 0; i < 5; i++)
            cin >> scores[i];
    }

    int calculateTotalScore()
    {
        int total = 0;
        for (int i = 0; i < 5; ++i)
            total += scores[i];
        return total;
    }
};