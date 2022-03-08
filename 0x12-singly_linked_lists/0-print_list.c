/**
 * print_list - program startup
 * @h: list being evaluated
(*
 * Description: prints all the elements of a 'list_t' list)?
 * Return: return (0) is the required function signature
 */

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node++;
		h = h->next;
	}
	return (node);
}
