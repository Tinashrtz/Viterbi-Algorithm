-- TestBench Template 

  LIBRARY ieee;
  USE ieee.std_logic_1164.ALL;
  USE ieee.numeric_std.ALL;

  ENTITY tina IS
  END tina;

  ARCHITECTURE behavior OF tina IS 

  -- Component Declaration
          COMPONENT tina
          PORT(
        
									m: IN std_logic_vector(0 to 5);       
									y: OUT std_logic_vector(0 to 2)
                  );
          END COMPONENT;

                    
			SIGNAL m :  std_logic_vector(0 to 5) ;
          SIGNAL y:  std_logic_vector( 0 to 2);
          

  BEGIN

  -- Component Instantiation
          uut: tina PORT MAP(
                  m => m,
                  y => y
          );


  --  Test Bench Statements
     tb : PROCESS
     BEGIN
		m<="101010";
     END PROCESS tb;
  --  End Test Bench 

  END;
