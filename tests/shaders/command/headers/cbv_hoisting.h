static const DWORD cbv_hoisting_code_dxbc[] =
{
    0x43425844, 0x0ff40a34, 0xe72ddcb6, 0x2821e5e5, 0x57c71636, 0x00000001, 0x00000224, 0x00000003,
    0x0000002c, 0x0000003c, 0x0000004c, 0x4e475349, 0x00000008, 0x00000000, 0x00000008, 0x4e47534f,
    0x00000008, 0x00000000, 0x00000008, 0x58454853, 0x000001d0, 0x00050051, 0x00000074, 0x0100086a,
    0x07000059, 0x00308e46, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0x00000000, 0x07000859,
    0x00308e46, 0x00000001, 0x00000001, 0x00000001, 0x00000001, 0x00000000, 0x07000059, 0x00308e46,
    0x00000002, 0x00000002, 0x00000003, 0x00000001, 0x00000000, 0x0600009d, 0x0031ee46, 0x00000000,
    0x00000000, 0x00000000, 0x00000000, 0x0200005f, 0x00020012, 0x02000068, 0x00000001, 0x0400009b,
    0x00000004, 0x00000001, 0x00000001, 0x0200001f, 0x0002000a, 0x07000036, 0x00100022, 0x00000000,
    0x0030800a, 0x00000000, 0x00000000, 0x00000000, 0x01000012, 0x06000020, 0x00100012, 0x00000000,
    0x0002000a, 0x00004001, 0x00000002, 0x0304001f, 0x0010000a, 0x00000000, 0x07000036, 0x00100022,
    0x00000000, 0x0030800a, 0x00000002, 0x00000002, 0x00000000, 0x01000012, 0x06000020, 0x00100012,
    0x00000000, 0x0002000a, 0x00004001, 0x00000003, 0x0304001f, 0x0010000a, 0x00000000, 0x07000036,
    0x00100022, 0x00000000, 0x0030800a, 0x00000002, 0x00000003, 0x00000000, 0x01000012, 0x0600001e,
    0x00100012, 0x00000000, 0x0002000a, 0x00004001, 0xffffffff, 0x0a000036, 0x00100022, 0x00000000,
    0x8630800a, 0x00020001, 0x00000001, 0x00000001, 0x0010000a, 0x00000000, 0x00000000, 0x01000015,
    0x01000015, 0x01000015, 0x06000029, 0x00100012, 0x00000000, 0x0002000a, 0x00004001, 0x00000002,
    0x080000a6, 0x0021e012, 0x00000000, 0x00000000, 0x0010000a, 0x00000000, 0x0010001a, 0x00000000,
    0x0100003e,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE cbv_hoisting_dxbc = { cbv_hoisting_code_dxbc, sizeof(cbv_hoisting_code_dxbc) };
#undef UNUSED_ARRAY_ATTR
static const BYTE cbv_hoisting_code_dxil[] =
{
    0x44, 0x58, 0x42, 0x43, 0xfe, 0xf2, 0xc3, 0x4b, 0x56, 0x18, 0xb4, 0xc0, 0xca, 0x2d, 0x9d, 0x83, 0xc4, 0x57, 0x05, 0x07, 0x01, 0x00, 0x00, 0x00, 0x7c, 0x07, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
    0x38, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x3c, 0x01, 0x00, 0x00, 0x53, 0x46, 0x49, 0x30, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x31, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x4f, 0x53, 0x47, 0x31, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x53, 0x56, 0x30, 0xb0, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x48, 0x41, 0x53, 0x48, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x9b, 0xa7, 0xa6, 0x82, 0x25, 0x3c, 0xf8, 0xab, 0xeb, 0x7c, 0x44, 0xf4, 0xb3, 0x42, 0xe6, 0x88, 0x44, 0x58, 0x49, 0x4c,
    0x38, 0x06, 0x00, 0x00, 0x60, 0x00, 0x05, 0x00, 0x8e, 0x01, 0x00, 0x00, 0x44, 0x58, 0x49, 0x4c, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x20, 0x06, 0x00, 0x00, 0x42, 0x43, 0xc0, 0xde,
    0x21, 0x0c, 0x00, 0x00, 0x85, 0x01, 0x00, 0x00, 0x0b, 0x82, 0x20, 0x00, 0x02, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x07, 0x81, 0x23, 0x91, 0x41, 0xc8, 0x04, 0x49, 0x06, 0x10, 0x32, 0x39,
    0x92, 0x01, 0x84, 0x0c, 0x25, 0x05, 0x08, 0x19, 0x1e, 0x04, 0x8b, 0x62, 0x80, 0x14, 0x45, 0x02, 0x42, 0x92, 0x0b, 0x42, 0xa4, 0x10, 0x32, 0x14, 0x38, 0x08, 0x18, 0x4b, 0x0a, 0x32, 0x52, 0x88,
    0x48, 0x90, 0x14, 0x20, 0x43, 0x46, 0x88, 0xa5, 0x00, 0x19, 0x32, 0x42, 0xe4, 0x48, 0x0e, 0x90, 0x91, 0x22, 0xc4, 0x50, 0x41, 0x51, 0x81, 0x8c, 0xe1, 0x83, 0xe5, 0x8a, 0x04, 0x29, 0x46, 0x06,
    0x51, 0x18, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1b, 0x8c, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x07, 0x40, 0x02, 0xa8, 0x0d, 0x86, 0xf0, 0xff, 0xff, 0xff, 0xff, 0x03, 0x20, 0x01, 0xd5, 0x06, 0x62,
    0xf8, 0xff, 0xff, 0xff, 0xff, 0x01, 0x90, 0x00, 0x49, 0x18, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x13, 0x82, 0x60, 0x42, 0x20, 0x4c, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x89, 0x20, 0x00, 0x00,
    0x2c, 0x00, 0x00, 0x00, 0x32, 0x22, 0x48, 0x09, 0x20, 0x64, 0x85, 0x04, 0x93, 0x22, 0xa4, 0x84, 0x04, 0x93, 0x22, 0xe3, 0x84, 0xa1, 0x90, 0x14, 0x12, 0x4c, 0x8a, 0x8c, 0x0b, 0x84, 0xa4, 0x4c,
    0x10, 0x7c, 0x23, 0x00, 0x25, 0x00, 0x14, 0xe6, 0x08, 0xc0, 0xa0, 0x0c, 0x63, 0x0c, 0x22, 0x47, 0x0d, 0x97, 0x3f, 0x61, 0x0f, 0x21, 0xf9, 0xdc, 0x46, 0x15, 0x2b, 0x31, 0xf9, 0xc8, 0x6d, 0x23,
    0x62, 0x8c, 0x31, 0xe6, 0x08, 0x10, 0x3a, 0xf7, 0x0c, 0x97, 0x3f, 0x61, 0x0f, 0x21, 0xf9, 0x21, 0xd0, 0x0c, 0x0b, 0x81, 0x02, 0x54, 0x08, 0x33, 0xd2, 0x20, 0x35, 0x47, 0x10, 0x14, 0x23, 0x8d,
    0x33, 0x06, 0xa3, 0x56, 0x14, 0x30, 0xd2, 0x18, 0x63, 0x8c, 0x71, 0xe8, 0x0d, 0x04, 0x9c, 0x26, 0x4d, 0x11, 0x25, 0x4c, 0xfe, 0x0a, 0x6f, 0xd8, 0x44, 0x68, 0xc3, 0x10, 0x11, 0x92, 0xb4, 0x51,
    0x45, 0x41, 0x44, 0x28, 0x18, 0x24, 0xaf, 0x10, 0x02, 0xaa, 0xa0, 0x51, 0x30, 0x88, 0x1e, 0x22, 0x4d, 0x11, 0x25, 0x4c, 0x3e, 0x87, 0x82, 0x71, 0x85, 0x10, 0x50, 0x45, 0x8d, 0x02, 0x9b, 0x01,
    0x97, 0xf0, 0x15, 0x42, 0x40, 0x15, 0x12, 0x0a, 0x6c, 0x0a, 0x68, 0xda, 0x73, 0x04, 0xa0, 0x30, 0x05, 0x00, 0x00, 0x00, 0x13, 0x14, 0x72, 0xc0, 0x87, 0x74, 0x60, 0x87, 0x36, 0x68, 0x87, 0x79,
    0x68, 0x03, 0x72, 0xc0, 0x87, 0x0d, 0xaf, 0x50, 0x0e, 0x6d, 0xd0, 0x0e, 0x7a, 0x50, 0x0e, 0x6d, 0x00, 0x0f, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0xa0,
    0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x78, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x90, 0x0e, 0x71, 0x60, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xd0, 0x06, 0xe9, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x73,
    0x20, 0x07, 0x6d, 0x90, 0x0e, 0x76, 0x40, 0x07, 0x7a, 0x60, 0x07, 0x74, 0xd0, 0x06, 0xe6, 0x10, 0x07, 0x76, 0xa0, 0x07, 0x73, 0x20, 0x07, 0x6d, 0x60, 0x0e, 0x73, 0x20, 0x07, 0x7a, 0x30, 0x07,
    0x72, 0xd0, 0x06, 0xe6, 0x60, 0x07, 0x74, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x6d, 0xe0, 0x0e, 0x78, 0xa0, 0x07, 0x71, 0x60, 0x07, 0x7a, 0x30, 0x07, 0x72, 0xa0, 0x07, 0x76, 0x40, 0x07, 0x43, 0x9e,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x3c, 0x04, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x79, 0x14, 0x20, 0x00, 0x04, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0xf2, 0x34, 0x40, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0xe4, 0x79, 0x80, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
    0x0b, 0x04, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x32, 0x1e, 0x98, 0x14, 0x19, 0x11, 0x4c, 0x90, 0x8c, 0x09, 0x26, 0x47, 0xc6, 0x04, 0x43, 0x1a, 0x25, 0x30, 0x02, 0x50, 0x10, 0xc5, 0x50, 0x16,
    0x85, 0x50, 0x04, 0xc4, 0x46, 0x00, 0xa8, 0x17, 0x08, 0xd5, 0x19, 0x00, 0xca, 0x33, 0x00, 0xc4, 0x67, 0x00, 0x68, 0xce, 0x00, 0x00, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00,
    0x1a, 0x03, 0x4c, 0x90, 0x46, 0x02, 0x13, 0x44, 0x8f, 0x0c, 0x6f, 0xec, 0xed, 0x4d, 0x0c, 0x24, 0xc6, 0x05, 0xc7, 0x45, 0x86, 0x06, 0x66, 0xc6, 0x65, 0x86, 0x06, 0x04, 0x65, 0x2c, 0xc7, 0xc6,
    0x06, 0x26, 0x0c, 0x67, 0x0c, 0x26, 0x65, 0x43, 0x10, 0x4c, 0x10, 0x86, 0x62, 0x82, 0x30, 0x18, 0x1b, 0x84, 0x81, 0x98, 0x20, 0x0c, 0xc7, 0x06, 0x61, 0x30, 0x28, 0x8c, 0xcd, 0x4d, 0x10, 0x06,
    0x64, 0xc3, 0x80, 0x24, 0xc4, 0x04, 0x61, 0x8a, 0x08, 0x4c, 0x10, 0x86, 0x64, 0x82, 0xc0, 0x30, 0x1b, 0x16, 0x62, 0x61, 0x08, 0x62, 0x68, 0x1c, 0xc7, 0x01, 0x36, 0x04, 0xcf, 0x04, 0xa1, 0x72,
    0x26, 0x08, 0x83, 0xb2, 0x01, 0x21, 0x22, 0x86, 0x20, 0x06, 0x09, 0x98, 0x20, 0x64, 0xcf, 0x06, 0x64, 0xa0, 0x18, 0x62, 0x18, 0x24, 0x60, 0x82, 0x30, 0x2c, 0x13, 0x04, 0x0e, 0xda, 0x80, 0x58,
    0x17, 0x43, 0x58, 0x96, 0x04, 0x6c, 0x18, 0xa6, 0x0a, 0xdb, 0x40, 0x00, 0x50, 0x06, 0x4c, 0x10, 0x04, 0x80, 0x44, 0x5b, 0x58, 0x9a, 0xdb, 0x04, 0xa1, 0x6b, 0x36, 0x0c, 0xd2, 0x30, 0x6c, 0x20,
    0x88, 0x4e, 0xf2, 0x36, 0x14, 0x1b, 0x07, 0x68, 0x5f, 0x15, 0x36, 0x36, 0xbb, 0x36, 0x97, 0x34, 0xb2, 0x32, 0x37, 0xba, 0x29, 0x41, 0x50, 0x85, 0x0c, 0xcf, 0xc5, 0xae, 0x4c, 0x6e, 0x2e, 0xed,
    0xcd, 0x6d, 0x4a, 0x40, 0x34, 0x21, 0xc3, 0x73, 0xb1, 0x0b, 0x63, 0xb3, 0x2b, 0x93, 0x9b, 0x12, 0x18, 0x75, 0xc8, 0xf0, 0x5c, 0xe6, 0xd0, 0xc2, 0xc8, 0xca, 0xe4, 0x9a, 0xde, 0xc8, 0xca, 0xd8,
    0xa6, 0x04, 0x49, 0x19, 0x32, 0x3c, 0x17, 0xb9, 0xb2, 0xb9, 0xb7, 0x3a, 0xb9, 0xb1, 0xb2, 0xb9, 0x29, 0x41, 0x56, 0x87, 0x0c, 0xcf, 0xa5, 0xcc, 0x8d, 0x4e, 0x2e, 0x0f, 0xea, 0x2d, 0xcd, 0x8d,
    0x6e, 0x6e, 0x4a, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x79, 0x18, 0x00, 0x00, 0x56, 0x00, 0x00, 0x00, 0x33, 0x08, 0x80, 0x1c, 0xc4, 0xe1, 0x1c, 0x66, 0x14, 0x01, 0x3d, 0x88, 0x43, 0x38, 0x84, 0xc3,
    0x8c, 0x42, 0x80, 0x07, 0x79, 0x78, 0x07, 0x73, 0x98, 0x71, 0x0c, 0xe6, 0x00, 0x0f, 0xed, 0x10, 0x0e, 0xf4, 0x80, 0x0e, 0x33, 0x0c, 0x42, 0x1e, 0xc2, 0xc1, 0x1d, 0xce, 0xa1, 0x1c, 0x66, 0x30,
    0x05, 0x3d, 0x88, 0x43, 0x38, 0x84, 0x83, 0x1b, 0xcc, 0x03, 0x3d, 0xc8, 0x43, 0x3d, 0x8c, 0x03, 0x3d, 0xcc, 0x78, 0x8c, 0x74, 0x70, 0x07, 0x7b, 0x08, 0x07, 0x79, 0x48, 0x87, 0x70, 0x70, 0x07,
    0x7a, 0x70, 0x03, 0x76, 0x78, 0x87, 0x70, 0x20, 0x87, 0x19, 0xcc, 0x11, 0x0e, 0xec, 0x90, 0x0e, 0xe1, 0x30, 0x0f, 0x6e, 0x30, 0x0f, 0xe3, 0xf0, 0x0e, 0xf0, 0x50, 0x0e, 0x33, 0x10, 0xc4, 0x1d,
    0xde, 0x21, 0x1c, 0xd8, 0x21, 0x1d, 0xc2, 0x61, 0x1e, 0x66, 0x30, 0x89, 0x3b, 0xbc, 0x83, 0x3b, 0xd0, 0x43, 0x39, 0xb4, 0x03, 0x3c, 0xbc, 0x83, 0x3c, 0x84, 0x03, 0x3b, 0xcc, 0xf0, 0x14, 0x76,
    0x60, 0x07, 0x7b, 0x68, 0x07, 0x37, 0x68, 0x87, 0x72, 0x68, 0x07, 0x37, 0x80, 0x87, 0x70, 0x90, 0x87, 0x70, 0x60, 0x07, 0x76, 0x28, 0x07, 0x76, 0xf8, 0x05, 0x76, 0x78, 0x87, 0x77, 0x80, 0x87,
    0x5f, 0x08, 0x87, 0x71, 0x18, 0x87, 0x72, 0x98, 0x87, 0x79, 0x98, 0x81, 0x2c, 0xee, 0xf0, 0x0e, 0xee, 0xe0, 0x0e, 0xf5, 0xc0, 0x0e, 0xec, 0x30, 0x03, 0x62, 0xc8, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c,
    0xcc, 0xa1, 0x1c, 0xe4, 0xa1, 0x1c, 0xdc, 0x61, 0x1c, 0xca, 0x21, 0x1c, 0xc4, 0x81, 0x1d, 0xca, 0x61, 0x06, 0xd6, 0x90, 0x43, 0x39, 0xc8, 0x43, 0x39, 0x98, 0x43, 0x39, 0xc8, 0x43, 0x39, 0xb8,
    0xc3, 0x38, 0x94, 0x43, 0x38, 0x88, 0x03, 0x3b, 0x94, 0xc3, 0x2f, 0xbc, 0x83, 0x3c, 0xfc, 0x82, 0x3b, 0xd4, 0x03, 0x3b, 0xb0, 0xc3, 0x0c, 0xc4, 0x21, 0x07, 0x7c, 0x70, 0x03, 0x7a, 0x28, 0x87,
    0x76, 0x80, 0x87, 0x19, 0xd1, 0x43, 0x0e, 0xf8, 0xe0, 0x06, 0xe4, 0x20, 0x0e, 0xe7, 0xe0, 0x06, 0xf6, 0x10, 0x0e, 0xf2, 0xc0, 0x0e, 0xe1, 0x90, 0x0f, 0xef, 0x50, 0x0f, 0xf4, 0x30, 0xc3, 0x81,
    0xc8, 0x01, 0x1f, 0xdc, 0xc0, 0x1d, 0xde, 0xc1, 0x1d, 0xea, 0xc1, 0x1d, 0xd2, 0xc1, 0x1c, 0xde, 0x41, 0x1e, 0xda, 0x61, 0x06, 0x13, 0x91, 0x03, 0x3e, 0xb8, 0x81, 0x38, 0xc8, 0x43, 0x39, 0x84,
    0xc3, 0x3a, 0xb8, 0x81, 0x38, 0xc8, 0x03, 0x00, 0x71, 0x20, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x46, 0x50, 0x0d, 0x97, 0xef, 0x3c, 0x7e, 0x40, 0x15, 0x05, 0x11, 0xb1, 0x93, 0x13, 0x11, 0x3e,
    0x72, 0xdb, 0x26, 0xb0, 0x0d, 0x97, 0xef, 0x3c, 0xbe, 0x10, 0x50, 0x45, 0x41, 0x44, 0xa5, 0x03, 0x0c, 0x25, 0x61, 0x00, 0x02, 0xe6, 0x23, 0xb7, 0x6d, 0x03, 0xd2, 0x70, 0xf9, 0xce, 0xe3, 0x0b,
    0x11, 0x01, 0x4c, 0x44, 0x08, 0x34, 0xc3, 0x42, 0x58, 0x80, 0x34, 0x5c, 0xbe, 0xf3, 0xf8, 0xd3, 0x11, 0x11, 0xc0, 0x20, 0x0e, 0x3e, 0x72, 0xdb, 0x06, 0x40, 0x30, 0x00, 0xd2, 0x00, 0x00, 0x00,
    0x61, 0x20, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x13, 0x04, 0x48, 0x2c, 0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x34, 0x4a, 0xae, 0xec, 0x66, 0x00, 0xca, 0xa0, 0x74, 0x03, 0x6a, 0xa0,
    0x14, 0x03, 0xe8, 0x14, 0x41, 0x09, 0x10, 0xab, 0x01, 0x00, 0x00, 0x00, 0x23, 0x06, 0x09, 0x00, 0x82, 0x60, 0xd0, 0x64, 0x8a, 0x60, 0x59, 0xd0, 0x88, 0x41, 0x02, 0x80, 0x20, 0x18, 0x34, 0xda,
    0x42, 0x5c, 0x57, 0x34, 0x62, 0x90, 0x00, 0x20, 0x08, 0x06, 0xcd, 0xc6, 0x14, 0x53, 0x22, 0x8d, 0x18, 0x24, 0x00, 0x08, 0x82, 0x41, 0xc3, 0x35, 0x06, 0x45, 0x4d, 0x23, 0x06, 0x06, 0x00, 0x82,
    0x60, 0x40, 0x7c, 0x8a, 0x36, 0xdc, 0x10, 0x6c, 0x60, 0x30, 0xcb, 0x10, 0x08, 0xc1, 0x88, 0xc1, 0x01, 0x80, 0x20, 0x18, 0x28, 0x60, 0xf0, 0x14, 0xdc, 0x68, 0x42, 0x00, 0xcc, 0x12, 0x1c, 0xc3,
    0x0d, 0x44, 0x06, 0x06, 0xb3, 0x0c, 0x03, 0x11, 0x8c, 0x18, 0x1c, 0x00, 0x08, 0x82, 0x81, 0x32, 0x06, 0x92, 0xf1, 0x8d, 0x26, 0x04, 0xc0, 0x2c, 0xc1, 0x31, 0xdc, 0x70, 0x48, 0x60, 0x30, 0xcb,
    0x50, 0x18, 0xc1, 0x88, 0xc1, 0x01, 0x80, 0x20, 0x18, 0x28, 0x66, 0x50, 0x29, 0x62, 0x30, 0x9a, 0x10, 0x00, 0xb3, 0x04, 0x47, 0x29, 0x13, 0x54, 0x60, 0x06, 0x30, 0x62, 0x90, 0x00, 0x20, 0x08,
    0x06, 0x4d, 0x1a, 0x68, 0xd3, 0x19, 0x04, 0xd1, 0x88, 0xc1, 0x01, 0x80, 0x20, 0x18, 0x28, 0x6b, 0xa0, 0x05, 0x67, 0x30, 0x9a, 0x10, 0x00, 0xb3, 0x04, 0xc7, 0x40, 0xc9, 0x80, 0x05, 0xd2, 0xc0,
    0x14, 0x82, 0x51, 0x50, 0x19, 0xdc, 0x88, 0x41, 0x03, 0x80, 0x20, 0x18, 0x3c, 0x6d, 0x90, 0x55, 0x41, 0x27, 0x74, 0x5d, 0x77, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
#ifdef __GNUC__
#define UNUSED_ARRAY_ATTR __attribute__((unused))
#else
#define UNUSED_ARRAY_ATTR
#endif
UNUSED_ARRAY_ATTR static const D3D12_SHADER_BYTECODE cbv_hoisting_dxil = { cbv_hoisting_code_dxil, sizeof(cbv_hoisting_code_dxil) };
#undef UNUSED_ARRAY_ATTR