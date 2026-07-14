![Language](https://img.shields.io/badge/Language-C-2d5a27?style=flat-square)

# Bacterial Growth Predictor

This repository contains a C program designed to simulate and calculate the exponential growth of a bacterial population over a specified number of generations.

## Mathematical Model

The program models binary fission, where the population doubles with each generation. The growth is calculated using the following exponential formula:

$$N = N_0 \cdot 2^g$$

Where:
* $N$ is the final population size (`final_population`).
* $N_0$ is the initial population size (`initial_population`).
* $g$ is the number of generations (`generations`).

## Execution Process

The program executes the calculation through the following structured sequence:

1. **Input Collection**: The user is prompted to enter the initial population size ($N_0$) and the number of generations ($g$).
2. **Data Allocation**: To prevent integer overflow during rapid exponential expansion, inputs are stored using the `long long` data type.
3. **Computation**: The program leverages the `<math.h>` library's power function (`pow`) to compute the base-2 exponential scaling ($2^g$) and multiplies it by the initial population.
4. **Output Generation**: The final calculated population size is formatted and printed to the console as a whole number using the `%lld` specifier.

## Technical Details
* Language: C
* Core concepts demonstrated: Mathematical functions (`math.h`), exponential calculation using `pow()`, and handling large numbers using the `long long` data type.
