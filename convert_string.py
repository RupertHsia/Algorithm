def rev1(s):
    return s[::-1]

def rev2(s):
    a = list(s)
    a.reverse()
    return ''.join(a)

def rev3(s):
    str0 = ''
    l = len(s)-1
    while l>=0:
        str0 += s[l]
        l -= 1
    return str0

def rev4(s):
    return reduce(lambda x,y : y+x, s)

str = 'abcdefg'
print rev1(str)
print rev2(str)
print rev3(str)
print rev4(str)
