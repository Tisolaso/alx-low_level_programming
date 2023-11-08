/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: sfe
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
