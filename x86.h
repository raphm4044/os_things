#ifndef __X86_H
#define __X86_H

#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

//=================== PORT IO ====================
inline uint8_t inb(uint16_t port) {
    uint8_t toret;
    asm volatile("inb %1, %0": "=r"(toret): "r"(port) );
    return toret;
}

inline void outb(uint16_t port, uint8_t data) {
    asm volatile("outb %1, %0":: "r"(data), "r"(port) );
}

inline uint16_t inw(uint16_t port) {
    uint16_t toret;
    asm volatile("inw %1, %0": "=r"(toert): "r"(port));
    return toret;
}

inline void outw(uint16_t port, uint16_t data) {
    asm volatile("outw %1, %0" :: "=r"(data), "r"(port));
}

inline uint32_t inl(uint16_t port) {
	uint32_t toret;
	asm volatile("inl %1, %0": "=r"(toret): "r"(port));
	return toret;
}

inline void outl(uint16_t port, uint32_t data) {
	asm volatile("outl %1, %0":: "r"(port), "r"(data));
}


#endif // __X86_H
