#include <iostream>
using namespace std;

namespace ariel{

    class Point{
        double x;
        double y;

        public:
            Point(double x1, double y1);
            double distance(const Point& other) const;
            void print();
            Point moveTowards(Point& source, Point& dest, double dist);
    };

    class Character{
        Point location_;
        int hitPoints_;
        string name_;
        void hit(int hits);
        double distance(const Character& other) const;

        public:
           string getName() const;
           Point getLocation() const;
           virtual string print();
           bool isAlive() const;
    };

    class Cowboy : public Character{
        int Bullets;
        bool hasBullets();
        void reload();       
        void shoot(Character* enemy);
        public:
           string print() override;
    };

    class Ninja : public Character{
        const int speed;
        void move(Character* enemy);
        void slash(Character* enemy);
    };

    class YoungNinja : public Ninja{
        public:     
            YoungNinja();
    };

    class TrainedNinja : public Ninja{
        public:     
            TrainedNinja();
    };

    class OldNinja : public Ninja{
        public:     
            OldNinja();
    };
}