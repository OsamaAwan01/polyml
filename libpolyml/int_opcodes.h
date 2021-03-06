/*
    Title:  Definitions for the code-tree instructions.
    Author:     Dave Matthews, Cambridge University Computer Laboratory

    Copyright (c) 2000
        Cambridge University Technical Services Limited

    Further development Copyright David C.J. Matthews 2015-18.

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License version 2.1 as published by the Free Software Foundation.
    
    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.
    
    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

#define INSTR_enter_int     0x00

#define INSTR_jump8         0x02
#define INSTR_jump8false    0x03
#define INSTR_alloc_ref     0x06
#define INSTR_case16        0x0a
#define INSTR_stack_container 0x0b
#define INSTR_call_closure  0x0c
#define INSTR_return_w      0x0d
#define INSTR_pad           0x0e
#define INSTR_raise_ex      0x10
#define INSTR_get_store_w   0x11
#define INSTR_local_w       0x13
#define INSTR_indirect_w    0x14
#define INSTR_move_to_vec_w 0x15
#define INSTR_set_stack_val_w   0x17
#define INSTR_reset_w       0x18
#define INSTR_reset_r_w     0x19
#define INSTR_constAddr16   0x1a
#define INSTR_const_int_w   0x1b
#define INSTR_callFastRRtoR 0x1c
#define INSTR_callFastRGtoR 0x1d
#define INSTR_jump_back8    0x1e
#define INSTR_return_b      0x1f
#define INSTR_jump_back16   0x20
#define INSTR_get_store_b   0x21
#define INSTR_local_b       0x22
#define INSTR_indirect_b    0x23
#define INSTR_move_to_vec_b 0x24
#define INSTR_set_stack_val_b   0x25
#define INSTR_reset_b       0x26
#define INSTR_reset_r_b     0x27
#define INSTR_const_int_b   0x28
#define INSTR_local_0       0x29
#define INSTR_local_1       0x2a
#define INSTR_local_2       0x2b
#define INSTR_local_3       0x2c
#define INSTR_local_4       0x2d
#define INSTR_local_5       0x2e
#define INSTR_local_6       0x2f
#define INSTR_local_7       0x30
#define INSTR_local_8       0x31
#define INSTR_local_9       0x32
#define INSTR_local_10      0x33
#define INSTR_local_11      0x34
#define INSTR_indirect_0    0x35
#define INSTR_indirect_1    0x36
#define INSTR_indirect_2    0x37
#define INSTR_indirect_3    0x38
#define INSTR_indirect_4    0x39
#define INSTR_indirect_5    0x3a
#define INSTR_const_0       0x3b
#define INSTR_const_1       0x3c
#define INSTR_const_2       0x3d
#define INSTR_const_3       0x3e
#define INSTR_const_4       0x3f
#define INSTR_const_10      0x40
#define INSTR_return_0      0x41
#define INSTR_return_1      0x42
#define INSTR_return_2      0x43
#define INSTR_return_3      0x44
#define INSTR_reset_1       0x50
#define INSTR_reset_2       0x51
#define INSTR_get_store_2   0x52
#define INSTR_get_store_3   0x53
#define INSTR_get_store_4   0x54
#define INSTR_tuple_container 0x55
#define INSTR_floatAbs      0x56
#define INSTR_floatNeg      0x57
#define INSTR_fixedIntToFloat  0x58
#define INSTR_floatToReal   0x59
#define INSTR_realToFloat   0x5a
#define INSTR_floatEqual    0x5b
#define INSTR_floatLess     0x5c
#define INSTR_floatLessEq   0x5d
#define INSTR_floatGreater  0x5e
#define INSTR_floatGreaterEq 0x5f
#define INSTR_floatAdd      0x60
#define INSTR_floatSub      0x61
#define INSTR_floatMult     0x62
#define INSTR_floatDiv      0x63
#define INSTR_reset_r_1     0x64
#define INSTR_reset_r_2     0x65
#define INSTR_reset_r_3     0x66
#define INSTR_tuple_w       0x67
#define INSTR_tuple_b       0x68
#define INSTR_tuple_2       0x69
#define INSTR_tuple_3       0x6a
#define INSTR_tuple_4       0x6b
#define INSTR_lock          0x6c
#define INSTR_ldexc         0x6d
#define INSTR_realToInt     0x6e
#define INSTR_floatToInt    0x6f
#define INSTR_callFastFtoF  0x70
#define INSTR_callFastGtoF  0x71
#define INSTR_callFastFFtoF 0x72
#define INSTR_callFastFGtoF 0x73
#define INSTR_push_handler  0x78
#define INSTR_realUnordered 0x79
#define INSTR_floatUnordered 0x7a
#define INSTR_tail_b_b      0x7b
#define INSTR_tail          0x7c
#define INSTR_tail_3_b      0x7d
#define INSTR_tail_4_b      0x7e
#define INSTR_tail_3_2      0x7f
#define INSTR_tail_3_3      0x80
#define INSTR_setHandler8   0x81
#define INSTR_callFastRTS0      0x83
#define INSTR_callFastRTS1      0x84
#define INSTR_callFastRTS2      0x85
#define INSTR_callFastRTS3      0x86
#define INSTR_callFastRTS4      0x87
#define INSTR_callFastRTS5      0x88
#define INSTR_callFullRTS0      0x89
#define INSTR_callFullRTS1      0x8a
#define INSTR_callFullRTS2      0x8b
#define INSTR_callFullRTS3      0x8c
#define INSTR_callFullRTS4      0x8d
#define INSTR_callFullRTS5      0x8e
#define INSTR_callFastRtoR      0x8f
#define INSTR_callFastGtoR      0x90
#define INSTR_notBoolean        0x91
#define INSTR_isTagged          0x92
#define INSTR_cellLength        0x93
#define INSTR_cellFlags         0x94
#define INSTR_clearMutable      0x95
#define INSTR_stringLength      0x96
#define INSTR_atomicIncr        0x97
#define INSTR_atomicDecr        0x98
#define INSTR_atomicReset       0x99
#define INSTR_longWToTagged     0x9a
#define INSTR_signedToLongW     0x9b
#define INSTR_unsignedToLongW   0x9c
#define INSTR_realAbs           0x9d
#define INSTR_realNeg           0x9e
#define INSTR_fixedIntToReal    0x9f
#define INSTR_equalWord         0xa0
#define INSTR_lessSigned        0xa2
#define INSTR_lessUnsigned      0xa3
#define INSTR_lessEqSigned      0xa4
#define INSTR_lessEqUnsigned    0xa5
#define INSTR_greaterSigned     0xa6
#define INSTR_greaterUnsigned   0xa7
#define INSTR_greaterEqSigned   0xa8
#define INSTR_greaterEqUnsigned 0xa9
#define INSTR_fixedAdd          0xaa
#define INSTR_fixedSub          0xab
#define INSTR_fixedMult         0xac
#define INSTR_fixedQuot         0xad
#define INSTR_fixedRem          0xae
#define INSTR_fixedDiv          0xaf
#define INSTR_fixedMod          0xb0
#define INSTR_wordAdd           0xb1
#define INSTR_wordSub           0xb2
#define INSTR_wordMult          0xb3
#define INSTR_wordDiv           0xb4
#define INSTR_wordMod           0xb5
#define INSTR_wordAnd           0xb7
#define INSTR_wordOr            0xb8
#define INSTR_wordXor           0xb9
#define INSTR_wordShiftLeft     0xba
#define INSTR_wordShiftRLog     0xbb
#define INSTR_wordShiftRArith   0xbc
#define INSTR_allocByteMem      0xbd
#define INSTR_lgWordEqual       0xbe
#define INSTR_lgWordLess        0xc0
#define INSTR_lgWordLessEq      0xc1
#define INSTR_lgWordGreater     0xc2
#define INSTR_lgWordGreaterEq   0xc3
#define INSTR_lgWordAdd         0xc4
#define INSTR_lgWordSub         0xc5
#define INSTR_lgWordMult        0xc6
#define INSTR_lgWordDiv         0xc7
#define INSTR_lgWordMod         0xc8
#define INSTR_lgWordAnd         0xc9
#define INSTR_lgWordOr          0xca
#define INSTR_lgWordXor         0xcb
#define INSTR_lgWordShiftLeft   0xcc
#define INSTR_lgWordShiftRLog   0xcd
#define INSTR_lgWordShiftRArith 0xce
#define INSTR_realEqual         0xcf
#define INSTR_realLess          0xd1
#define INSTR_realLessEq        0xd2
#define INSTR_realGreater       0xd3
#define INSTR_realGreaterEq     0xd4
#define INSTR_realAdd           0xd5
#define INSTR_realSub           0xd6
#define INSTR_realMult          0xd7
#define INSTR_realDiv           0xd8
#define INSTR_getThreadId       0xd9
#define INSTR_allocWordMemory   0xda
#define INSTR_loadMLWord        0xdb
#define INSTR_loadMLByte        0xdc
#define INSTR_loadC8            0xdd
#define INSTR_loadC16           0xde
#define INSTR_loadC32           0xdf
#define INSTR_loadC64           0xe0
#define INSTR_loadCFloat        0xe1
#define INSTR_loadCDouble       0xe2
#define INSTR_storeMLWord       0xe3
#define INSTR_storeMLByte       0xe4
#define INSTR_storeC8           0xe5
#define INSTR_storeC16          0xe6
#define INSTR_storeC32          0xe7
#define INSTR_storeC64          0xe8
#define INSTR_storeCFloat       0xe9
#define INSTR_storeCDouble      0xea
#define INSTR_blockMoveWord     0xeb
#define INSTR_blockMoveByte     0xec
#define INSTR_blockEqualByte    0xed
#define INSTR_blockCompareByte  0xee
#define INSTR_loadUntagged      0xef
#define INSTR_storeUntagged     0xf0
#define INSTR_deleteHandler     0xf1
#define INSTR_jump32            0xf2
#define INSTR_jump32False       0xf3
#define INSTR_constAddr32       0xf4
#define INSTR_setHandler32      0xf5
#define INSTR_case32            0xf6
#define INSTR_jump16            0xf7
#define INSTR_jump16false       0xf8
#define INSTR_setHandler16      0xf9
#define INSTR_constAddr8        0xfa
#define INSTR_stackSize8        0xfb
#define INSTR_stackSize16       0xfc

