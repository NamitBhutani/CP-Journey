// logic
// iterate over the loginattempt string, for k =1 to length of loginattempt string (k is the max number of characters in each password in the passwords string) until it
// finds any password in the passwords array. when it finds a match, store the match in a var and remove it from the string  and store it in
// a new variable which will be passed as a parameter (for recursion). this way in the end if
// exit condition for the recursion-> when the string length of  loginattempt is not zero and count==n return error.
// count is a variable that is increased by 1 everytime the for loop runs, this way we can know if the length is still non zero after all the loops are run.