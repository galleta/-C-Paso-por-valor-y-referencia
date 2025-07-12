![C++](https://img.shields.io/badge/Lenguaje-C++-00599C?logo=cplusplus&logoColor=white&color=004482)
# Paso por valor vs. Paso por referencia en C++

## 📌 Conceptos fundamentales

### 🔄 Paso por valor
- **Definición**: Se crea una **copia independiente** del dato original al pasarlo a una función.
- **Efecto**: Los cambios realizados **no afectan** a la variable original.
- **Rendimiento**: Ideal para tipos de datos pequeños (como `int`, `char`, `float`).
- **Seguridad**: Previene modificaciones accidentales.

### 🔗 Paso por referencia
- **Definición**: Se trabaja directamente con la **dirección de memoria** del dato original.
- **Efecto**: Los cambios **modifican** la variable original.
- **Rendimiento**: Esencial para estructuras grandes (vectores, objetos) para evitar copias costosas.
- **Flexibilidad**: Permite retornar múltiples valores modificados.

---

## 🎥 Visualización Interactiva

<p align="center">
  <img src="https://i.sstatic.net/8XAQ1.gif" alt="Animación explicativa" />
</p>

*Fuente del gif [Stack Overflow en Español](https://es.stackoverflow.com/questions/1493/cuál-es-la-diferencia-entre-paso-de-variables-por-valor-y-por-referencia)*  
*(La referencia se comporta como un "alias", mientras el valor crea una copia independiente)*

---

## ⚖️ Comparación directa

| Característica               | Paso por valor          | Paso por referencia     |
|------------------------------|-------------------------|-------------------------|
| **Modifica el original**     | ❌ No                   | ✅ Sí                   |
| **Uso de memoria**           | Mayor (copia)           | Menor (solo referencia) |
| **Seguridad**                | Alta                    | Baja (riesgo efectos laterales) |
| **Recomendado para**         | Datos primitivos        | Objetos complejos       |

---

## 💡 ¿Cuándo elegir cada uno?

1. **Usa paso por valor cuando**:
   - Los datos son pequeños y simples.
   - Quieres garantizar que el original no cambie.
   - Priorizas la seguridad sobre el rendimiento.

2. **Usa paso por referencia cuando**:
   - Trabajas con estructuras de datos grandes.
   - Necesitas modificar múltiples valores.
   - El rendimiento es crítico (evitas copias innecesarias).

> 🔍 **Nota clave**: En C++, el paso por referencia se indica con `&` en los parámetros (ej: `void func(int &x)`).
