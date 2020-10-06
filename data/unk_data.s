	.section .rodata

        .asciz "pksdir0"
        .byte 0x01, 0x00, 0x00, 0x00 @ # of pointers
        .byte 0x18, 0x00, 0x30, 0x08 @ pointer to pointer table
        .asciz "pksdir0"
        .byte 0x20, 0x00, 0x30, 0x08 @ pointer to monpal string
        .byte 0x30, 0x00, 0x30, 0x08 @ Pointer to unknown palette
        .asciz "monpal"
        .align 2,0
        .asciz "pksdir0"

        @ Unknown Palette
        .byte 0x00, 0x00, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0x47, 0x37, 0x37, 0x80, 0x77, 0x67, 0x67, 0x80
        .byte 0xaf, 0x9f, 0x9f, 0x80, 0xd7, 0xcf, 0xcf, 0x80, 0xff, 0xff, 0xff, 0x80, 0x77, 0x1f, 0x47, 0x80, 0xaf, 0x3f, 0x6f, 0x80, 0xd7, 0x7f, 0x9f, 0x80, 0x00, 0x37, 0xc7, 0x80, 0x00, 0x97, 0xef, 0x80
        .byte 0x37, 0xbf, 0xff, 0x80, 0x77, 0x57, 0x37, 0x80, 0xb7, 0x7f, 0x47, 0x80, 0xe7, 0xb7, 0x6f, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0xaf, 0xaf, 0xaf, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x77, 0x37, 0x00, 0x80, 0xbf, 0x87, 0x27, 0x80, 0xdf, 0xbf, 0x4f, 0x80, 0xff, 0xff, 0x77, 0x80, 0x4f, 0x27, 0x57, 0x80, 0x8f, 0x57, 0x7f, 0x80, 0xd7, 0x87, 0xa7, 0x80
        .byte 0x3f, 0x67, 0x00, 0x80, 0x67, 0x8f, 0x00, 0x80, 0xb7, 0xd7, 0x1f, 0x80, 0x8f, 0x0f, 0x3f, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0xc7, 0x87, 0x00, 0x80, 0xef, 0xdf, 0x2f, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x17, 0x4f, 0x6f, 0x80, 0x27, 0x7f, 0xb7, 0x80, 0x37, 0xaf, 0xff, 0x80, 0xbf, 0xe7, 0xef, 0x80, 0x87, 0x87, 0x00, 0x80, 0xbf, 0xbf, 0x00, 0x80, 0x8f, 0xd7, 0xf7, 0x80
        .byte 0x2f, 0x2f, 0x2f, 0x80, 0x67, 0x67, 0x67, 0x80, 0xa7, 0xa7, 0xa7, 0x80, 0x37, 0xaf, 0xff, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0xaf, 0xaf, 0xaf, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x47, 0x1f, 0x5f, 0x80, 0x6f, 0x47, 0x87, 0x80, 0x9f, 0x6f, 0xb7, 0x80, 0xcf, 0x97, 0xe7, 0x80, 0x6f, 0x00, 0x37, 0x80, 0xa7, 0x47, 0x77, 0x80, 0xe7, 0x8f, 0xb7, 0x80
        .byte 0x87, 0x3f, 0x00, 0x80, 0xaf, 0x6f, 0x00, 0x80, 0xef, 0xaf, 0x37, 0x80, 0xff, 0xd7, 0x57, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0xaf, 0xaf, 0xaf, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x37, 0x6f, 0x1f, 0x80, 0x5f, 0x8f, 0x17, 0x80, 0x87, 0xaf, 0x0f, 0x80, 0xaf, 0xd7, 0x0f, 0x80, 0x17, 0x1f, 0x77, 0x80, 0x37, 0x5f, 0xb7, 0x80, 0x57, 0xa7, 0xff, 0x80
        .byte 0x27, 0x1f, 0x37, 0x80, 0x3f, 0x3f, 0x4f, 0x80, 0x57, 0x67, 0x67, 0x80, 0xbf, 0x17, 0x00, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0xaf, 0xaf, 0xaf, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x1f, 0x47, 0x6f, 0x80, 0x37, 0x6f, 0x9f, 0x80, 0x57, 0x9f, 0xcf, 0x80, 0x77, 0xcf, 0xff, 0x80, 0x57, 0x37, 0x00, 0x80, 0x97, 0x67, 0x00, 0x80, 0xd7, 0xa7, 0x47, 0x80
        .byte 0x77, 0x2f, 0x77, 0x80, 0xaf, 0x47, 0xaf, 0x80, 0xdf, 0x77, 0xd7, 0x80, 0x87, 0x00, 0x00, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0xaf, 0xaf, 0xaf, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x6f, 0x17, 0x0f, 0x80, 0xa7, 0x37, 0x0f, 0x80, 0xd7, 0x57, 0x0f, 0x80, 0xf7, 0x9f, 0x67, 0x80, 0x5f, 0x87, 0x0f, 0x80, 0x8f, 0xb7, 0x1f, 0x80, 0xc7, 0xe7, 0x2f, 0x80
        .byte 0x67, 0x47, 0x27, 0x80, 0x97, 0x77, 0x57, 0x80, 0xdf, 0xb7, 0x67, 0x80, 0xff, 0xff, 0x8f, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0xaf, 0xaf, 0xaf, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x8f, 0x37, 0x00, 0x80, 0xe7, 0x8f, 0x00, 0x80, 0xff, 0xc7, 0x57, 0x80, 0xff, 0xff, 0xaf, 0x80, 0x67, 0x67, 0x00, 0x80, 0xaf, 0xaf, 0x00, 0x80, 0xff, 0xff, 0x00, 0x80
        .byte 0x5f, 0x1f, 0x3f, 0x80, 0xa7, 0x4f, 0x5f, 0x80, 0xdf, 0x8f, 0xaf, 0x80, 0x00, 0x6f, 0x97, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0xaf, 0xaf, 0xaf, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x67, 0x37, 0x0f, 0x80, 0x97, 0x67, 0x27, 0x80, 0xc7, 0x9f, 0x47, 0x80, 0xff, 0xd7, 0x67, 0x80, 0x57, 0x3f, 0x77, 0x80, 0x77, 0x67, 0xc7, 0x80, 0xaf, 0xaf, 0xd7, 0x80
        .byte 0x27, 0x57, 0x67, 0x80, 0x57, 0x97, 0x8f, 0x80, 0x7f, 0xcf, 0x9f, 0x80, 0xbf, 0x17, 0x00, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0xaf, 0xaf, 0xaf, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x27, 0x5f, 0x0f, 0x80, 0x5f, 0x8f, 0x17, 0x80, 0x8f, 0xbf, 0x27, 0x80, 0xbf, 0xef, 0x3f, 0x80, 0x47, 0x47, 0x47, 0x80, 0x87, 0x87, 0x87, 0x80, 0xd7, 0xd7, 0xd7, 0x80
        .byte 0x67, 0x47, 0x27, 0x80, 0xb7, 0x77, 0x00, 0x80, 0xef, 0xd7, 0x57, 0x80, 0xbf, 0x17, 0x00, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x0f, 0x0f, 0x0f, 0x80, 0xc7, 0x87, 0x00, 0x80, 0xef, 0xdf, 0x2f, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x47, 0x47, 0x47, 0x80, 0x77, 0x7f, 0x77, 0x80, 0xa7, 0xb7, 0xa7, 0x80, 0xcf, 0xdf, 0xcf, 0x80, 0x67, 0x67, 0x67, 0x80, 0xa7, 0xa7, 0xa7, 0x80, 0xdf, 0xef, 0xdf, 0x80
        .byte 0x6f, 0x4f, 0x1f, 0x80, 0xcf, 0x97, 0x00, 0x80, 0xef, 0xd7, 0x57, 0x80, 0xff, 0x3f, 0x00, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x17, 0x17, 0x0f, 0x80, 0x57, 0x00, 0x27, 0x80, 0x97, 0x3f, 0x5f, 0x80
        .byte 0xc7, 0x77, 0x97, 0x80, 0xd7, 0xaf, 0xbf, 0x80, 0xef, 0xef, 0xef, 0x80, 0x97, 0x97, 0x8f, 0x80, 0x27, 0x67, 0x6f, 0x80, 0x37, 0x97, 0x97, 0x80, 0x27, 0x57, 0x3f, 0x80, 0x57, 0x7f, 0x37, 0x80
        .byte 0x87, 0xc7, 0x57, 0x80, 0xb7, 0x77, 0x00, 0x80, 0xef, 0xaf, 0x00, 0x80, 0xef, 0xff, 0x87, 0x80, 0x00, 0x00, 0x00, 0x80, 0x17, 0x17, 0x17, 0x80, 0x3f, 0x3f, 0x3f, 0x80, 0x6f, 0x6f, 0x6f, 0x80
        .byte 0x9f, 0x9f, 0x9f, 0x80, 0xcf, 0xcf, 0xcf, 0x80, 0xff, 0xff, 0xff, 0x80, 0x57, 0x57, 0x57, 0x80, 0x87, 0x87, 0x87, 0x80, 0xbf, 0xbf, 0xbf, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0x8f, 0x97, 0x97, 0x80
        .byte 0xc7, 0xcf, 0xd7, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0x8f, 0x8f, 0x8f, 0x80, 0xbf, 0xbf, 0xbf, 0x80, 0x00, 0x8f, 0x00, 0x80, 0x0f, 0x0f, 0x0f, 0x80, 0x5f, 0x5f, 0x5f, 0x80, 0xaf, 0xaf, 0xaf, 0x80
        .byte 0xff, 0xff, 0xff, 0x80, 0x47, 0x47, 0x47, 0x80, 0x77, 0x77, 0x77, 0x80, 0xa7, 0xa7, 0xa7, 0x80, 0xd7, 0xd7, 0xd7, 0x80, 0x67, 0x67, 0x67, 0x80, 0xa7, 0xa7, 0xa7, 0x80, 0xe7, 0xe7, 0xe7, 0x80
        .byte 0x5f, 0x5f, 0x5f, 0x80, 0x97, 0x97, 0x97, 0x80, 0xcf, 0xcf, 0xcf, 0x80, 0xa7, 0xa7, 0xa7, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80
        .byte 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80
        .byte 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80

        .asciz "pksdir0"
        .asciz "pksdir0"
        .asciz "pksdir0"
        .asciz "pksdir0"

        @ Blank Space
        .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
        .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
        .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
        .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
        .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
        .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
        .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
        .byte 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
