route = input()
a_count, e_count, i_count, o_count, u_count = 0, 0, 0, 0, 0
with open(route, 'r') as file:
   lines = file.readlines()
   for line in lines:
      for char in line:
         if char == 'a':
            a_count += 1
         if char == 'e':
            e_count += 1
         if char == 'i':
            i_count += 1
         if char == 'o':
            o_count += 1
         if char == 'u':
            u_count += 1
            
print(f"a = {a_count}, e = {e_count}, i = {i_count}, o = {o_count}, u = {u_count}")
