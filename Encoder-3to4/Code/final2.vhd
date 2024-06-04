library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity final2 is
    Port ( x : in  STD_LOGIC_VECTOR(2 downto 0);
           y : out  STD_LOGIC_VECTOR(3 downto 0);
			  clk,res : in STD_LOGIC);
end final2;

architecture Behavioral of final2 is

signal A: STD_LOGIC_VECTOR(1 downto 0);
signal B: STD_LOGIC_VECTOR(1 downto 0);
signal C: STD_LOGIC_VECTOR(1 downto 0);
signal y1: STD_LOGIC_VECTOR(3 downto 0);

begin
 process(clk,res) 
 begin
 if(res='1')then
 A<=(others=>'0');
 B<=(others=>'0');
 C<=(others=>'0');
elsif(clk' event and clk='1')then

y1(0)<= x(0) XOR A(0) XOR A(1);
y1(1)<= x(0) XOR A(0) XOR x(1) XOR B(0) XOR B(1);
y1(2)<= x(1) XOR B(0) XOR C(1) XOR x(2) XOR C(0);
y1(3)<= x(2) XOR C(0);
y<=y1;
A<= x(0)& A(1);
B<= x(1)& B(1);
C<= x(2)& C(1);

end if;
end process;
end Behavioral;

