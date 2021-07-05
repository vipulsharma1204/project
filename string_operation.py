# # i   ort string
# # Enter all character in same CASE
# str="apple is my favourite fruit"
# l=len(str)
# print(l)
# for i in range(0,l+1,+1):
#     for j in range(l,-1,-1):
#         if(i==j):
#             j=j-1
#         else:
#             if(str[i]==str[j]):
#                 print("match found at \t"+str[i])
# print("\n\n\n\n Vaccant placess in output result are spaces which are provided in string\n\n\n")

        
st = input()
d = {}
l = len(st)
for e in range(l):
    try :
        d[st[e]] += [e]
    except :
        d[st[e]] = [e]

for x in d.keys():
    if len(d[x])>1:
        print(x,d[x])