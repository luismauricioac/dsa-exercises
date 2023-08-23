def main():
    searching_nonexistent()
    insertion_first_position()
    insertion_last_position()
    deletion_first_position()
    deletion_last_position()

def searching_nonexistent():
    # Initialize the array with values from 1 to 100
    my_set = set(range(1, 101))
    not_exist = 101
    steps = 0
    for id, val in enumerate(my_set):
        if val == not_exist:
            print(f"\t found [{id}] = {val}")
            break
        steps += 1
    
    for id, val in enumerate(my_set):
        print(f"\t my_set[{id}] = {val}")
    
    print(f"1.- steps required to search a value not contained {steps}")



def insertion_first_position():

    # Initialize the array with values from 1 to 100
    my_set = set(range(1, 101))
    insert = 0
    steps = 0
    # validate if not present
    isPresent = False
    for id, val in enumerate(my_set):
        if val == insert:
            print(f"\t found [{id}] = {val}")
            isPresent = True
            break
        steps += 1
    new_set = { insert }
    steps += 1
    if not isPresent:
      for val in my_set:
        new_set = new_set.union({val})
        steps += 1

      for id, val in enumerate(new_set):
          print(f"\t new_set[{id}] = {val}")
    
    print(f"2.- steps required to insert an element at the begining {steps}")
    


def insertion_last_position():

    # Initialize the array with values from 1 to 100
    my_set = set(range(1, 101))
    insert = 0
    new_set = { insert }
    
    steps = 0
    # validate if not present
    isPresent = False
    for id, val in enumerate(my_set):
        if val == insert:
            print(f"\t found [{id}] = {val}")
            isPresent = True
            break
        steps += 1

    if not isPresent:    
        # insert at the end
        new_set = my_set.union(new_set)
        steps += 1

    for id, val in enumerate(new_set):
        print(f"\t new_set[{id}] = {val}")
    
    print(f"3.- steps required to insert an element at the end {steps}")

def deletion_first_position():

    # Initialize the array with values from 1 to 100
    my_set = set(range(1, 101))    
    steps = 0
    set_to_list = list(my_set)
    new_list = []
    for id,val in enumerate(set_to_list):
        if id != 0:
            new_list.append(val)
        steps += 1
    # insert at the end
    new_set = set(new_list)

    for id, val in enumerate(new_set):
        print(f"\t new_set[{id}] = {val}")
    
    print(f"4.- steps required to delete an element at the begining {steps}")

def deletion_last_position():

    # Initialize the array with values from 1 to 100
    my_set = set(range(1, 101))    
    my_set.remove(100)
    steps = 1
    for id, val in enumerate(my_set):
        print(f"\t my_set[{id}] = {val}")
    
    print(f"5.- steps required to delete an element at the end {steps}")
