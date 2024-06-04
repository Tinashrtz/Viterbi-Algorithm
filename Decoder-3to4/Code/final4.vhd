library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity DECODER3TO4_FINAL is
    Port ( y : in  STD_LOGIC_VECTOR (19 downto 0);
           G : out  STD_LOGIC_VECTOR (14 downto 0));
end DECODER3TO4_FINAL;

architecture Behavioral of DECODER3TO4_FINAL is
SIGNAL X:STD_LOGIC_VECTOR (14 downto 0);
signal Z : std_logic_vector(4 downto 0);
signal A: STD_LOGIC;
signal B: STD_LOGIC;
signal C: STD_LOGIC;
signal D: STD_LOGIC;
signal E: STD_LOGIC;
signal F: STD_LOGIC;
signal T : std_logic_vector(3 downto 0);
signal S : std_logic_vector(3 downto 0);
signal K : std_logic_vector(3 downto 0);

begin
g<=x;
Z(0)<= Y(0) XOR Y(1) XOR Y(2) XOR Y(3);--=xor ABC
Z(1)<= Y(4) XOR Y(5) XOR Y(6) XOR Y(7);--=xor x0x1x2
Z(2)<= Y(8) XOR Y(9) XOR Y(10) XOR Y(11);--=xor x3x4x5
Z(3)<= Y(12) XOR Y(13) XOR Y(14) XOR Y(15);--=xor x6x7x8
z(4)<= Y(16) XOR Y(17) XOR Y(18) XOR Y(19);--=XOR X9X10X11

x(1)<='0' when (Z(0) XOR Z(2))=(Y(5) XOR Y(7)) else
		'1';
x(4)<='0' when (Z(1) XOR Z(3))=(Y(11) XOR Y(9)) else
		'1';
x(7)<='0' when (z(2) xor z(4))=(y(13)xor y(15))else
		'1';
T(0)<=Y(0) XOR Y(3) XOR Z(1) XOR X(1);
T(1)<=Y(2) XOR Y(0) XOR Z(1) XOR T(0);
T(2)<=Y(2) XOR x(1) XOR T(1);
T(3)<=Y(0) XOR Y(1) XOR x(1);


S(0)<=Y(4) XOR Y(7) XOR Z(2) XOR X(4);
S(1)<=Y(6) XOR Y(4) XOR Z(2) XOR S(0);
S(2)<=Y(6) XOR x(4) XOR S(1);
S(3)<=Y(4) XOR Y(5) XOR X(4);


K(0)<=Y(8) XOR Y(11) XOR Z(3) XOR X(7);
K(1)<=Y(10) XOR Y(8) XOR Z(3) XOR K(0);
K(2)<=Y(10) XOR x(7) XOR K(1);
K(3)<=Y(8) XOR Y(9) XOR X(7);

A<=Z(0) XOR S(3) XOR x(1) XOR s(0);
X(0)<=Z(1) XOR K(3) XOR X(4) XOR K(0);
D<=Y(0) XOR X(0) XOR A;
F<=T(0) XOR A XOR D;
X(2)<= Y(3) XOR F;
X(3)<=A XOR Y(4) XOR X(0);
B<=Y(5) XOR A XOR X(0) XOR X(1) XOR X(3) XOR X(4);
E<=Y(1) XOR D XOR A XOR X(0) XOR X(1) XOR B;
C<=Y(2) XOR E XOR F XOR B XOR X(1) XOR X(2); 
X(5)<=Y(7) XOR C;
--TWO FIRST STATES ARE FULLY FOUNDED.
X(6)<=Y(8) XOR X(0) XOR X(3);
--X(7)<=Y(9) XOR X(0) XOR X(3) XOR X(1) XOR X(4) XOR X(6);
X(8)<= Y(11) XOR X(2);
--THREE FIRST STATES ARE FULLY FOUNDED.
X(9)<=Y(12) XOR X(3) XOR X(6);
X(10)<=Y(13) XOR X(3) XOR X(6) XOR X(4) XOR X(7) XOR X(9);
X(11)<= Y(15) XOR X(5);
--FOUR FIRST STATES ARE FULLY FOUNDED.
X(12)<=Y(16) XOR X(6) XOR X(9);
X(13)<=Y(17) XOR X(6) XOR X(9) XOR X(7) XOR X(10) XOR X(12);
X(14)<= Y(19) XOR X(8);
--ALL STATES ARE FULLY FOUNDED.
end Behavioral;