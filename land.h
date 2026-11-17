class Land{
    public:
        Land(int squares =0, int occupied =0);
        void setTotalSquares(int totalSquares);
        int getTotalSquares() const;
        void setOccupSquares(int occupSquares);
        int getOccupSquares() const;

    private:
        int totalSquares;
        int occupSquares;
};
