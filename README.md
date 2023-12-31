# Pico-MCP3x08

Use MCP3x08 on RP2040
You can choose MCP3208 or MCP3008

## Step

1. ```#include "mcp3x08.h"```
2. run ```mcp3x08_init()```
3. use ```uint16_t mcp3008_read(uint8_t ch);``` or ```uint16_t mcp3208_read(uint8_t ch);```

## Example

See ```example.cpp```