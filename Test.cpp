#include "doctest.h"
#include <stdexcept>
#include <float.h>
#include <type_traits>
#include "sources/Team.hpp"
using namespace ariel;
using namespace std;

Point p(2.3,5.4);
Point r(0,0);
Point z(-2,-1);
Point x(2,1);
Point e(-300,500);

TEST_CASE("Point verification test"){
    CHECK_EQ(p.getX(),Point(2.3,5.4).getX());               //check that was created properly
    CHECK_EQ(p.getY(),Point(2.3,5.4).getY());
    CHECK_FALSE((z.getX()==x.getX()));
    CHECK_NOTHROW(Point(2,5));
    CHECK_THROWS(Point(DBL_MAX+0.1,0));
    CHECK_THROWS(Point(0,DBL_MIN));
    CHECK_EQ(579.66753402274,e.distance(p));
    CHECK_EQ((z.distance(r)),(x.distance(r)));
    CHECK_GE(p.distance(r),x.distance(r));
    CHECK_LT((Point(-5,5).distance(r)),e.distance(r));
    CHECK_EQ(r.getX(),0);
    CHECK_EQ(r.getY(),0);
    CHECK_NOTHROW(z.getX());
    CHECK_NOTHROW(r.getY());
    CHECK_EQ(moveTowards(p,z,8).getX(),z.getX());
    CHECK_EQ(moveTowards(p,z,8).getY(),z.getY());    
    CHECK_THROWS_AS((moveTowards(e,x,-5)),invalid_argument);
}

TEST_CASE("Cowboy test"){
    Cowboy player1("Woodi",e);
    Cowboy player2("jessie",r);
    Cowboy player3("Jonny",x);
    CHECK_NOTHROW(Cowboy("dobi",Point(2,2)));
    CHECK_EQ(player1.getLocation().getX(),Cowboy("eddi",e).getLocation().getX());
    CHECK_EQ(player1.getLocation().getY(),Cowboy("eddi",e).getLocation().getY());
    for(int i=0; i<6; i++)
    {
        player3.shoot(&player2);
    }
    CHECK_THROWS(player3.shoot(&player2));
    CHECK_FALSE(player2.isAlive());
    CHECK((player1.getNumOfBullets()==6));
}

TEST_CASE("Ninja players"){
    YoungNinja player1("Michaelangelo",r);
    TrainedNinja player2("fruit ninja",x);
    OldNinja player3("fernando",e);
    CHECK_NOTHROW(player1.getLocation());
    CHECK(player3.isAlive());
    player2.slash(&player3);
    player2.slash(&player3);
    CHECK(player2.isAlive());
    CHECK_THROWS(player2.slash(&player2));               //player cannot hit himself
    player2.slash(&player1);
    player2.slash(&player1);
    player2.slash(&player1);
    player2.slash(&player1);
    CHECK_FALSE(player1.isAlive());
}

TEST_CASE("Team battles"){
    YoungNinja player1("eddi",e);
    Cowboy player2("shoshi",x);
    OldNinja player3("eric",r);
    Team A(&player1);
    Team2 B(&player2);
    SmartTeam C(&player3);
    CHECK_NOTHROW(Team d(&player2));
    CHECK_NOTHROW(B.add(&player3));
    CHECK(B.stillAlive());
    CHECK_NOTHROW(C.attack(&A));
    CHECK(C.stillAlive());
    YoungNinja player4("Cardi",e);
    C.add(&player4);
    TrainedNinja player5("Bruno",x);
    C.add(&player5);
    OldNinja player6("Tupac",r);
    C.add(&player6);
    YoungNinja player7("Iggi",e);
    C.add(&player7);
    TrainedNinja player8("Christina",x);
    C.add(&player8);
    OldNinja player9("Beyonce",r);
    C.add(&player9);
    YoungNinja player10("Bon Jovi",e);
    C.add(&player10);
    Cowboy player11("Noa kirel",x);
    C.add(&player11);
    OldNinja player12("elli",r);
    C.add(&player12);
    YoungNinja player13("avi",e);
    C.add(&player13);
    OldNinja player14("miki",x);
    CHECK_THROWS(C.add(&player14));
    TrainedNinja player15("Yardena",r);
    CHECK_NOTHROW(B.add(&player11));
    CHECK_NOTHROW(B.print());
}