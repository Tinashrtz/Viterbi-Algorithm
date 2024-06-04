--wwe have 4 puts and we take back two inputs
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tintin is
		port (y :in std_logic_vector (3 downto 0);
				x : out std_logic_vector (1 downto 0));
end tintin;

architecture Behavioral of tintin is

signal a : std_logic;
signal b : std_logic;
signal d : std_logic;
signal q : std_logic_vector (1 downto 0);

begin
q(0)<= y(2) xor y(3);
b<= '0' when q(0)=y(1) else
	 '1';
a<= '0' when (q(0) xor b )= y(0) else 
	 '1';
d <= a;
q(1) <= '0' when y(3) =d else 
	  '1';
x<= q;
end Behavioral;

