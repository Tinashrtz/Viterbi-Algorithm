
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

 
ENTITY test_tintin IS
END test_tintin;
 
ARCHITECTURE behavior OF test_tintin IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT tintin
    PORT(
         y : IN  std_logic_vector(3 downto 0);
         x : OUT  std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal y : std_logic_vector(3 downto 0) := (others => '0');

 	--Outputs
   signal x : std_logic_vector(1 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
  -- constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: tintin PORT MAP (
          y => y,
          x => x
        );

   -- Clock process definitions
--   <clock>_process :process
--   begin
--		<clock> <= '0';
--		wait for <clock>_period/2;
--		<clock> <= '1';
--		wait for <clock>_period/2;
--   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
    y<="1100";
	 wait for 100 ns;
	 y<="1000";
    wait for 100 ns;
	 y<="1011";
    wait for 100 ns;
	 y<="1010";
    wait for 100 ns;
	 y<="0110";
    wait for 100 ns;
   
   end process;

END;