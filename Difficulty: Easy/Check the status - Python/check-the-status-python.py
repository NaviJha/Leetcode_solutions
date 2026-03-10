class Solution:
    def checkStatus(self, a, b, flag):
        # Code logic based on common interpretations of such a problem, for instance from GeeksforGeeks
        # Returns True if only one of a or b is positive UNLESS flag is True.
        # Returns True if both a and b are negative IF flag is True.
        
        # Check if exactly one of a or b is positive
        if (a > 0 and b <= 0) or (a <= 0 and b > 0):
            return not flag
        # Check if both a and b are negative
        elif (a < 0 and b < 0):
            return flag
        # Default case if neither condition met
        else:
            return False

        