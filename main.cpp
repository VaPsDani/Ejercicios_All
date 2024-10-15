#include "mh_p1.h"

int main()
{
    auto lista = GuardarCalificaciones();
    //ImprimirAlumnos(lista);
    const float promedio = CalcularCalificacionPromedio(lista);
    std::cout << "Promedio: " << promedio << '\n';
    const int cantidad_mayores_promedio = ObtenerCantidadSuperiorPromedio(lista);
    std::cout << "Cantidad superior al promedio: " << cantidad_mayores_promedio << '\n';

    return 0;
}