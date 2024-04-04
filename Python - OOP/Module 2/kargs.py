def full_name(first, last):
    fullname = f"{first} {last}"
    return fullname
# serial wise
""" name = full_name('alu','vaja')
print(name) """

# nonserial wise
name = full_name(last = 'vaja', first='Alu')
# print(name)


def info(first, last, **infos):
    name = f"{first} {last}"
    for key, value in infos.items():
        print(key, " : ", value)
    return name
name = info(first='Rahul', last='vai', kikore=' alu khay', koijay='ghure beray')
print(name)