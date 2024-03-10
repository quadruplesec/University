import sys
def test(didpass):
    linenum = sys._getframe(1).f_lineno
    if didpass:
        msg = f"Test at line {linenum} ok."
    else:
        msg = f"Test at line {linenum} FAILED."
    print(msg)

def test_suite():
    #test(whatever test == desired result)
    pass

test_suite()