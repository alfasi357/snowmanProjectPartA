#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;
#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}


TEST_CASE("Good snowman code") {
   //defualt
    CHECK(nospaces(snowman(11111111)) == nospaces(" _===_\n (.,.)\n<( : )>\n ( : )"));
	
	//hat options
    CHECK(nospaces(snowman(21111111)) == nospaces("  ___\n .....\n (.,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(31111111)) == nospaces("  _\n /_\\n (.,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(41111111)) == nospaces("  ___\n (_*_)\n (.,.)\n<( : )>\n ( : )"));
	
	//nose/mouth options
    CHECK(nospaces(snowman(12111111)) == nospaces(" _===_\n (...)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(13111111)) == nospaces(" _===_\n (._.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(14111111)) == nospaces(" _===_\n (. .)\n<( : )>\n ( : )"));
	
	//left eye options
    CHECK(nospaces(snowman(11211111)) == nospaces(" _===_\n (o,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(11311111)) == nospaces(" _===_\n (O,.)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(11411111)) == nospaces(" _===_\n (-,.)\n<( : )>\n ( : )"));
	
	//right eye options
    CHECK(nospaces(snowman(11121111)) == nospaces(" _===_\n (.,o)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(11131111)) == nospaces(" _===_\n (.,O)\n<( : )>\n ( : )"));
    CHECK(nospaces(snowman(11141111)) == nospaces(" _===_\n (.,-)\n<( : )>\n ( : )"));
	
	//left arm options
    CHECK(nospaces(snowman(11112111)) == nospaces(" _===_\n\\(.,.) \n ( : )>\n ( : )"));
    CHECK(nospaces(snowman(11113111)) == nospaces(" _===_\n (.,.)\n/( : )>\n ( : )"));
    CHECK(nospaces(snowman(11114111)) == nospaces("_===_\n(.,.)\n( : )>\n( : )"));
	
	//right arm options
    CHECK(nospaces(snowman(11111211)) == nospaces(" _===_\n (.,.)/\n<( : )\n ( : )"));
    CHECK(nospaces(snowman(11111311)) == nospaces(" _===_\n (.,.)\n<( : )\\n ( : )"));
    CHECK(nospaces(snowman(11111411)) == nospaces(" _===_\n (.,.)\n<( : )\n ( : )"));
	
	//torso options
    CHECK(nospaces(snowman(11111121)) == nospaces(" _===_\n (.,.)\n<(] [)>\n ( : )"));
    CHECK(nospaces(snowman(11111131)) == nospaces(" _===_\n (.,.)\n<(> <)>\n ( : )"));
    CHECK(nospaces(snowman(11111141)) == nospaces(" _===_\n (.,.)\n<(   )>\n ( : )"));
	
	//base options
    CHECK(nospaces(snowman(11111112)) == nospaces(" _===_\n (.,.)\n<( : )>\n (" ")"));
    CHECK(nospaces(snowman(11111113)) == nospaces(" _===_\n (.,.)\n<( : )>\n (___)"));
    CHECK(nospaces(snowman(11111114)) == nospaces(" _===_\n (.,.)\n<( : )>\n (   )"));

	//random options
	CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21114411)) == nospaces(" ___\n.....\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(31114411)) == nospaces("  _\n /_\\\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(41114411)) == nospaces(" ___\n(_*_)\n(.,.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(42114411)) == nospaces(" ___\n(_*_)\n(...)\n( : )\n( : )"));
	CHECK(nospaces(snowman(43114411)) == nospaces(" ___\n(_*_)\n(._.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(44114411)) == nospaces(" ___\n(_*_)\n(. .)\n( : )\n( : )"));
	CHECK(nospaces(snowman(43214411)) == nospaces(" ___\n(_*_)\n(o_.)\n( : )\n( : )"));
	CHECK(nospaces(snowman(43224411)) == nospaces(" ___\n(_*_)\n(o_o)\n( : )\n( : )"));
	CHECK(nospaces(snowman(43234411)) == nospaces(" ___\n(_*_)\n(o_O)\n( : )\n( : )"));
	CHECK(nospaces(snowman(43244411)) == nospaces(" ___\n(_*_)\n(o_-)\n( : )\n( : )"));
	CHECK(nospaces(snowman(43344411)) == nospaces(" ___\n(_*_)\n(O_-)\n( : )\n( : )"));
    CHECK(nospaces(snowman(43444411)) == nospaces(" ___\n(_*_)\n(-_-)\n( : )\n( : )"));
	CHECK(nospaces(snowman(43441211)) == nospaces("  ___\n (_*_)\n (-_-)/\n<( : )\n ( : )"));
	CHECK(nospaces(snowman(43441211)) == nospaces("  ___\n (_*_)\n (-_-)/\n<( : )\n ( : )"));
	CHECK(nospaces(snowman(43441311)) == nospaces("  ___\n (_*_)\n (-_-)\n<( : )\\n ( : )"));
	CHECK(nospaces(snowman(43442311)) == nospaces("  ___\n (_*_)\n\\(-_-)\n ( : )\\\n ( : )"));
	CHECK(nospaces(snowman(43443311)) == nospaces("  ___\n (_*_)\n (-_-)\n/( : )\\\n ( : )"));
	CHECK(nospaces(snowman(43443322)) == nospaces("  ___\n (_*_)\n (-_-)\n/(] [)\\\n (" ")"));
	CHECK(nospaces(snowman(43443332)) == nospaces("  ___\n (_*_)\n (-_-)\n/(> <)\\\n (" ")"));
	CHECK(nospaces(snowman(43443342)) == nospaces("  ___\n (_*_)\n (-_-)\n/(   )\\\n (" ")"));
	CHECK(nospaces(snowman(43443333)) == nospaces("  ___\n (_*_)\n (-_-)\n/(> <)\\\n (___)"));
	CHECK(nospaces(snowman(43443334)) == nospaces("  ___\n (_*_)\n (-_-)\n/(> <)\\\n (   )"));

}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555));
	CHECK_THROWS(snowman(1234123));
	CHECK_THROWS(snowman(2342131));
	CHECK_THROWS(snowman(1234567));
	CHECK_THROWS(snowman(12345678));
	CHECK_THROWS(snowman(12312316));
	CHECK_THROWS(snowman(43432157));
	CHECK_THROWS(snowman(54231432));
	CHECK_THROWS(snowman(77777777));
	CHECK_THROWS(snowman(12301230));
	CHECK_THROWS(snowman(43434354));
	CHECK_THROWS(snowman(12122347));
	CHECK_THROWS(snowman(123123123));
	CHECK_THROWS(snowman(-1-2-3-41234));
    
}





