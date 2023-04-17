C-Typedef Task function, header and program files

dog.h
-Defines new type struct dog with the following elements:
    name, type = char *
    age, type = float
    owner, type = char *
-Defines new type dog_t as a new name for the type struct dog.

1-init_dog.c                                                                                                                                                                                                         
A function that initialize a variable of type struct dog

2-print_dog.c
A function that prints a struct dog

4-new_dog.c
A function that creates a new dog.

5-free_dog.c
A function that frees dogs.

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

