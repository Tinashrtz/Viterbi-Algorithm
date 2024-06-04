library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL;
use IEEE.numeric_std.ALL;
use ieee.std_logic_arith.all;

entity final3 is
    Port ( m : in  STD_LOGIC_VECTOR(0 to 5);
           y : out  STD_LOGIC_VECTOR(0 to 2));
end final3;

architecture Behavioral of final3 is
signal A0: std_logic_vector(8 downto 0);
signal A1: std_logic_vector(8 downto 0);
signal B0: std_logic_vector(8 downto 0);
signal B1: std_logic_vector(8 downto 0);
signal B2: std_logic_vector(8 downto 0);
signal B3: std_logic_vector(8 downto 0);
signal C0: std_logic_vector(8 downto 0);
signal C1: std_logic_vector(8 downto 0);
signal C2: std_logic_vector(8 downto 0);
signal C3: std_logic_vector(8 downto 0);
signal C4: std_logic_vector(8 downto 0);
signal C5: std_logic_vector(8 downto 0);
signal C6: std_logic_vector(8 downto 0);
signal C7: std_logic_vector(8 downto 0);
signal T0: std_logic_vector(8 downto 0);
signal T1: std_logic_vector(8 downto 0);
signal T2: std_logic_vector(8 downto 0);
signal T3: std_logic_vector(8 downto 0);
signal T4: std_logic_vector(8 downto 0);
signal T5: std_logic_vector(8 downto 0);
signal T6: std_logic_vector(8 downto 0);
signal T7: std_logic_vector(8 downto 0);
signal min: std_logic_vector(8 downto 0);


begin
a0<=("000"& M(0))+("000"& M(1));
a1<=("000"& not M(0))+("000"& not M(1));
b0<=("000"& M(2))+("000"& M(3));
b1<=("000"& not M(2))+("000"& not M(3));
c0<=("000"& M(4))+("000"& M(5));
c1<=("000"& not M(4))+("000"& not M(5));
b2<=("000"& not M(2))+("000"& M(3));
b3<=("000"& M(2))+("000"& not M(3));
c2<=("000"& not M(4))+("000"& M(5));
c3<=("000"& M(4))+("000"& not M(5));
c4<=("000"& not M(4))+("000"& not M(5));
c5<=("000"& M(4))+("000"& M(5));
c6<=("000"& M(4))+("000"& not M(5));
c7<=("000"& not M(4))+("000"& M(5));

T0<=a0+b0+c0;
T1<=a0+b0+c1;
T2<=a0+b1+c2;
T3<=a0+b1+c3;
T4<=a1+b2+c4;
T5<=a1+b2+c5;
T6<=a1+b3+c6;
T7<=a1+b3+c7;

min<=T0 when T0<T1 else    
  	  T1 when T1<T0 else 
	  T2 when T2<min else
	  T3 when T3<min else
	  T4 when T4<min else
     T5 when T5<min else
     T6 when T6<min else
     T7 ;

y<="000" when T0=min else 
	"001" when T1=min else
	"010" when T2=min else
	"011" when T3=min else
	"100" when T4=min else
	"101" when T5=min else
	"110" when T6=min else
	"111" ;

end Behavioral;