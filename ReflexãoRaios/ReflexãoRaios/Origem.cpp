#include <iostream>
#include <glm/glm.hpp>

glm::vec3 RaioRefletido(glm::vec3 Rin, glm::vec3 N)
{
	Rin = glm::vec3(Rin * -1.0f);
	glm::vec3 Rout = glm::vec3(glm::vec3(N * 2.0f) * (N * Rin) - Rin);
	return Rout;
}

int main() {
	glm::vec3 RaioSaida = RaioRefletido(glm::vec3(2, -2, 0), glm::vec3(0, 1, 0));
	std::cout << RaioSaida.x << " " << RaioSaida.y << " " << RaioSaida.z << std::endl;
	system("pause");
	return 0;
}