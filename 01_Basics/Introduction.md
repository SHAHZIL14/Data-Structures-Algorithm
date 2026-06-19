1. Algorithm
   An algorithm is a finite, well-defined sequence of steps to solve a specific problem or perform a task.
   Key characteristics every algorithm must have:
   PropertyMeaningFinitenessMust terminate after a finite number of stepsDefinitenessEach step must be precisely and unambiguously definedInputTakes zero or more well-defined inputsOutputProduces at least one well-defined outputEffectivenessEach step must be simple enough to be carried out (basic, executable)
   Example — Algorithm to find the largest of three numbers:
   Step 1: Start
   Step 2: Read three numbers A, B, C
   Step 3: If A > B and A > C, then largest = A
   Step 4: Else if B > A and B > C, then largest = B
   Step 5: Else largest = C
   Step 6: Print largest
   Step 7: Stop
   Algorithms are language-independent — the same algorithm can be implemented in C++, Python, Java, etc. In DSA specifically, algorithms also get analyzed for time complexity (how runtime grows with input size) and space complexity (how memory usage grows), usually expressed using Big-O notation.

2. Flowchart
   A flowchart is the graphical/pictorial representation of an algorithm using standardized symbols connected by arrows showing the flow of control.
   Standard symbols:
   SymbolShapeMeaningOval/Ellipse⬭Start / EndParallelogram▱Input / OutputRectangle▭Process / CalculationDiamond◇Decision (Yes/No, True/False)Arrow→Flow directionCircle○Connector (links parts of a large flowchart)
   Why flowcharts matter in DSA:

They make logic easy to visualize, especially branching (if-else) and looping (for/while) structures
Useful for debugging logic before coding
Great for explaining algorithms to non-programmers.

3. Pseudocode
   Pseudocode is a method of describing an algorithm using a structured, code-like syntax that mixes plain English with programming constructs — but it isn't tied to any specific programming language's strict syntax rules.
   It's the "middle ground" between a plain-English algorithm and actual code.
   Why use pseudocode instead of just an algorithm?

It's more structured and closer to real code, making the transition to actual programming easier
It's still language-independent, so any developer (regardless of whether they code in Python, Java, or C++) can read and convert it
It clearly shows control structures (loops, conditionals) using common keywords

Common pseudocode conventions:
ConstructPseudocode keywordsSequenceREAD, SET, PRINTDecisionIF ... THEN ... ELSE ... ENDIFLoopFOR, WHILE ... ENDWHILE, REPEAT ... UNTILFunctionFUNCTION name(params) ... RETURN ... END FUNCTION
Example — Pseudocode for the same problem (largest of three numbers):
BEGIN
READ A, B, C
IF A > B AND A > C THEN
largest = A
ELSE IF B > A AND B > C THEN
largest = B
ELSE
largest = C
ENDIF
PRINT largest
END
Another example — Pseudocode for Linear Search (more DSA-relevant):
FUNCTION linearSearch(arr, n, key)
FOR i = 0 TO n-1
IF arr[i] == key THEN
RETURN i
ENDIF
ENDFOR
RETURN -1
END FUNCTION
How the Three Relate
AspectAlgorithmFlowchartPseudocodeFormPlain English / numbered stepsGraphical / symbolsStructured English + keywordsBest forInitial problem-solving, explaining logicVisualizing flow, especially branches/loopsBridging logic to actual codeDetail levelHigh-levelHigh-level, visualCloser to code-level detailAudienceAnyoneAnyone (very intuitive)People with some programming backgroundConverts to code?IndirectlyIndirectlyAlmost directly
