----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:55:27 06/24/2023 
-- Design Name: 
-- Module Name:    final - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;

entity final is
    Port ( x : in  STD_LOGIC;
           y : out  STD_LOGIC_VECTOR(1 downto 0);
			  clk , res : in STD_LOGIC);
end final;

architecture Behavioral of final is

signal Q: STD_LOGIC_VECTOR (1 downto 0);
signal x1: STD_LOGIC_VECTOR(1 downto 0); 
begin

process (clk,res)
begin
if(res='1')then
Q<=(others=>'0');
elsif(clk'event and clk='1')then 
x1(0)<= x XOR Q(1) XOR Q(0);
x1(1)<= x XOR Q(0);
y(0)<= x1(0);
y(1)<= x1(1);
Q<=x & Q(1);
end if;
end process;


end Behavioral;

