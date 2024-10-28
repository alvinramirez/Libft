/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvinram <alvinram@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 19:23:51 by alvinram          #+#    #+#             */
/*   Updated: 2024/10/28 15:36:37 by alvinram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Esta funcion valida si la multiplicacion es segura,
 * luego asigna memoria con malloc, inicializa la memoria a 0,
 * y por ultimo retorna la memoria asignada.
 */

void	*ft_calloc(size_t number, size_t size)
{
	char	*allocated_memory;
	size_t	byte_index;

    if (number != 0 && size > SIZE_MAX / number)
    {
        return NULL;
    }

	allocated_memory = malloc(number * size);
	if (!allocated_memory)
		return NULL;
	byte_index = -1;
	while (++byte_index < size * number)
		allocated_memory[byte_index] = 0;
	return allocated_memory;
}

typedef struct {
    float x, y;     // Posición en el mapa
    int health;     // Salud del zombie
    int damage;     // Daño que inflige al jugador
} Enemy;

int main() {
    int zombie_count = 10;  // Ejemplo: 10 zombies en la ronda
    Enemy *zombies = (Enemy *)calloc(zombie_count, sizeof(Enemy));

    if (zombies == NULL) {
        printf("No se pudo asignar memoria para los zombies.\n");
        return 1;
    }

    // Inicialización de los valores para cada zombie
    for (int i = 0; i < zombie_count; i++) {
        zombies[i].x = i * 10.0f;  // Posición en el mapa (ejemplo)
        zombies[i].health = 100;   // Salud inicial para cada zombie
        zombies[i].damage = 15;    // Daño inicial para cada zombie
        printf("Zombie %d - Posicion: (%.1f, %.1f), Salud: %d, Daño: %d\n",
               i, zombies[i].x, zombies[i].y, zombies[i].health, zombies[i].damage);
    }

    // Al final de la ronda, liberar memoria
    free(zombies);
    return 0;
}