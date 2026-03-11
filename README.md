# DP-Week1-5224600034-Axl-Rhenanda-Fanany
1. What is the invariant structure in your program?
the invariant structure is the part of the program i can't change ever, even when i add new things. in this project the invariant structure is the runSession and everything in it. like how i added the random input generator and didn't change anything in the runSession. anything that will be modified are put in a seperate file.
2. Which parts are mutable?
the parts that are mutable are bassically everything else but the runSession i.e the invariant stuff. some of the mutables include: InputGenerator, ShopSystem, ScoringSystem, Modifier Factory, etc. these parts can be modified and changed whenever you want and shouldn't break the program.
3. When you replaced the InputGenerator, why didn’t RunSession change?
runSession didn't change because i basically just redirected inputGeneration to RandomInputGenerator, so it goes from run session -> input generator -> random input generator. while inputGeneration still has some of its original strings most of the actual input is in RandomInputGenerator.
4. What would happen if scoring logic was placed inside RunSession?
if scoring logic was inside RunSession, it will cause some structural problems like the RunSession not being invariant, the runSession becoming a large file, limited modification for the scoring logic as it cant be changed or modified, or else runSession will not be invariant, and other problems.
