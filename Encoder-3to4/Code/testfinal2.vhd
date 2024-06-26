--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:01:49 06/24/2023
-- Design Name:   
-- Module Name:   F:/purfard/final2/final2/testfinal2.vhd
-- Project Name:  final2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: final2
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 USE ieee.std_logic_unsigned.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY testfinal2 IS
END testfinal2;
 
ARCHITECTURE behavior OF testfinal2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT final2
    PORT(
         x : IN  std_logic_vector(2 downto 0);
         y : OUT  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         res : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal x : std_logic_vector(2 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal res : std_logic := '0';

 	--Outputs
   signal y : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: final2 PORT MAP (
          x => x,
          y => y,
          clk => clk,
          res => res
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
		res<='1';
		wait for 10 ns;
		res<='0';
		x<="001";
		wait for 10 ns;
		x<="010";
		wait for 10 ns;
		x<="100";
		wait for 10 ns;
		x<="111";
		wait for 10 ns;
      wait;
   end process;

END;
