LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
 
ENTITY decoder3to4_final_test IS
END decoder3to4_final_test;
 
ARCHITECTURE behavior OF decoder3to4_final_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DECODER3TO4_FINAL
    PORT(
         y : IN  std_logic_vector(19 downto 0);
         G : OUT  std_logic_vector(14 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal y : std_logic_vector(19 downto 0) := (others => '0');

 	--Outputs
   signal G : std_logic_vector(14 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 --  constant <clock>_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DECODER3TO4_FINAL PORT MAP (
          y => y,
          G => G
        );

   -- Clock process definitions
 --  <clock>_process :process
  --begin
	--	<clock> <= '0';
		--wait for <clock>_period/2;
		--<clock> <= '1';
		--wait for <clock>_period/2;
   --end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      wait for 10 ns;
		Y<="11001110101111010011";
      wait;
   end process;

END;
