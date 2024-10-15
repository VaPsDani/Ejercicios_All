#include <iostream>
#include <vector>
#include <tuple>

using AlumnoTupla = std::tuple<std::string, float>;

std::vector<AlumnoTupla> GuardarCalificaciones();
float CalcularCalificacionPromedio(const std::vector<AlumnoTupla>& alumnos);
int ObtenerCantidadSuperiorPromedio();
void ImprimirEstudianteMayorNota();

void ImprimirAlumnos(std::vector<AlumnoTupla>& alumnos);