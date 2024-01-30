import sqlite3

conn = sqlite3.connect ('christmas.db')

c = conn.cursor()

c.execute ("""CREATE table gifts (
    'name' TEXT, 
    'gender' TEXT,
    'gift' TEXT, 
    'price' INTEGER)""")
    
christmas_list = [('Bugsy', 'Male', 'Treatos', '499'),
                  ('Hailey', 'Female', 'Clothes', '300'),
                  ('Darius', 'Male', 'Clothes', '740'),
                  ('Rulet', 'Female', 'Cap', '500'),
                  ('Danica', 'Female', 'Planner', '240'),
                  ('Charleen', 'Female', 'Mug', '200')]

c.executemany ("INSERT INTO gifts VALUES (?, ?, ?, ?)", christmas_list)

c.execute("SELECT * FROM gifts")
print("I bought presents for:")
insert = c.fetchall()

for i in insert:
    print(i[0] + " | " + i[1] + " | " + i[2] + " | " + str(i[3]))

print("\nWho else?")
user_name = (input("Name: "))
user_gender = (input("Gender: "))
user_gift = (input("Gift: "))
user_price = (input("Price: "))
c.execute("""INSERT INTO gifts
         (name, gender, gift, price)
          VALUES (?, ?, ?, ?)""",(user_name, user_gender, user_gift, user_price))

c.execute("SELECT * FROM gifts")
print("\nI bought presents for:")
userinput = c.fetchall()

for i in userinput:
    print(i[0] + " | " + i[1] + " | " + i[2] + " | " + str(i[3]))
    
    
change_gift = input("\nChange the gift you're going to give: ")
c.execute ("UPDATE gifts SET gift = (?) WHERE rowid = 7", (change_gift,))
c.execute("SELECT * FROM gifts")
print("\nTable after updating:")
update = c.fetchall()

for i in update:
    print(i[0] + " | " + i[1] + " | " + i[2] + " | " + str(i[3]))

user_search = int(input("\nSearch for gifts less than ___ pesos: "))
c.execute("SELECT * FROM gifts WHERE price<(?)", (user_search,))
print("\nGifts less than", user_search, "pesos:")
search = c.fetchall()

for i in search:
    print(i[0] + " | " + i[1] + " | " + i[2] + " | " + str(i[3]))

print("\nMy Christmas Wish is for my dog, Bugsy, to live long (atleast 20 human years) :D")
 
conn.commit()
 
conn.close()