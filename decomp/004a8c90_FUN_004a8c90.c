// FUN_004a8c90 @ 4a8c90 size=6918

undefined4 __thiscall FUN_004a8c90(int *param_1,int *param_2)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined2 extraout_var;
  char *pcVar9;
  char *pcVar10;
  char acStack_100 [256];
  
  uVar5 = (**(code **)(*param_2 + 8))();
  switch(uVar5) {
  case 0x17:
    uVar5 = (**(code **)(*param_1 + 0x238))(param_2);
    return uVar5;
  case 0x18:
    uVar5 = (**(code **)(*param_1 + 0x234))(param_2);
    return uVar5;
  case 0x19:
    uVar5 = (**(code **)(*param_1 + 0x230))(param_2);
    return uVar5;
  case 0x1a:
    uVar5 = (**(code **)(*param_1 + 0x22c))(param_2);
    return uVar5;
  case 0x1b:
    uVar5 = (**(code **)(*param_1 + 0x228))(param_2);
    return uVar5;
  case 0x35:
    uVar5 = (**(code **)(*param_1 + 500))(param_2);
    return uVar5;
  case 0x36:
    uVar5 = (**(code **)(*param_1 + 0x110))(param_2);
    return uVar5;
  case 0x3a:
    uVar5 = (**(code **)(*param_1 + 0x210))(param_2);
    return uVar5;
  case 0x3b:
    cVar4 = FUN_00444290();
    if (cVar4 != '\0') {
      uVar7 = 0xffffffff;
      pcVar9 = (char *)(param_2[1] + 0x14);
      do {
        pcVar10 = pcVar9;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar10 = pcVar9 + 1;
        cVar4 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar4 != '\0');
      uVar7 = ~uVar7;
      pcVar9 = pcVar10 + -uVar7;
      pcVar10 = acStack_100;
      for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
      FUN_00583250(4,acStack_100);
      FUN_005830c0();
    }
    break;
  case 0x41:
    uVar5 = (**(code **)(*param_1 + 0x1f8))(param_2);
    return uVar5;
  case 0x4d:
    uVar5 = (**(code **)(*param_1 + 0x130))(param_2);
    return uVar5;
  case 0x55:
    uVar5 = (**(code **)(*param_1 + 0x21c))(param_2);
    return uVar5;
  case 0x56:
    uVar5 = (**(code **)(*param_1 + 0x220))(param_2);
    return uVar5;
  case 0x58:
    uVar5 = (**(code **)(*param_1 + 0x224))(param_2);
    return uVar5;
  case 0x62:
    uVar5 = (**(code **)(*param_1 + 0x134))(param_2);
    return uVar5;
  case 99:
    uVar5 = (**(code **)(*param_1 + 0x2b8))(param_2);
    return uVar5;
  case 0x66:
    uVar5 = (**(code **)(*param_1 + 0x248))(param_2);
    return uVar5;
  case 0x67:
    uVar5 = (**(code **)(*param_1 + 0x24c))(param_2);
    return uVar5;
  case 0x68:
    uVar5 = (**(code **)(*param_1 + 0x254))(param_2);
    return uVar5;
  case 0x69:
    uVar5 = (**(code **)(*param_1 + 0x250))(param_2);
    return uVar5;
  case 0x6a:
    uVar5 = (**(code **)(*param_1 + 600))(param_2);
    return uVar5;
  case 0x6b:
    uVar5 = (**(code **)(*param_1 + 0x25c))(param_2);
    return uVar5;
  case 0x6c:
    uVar5 = (**(code **)(*param_1 + 0x264))(param_2);
    return uVar5;
  case 0x6d:
    uVar5 = (**(code **)(*param_1 + 0x260))(param_2);
    return uVar5;
  case 0x70:
    uVar5 = (**(code **)(*param_1 + 0x268))(param_2);
    return uVar5;
  case 0x71:
    uVar5 = (**(code **)(*param_1 + 0x26c))(param_2);
    return uVar5;
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
    uVar5 = (**(code **)(*param_1 + 0x394))(param_2);
    return uVar5;
  case 0x79:
    uVar5 = (**(code **)(*param_1 + 0x2d0))(param_2);
    return uVar5;
  case 0x7c:
    uVar5 = (**(code **)(*param_1 + 0x1d0))(param_2);
    return uVar5;
  case 0x7d:
    uVar5 = (**(code **)(*param_1 + 0x1d4))(param_2);
    return uVar5;
  case 0x7e:
    uVar5 = (**(code **)(*param_1 + 0x1d8))(param_2);
    return uVar5;
  case 0x7f:
    uVar5 = (**(code **)(*param_1 + 0x1dc))(param_2);
    return uVar5;
  case 0x80:
    uVar5 = (**(code **)(*param_1 + 0x1e4))(param_2);
    return uVar5;
  case 0x81:
    uVar5 = (**(code **)(*param_1 + 0x1e0))(param_2);
    return uVar5;
  case 0x82:
    uVar5 = (**(code **)(*param_1 + 0x1e8))(param_2);
    return uVar5;
  case 0x87:
    uVar5 = (**(code **)(*param_1 + 0x138))(param_2);
    return uVar5;
  case 0x89:
    uVar5 = (**(code **)(*param_1 + 0x11c))(param_2);
    return uVar5;
  case 0x8c:
    uVar5 = (**(code **)(*param_1 + 0x214))(param_2);
    return uVar5;
  case 0x8d:
    uVar5 = (**(code **)(*param_1 + 0x23c))(param_2);
    return uVar5;
  case 0x8e:
    uVar5 = (**(code **)(*param_1 + 0x218))(param_2);
    return uVar5;
  case 0x91:
    uVar5 = (**(code **)(*param_1 + 0x1fc))(param_2);
    return uVar5;
  case 0x9b:
    uVar5 = (**(code **)(*param_1 + 0x1ec))(param_2);
    return uVar5;
  case 0xa0:
    uVar5 = (**(code **)(*param_1 + 300))(param_2);
    return uVar5;
  case 0xa1:
    uVar5 = (**(code **)(*param_1 + 0x28c))(param_2);
    return uVar5;
  case 0xa7:
    uVar5 = (**(code **)(*param_1 + 0x290))(param_2);
    return uVar5;
  case 0xa8:
    uVar5 = (**(code **)(*param_1 + 0x298))(param_2);
    return uVar5;
  case 0xaa:
    uVar5 = (**(code **)(*param_1 + 0xdc))(1);
    return uVar5;
  case 0xab:
    uVar5 = (**(code **)(*param_1 + 0xdc))(0);
    return uVar5;
  case 0xb7:
    uVar5 = (**(code **)(*param_1 + 0x1b0))(param_2);
    return uVar5;
  case 0xb8:
    uVar5 = (**(code **)(*param_1 + 0x1a8))(param_2);
    return uVar5;
  case 0xb9:
    uVar5 = (**(code **)(*param_1 + 0x1ac))(param_2);
    return uVar5;
  case 0xbb:
    uVar5 = (**(code **)(*param_1 + 0x1c4))(param_2);
    return uVar5;
  case 0xbc:
    uVar5 = (**(code **)(*param_1 + 0x1c8))(param_2);
    return uVar5;
  case 0xbd:
    uVar5 = (**(code **)(*param_1 + 0x1b8))(param_2);
    return uVar5;
  case 0xbe:
    uVar5 = (**(code **)(*param_1 + 0x1bc))(param_2);
    return uVar5;
  case 0xbf:
    uVar5 = (**(code **)(*param_1 + 0x1c0))(param_2);
    return uVar5;
  case 0xc0:
    uVar5 = (**(code **)(*param_1 + 0x170))(param_2);
    return uVar5;
  case 0xd1:
    uVar5 = (**(code **)(*param_1 + 0x164))(param_2);
    return uVar5;
  case 0xd2:
    uVar5 = (**(code **)(*param_1 + 0x168))(param_2);
    return uVar5;
  case 0xd3:
    uVar5 = (**(code **)(*param_1 + 0x16c))(param_2);
    return uVar5;
  case 0xd4:
    uVar5 = (**(code **)(*param_1 + 0x180))(param_2);
    return uVar5;
  case 0xd5:
    uVar5 = (**(code **)(*param_1 + 0x184))(param_2);
    return uVar5;
  case 0xd6:
    uVar5 = (**(code **)(*param_1 + 0x188))(param_2);
    return uVar5;
  case 0xd7:
    uVar5 = (**(code **)(*param_1 + 0x18c))(param_2);
    return uVar5;
  case 0xd8:
    uVar5 = (**(code **)(*param_1 + 400))(param_2);
    return uVar5;
  case 0xd9:
    uVar5 = (**(code **)(*param_1 + 0x194))(param_2);
    return uVar5;
  case 0xda:
    uVar5 = (**(code **)(*param_1 + 0x198))(param_2);
    return uVar5;
  case 0xdb:
    uVar5 = (**(code **)(*param_1 + 0x1a0))(param_2);
    return uVar5;
  case 0xdc:
    uVar5 = (**(code **)(*param_1 + 0x19c))(param_2);
    return uVar5;
  case 0xdd:
    uVar5 = (**(code **)(*param_1 + 0x1a4))(param_2);
    return uVar5;
  case 0xde:
    uVar5 = (**(code **)(*param_1 + 0x174))(param_2);
    return uVar5;
  case 0xdf:
    uVar5 = (**(code **)(*param_1 + 0x178))(param_2);
    return uVar5;
  case 0xe0:
    uVar5 = (**(code **)(*param_1 + 0x17c))(param_2);
    return uVar5;
  case 0xe1:
    uVar5 = (**(code **)(*param_1 + 0x1b4))(param_2);
    return uVar5;
  case 0xe2:
    uVar5 = (**(code **)(*param_1 + 0x160))(param_2);
    return uVar5;
  case 0xe3:
    uVar5 = (**(code **)(*param_1 + 0x118))(param_2);
    return uVar5;
  case 0xe5:
    uVar5 = (**(code **)(*param_1 + 0xe0))(param_2);
    return uVar5;
  case 0xe7:
    uVar5 = (**(code **)(*param_1 + 0x104))(param_2);
    return uVar5;
  case 0xf6:
    uVar5 = (**(code **)(*param_1 + 0x244))(param_2);
    return uVar5;
  case 0x103:
    uVar5 = (**(code **)(*param_1 + 0x14c))(param_2);
    return uVar5;
  case 0x104:
    uVar5 = (**(code **)(*param_1 + 0x150))(param_2);
    return uVar5;
  case 0x105:
    uVar5 = (**(code **)(*param_1 + 0x154))(param_2);
    return uVar5;
  case 0x106:
    uVar5 = (**(code **)(*param_1 + 0x158))(param_2);
    return uVar5;
  case 0x107:
    uVar5 = (**(code **)(*param_1 + 0x15c))(param_2);
    return uVar5;
  case 0x10a:
    uVar5 = (**(code **)(*param_1 + 0x120))(param_2);
    return uVar5;
  case 0x10b:
    uVar5 = (**(code **)(*param_1 + 0x240))(param_2);
    return uVar5;
  case 0x10e:
    uVar5 = (**(code **)(*param_1 + 0x29c))(param_2);
    return uVar5;
  case 0x116:
    fVar1 = *(float *)(param_2[1] + 0x12);
    switch(*(undefined4 *)(param_2[1] + 0xe)) {
    case 1:
      *(float *)((int)param_1 + 0x384a) = fVar1 + *(float *)((int)param_1 + 0x384a);
      uVar5 = (**(code **)(*param_1 + 0x294))(param_2);
      return uVar5;
    case 2:
      *(float *)((int)param_1 + 0x384e) = fVar1 + *(float *)((int)param_1 + 0x384e);
      uVar5 = (**(code **)(*param_1 + 0x294))(param_2);
      return uVar5;
    case 3:
      *(float *)((int)param_1 + 0x3832) = fVar1 + *(float *)((int)param_1 + 0x3832);
      uVar5 = (**(code **)(*param_1 + 0x294))(param_2);
      return uVar5;
    case 4:
      *(float *)((int)param_1 + 0x3836) = fVar1 + *(float *)((int)param_1 + 0x3836);
      uVar5 = (**(code **)(*param_1 + 0x294))(param_2);
      return uVar5;
    case 5:
      *(float *)((int)param_1 + 0x3852) = fVar1 + *(float *)((int)param_1 + 0x3852);
      uVar5 = (**(code **)(*param_1 + 0x294))(param_2);
      return uVar5;
    case 6:
      *(float *)((int)param_1 + 0x3856) = fVar1 + *(float *)((int)param_1 + 0x3856);
      uVar5 = (**(code **)(*param_1 + 0x294))(param_2);
      return uVar5;
    case 7:
      *(float *)((int)param_1 + 0x383a) = fVar1 + *(float *)((int)param_1 + 0x383a);
      uVar5 = (**(code **)(*param_1 + 0x294))(param_2);
      return uVar5;
    case 8:
      *(float *)((int)param_1 + 0x3846) = fVar1 + *(float *)((int)param_1 + 0x3846);
      uVar5 = (**(code **)(*param_1 + 0x294))(param_2);
      return uVar5;
    case 9:
      *(float *)((int)param_1 + 0x3842) = fVar1 + *(float *)((int)param_1 + 0x3842);
      uVar5 = (**(code **)(*param_1 + 0x294))(param_2);
      return uVar5;
    case 10:
      *(float *)((int)param_1 + 0x383e) = fVar1 + *(float *)((int)param_1 + 0x383e);
    }
  case 0x1d0:
    uVar5 = (**(code **)(*param_1 + 0x294))(param_2);
    return uVar5;
  case 0x11b:
    uVar5 = (**(code **)(*param_1 + 0x2a0))(param_2);
    return uVar5;
  case 0x11c:
    uVar5 = (**(code **)(*param_1 + 0x2a4))(param_2);
    return uVar5;
  case 0x11d:
    uVar5 = (**(code **)(*param_1 + 0x2a8))(param_2);
    return uVar5;
  case 0x11e:
    uVar5 = (**(code **)(*param_1 + 0x2ac))(param_2);
    return uVar5;
  case 0x125:
    uVar5 = (**(code **)(*param_1 + 0x2b4))(param_2);
    return uVar5;
  case 0x126:
    uVar5 = (**(code **)(*param_1 + 0x148))(param_2);
    return uVar5;
  case 0x127:
    uVar5 = (**(code **)(*param_1 + 0x140))(param_2);
    return uVar5;
  case 0x128:
    uVar5 = (**(code **)(*param_1 + 0x13c))(param_2);
    return uVar5;
  case 0x129:
    uVar5 = (**(code **)(*param_1 + 0x144))(param_2);
    return uVar5;
  case 0x12d:
    uVar5 = (**(code **)(*param_1 + 0x1cc))(param_2);
    return uVar5;
  case 0x137:
    FUN_006cb0f0(*(undefined4 *)(param_2[1] + 0x12),*(undefined4 *)(param_2[1] + 0xe));
    return 3;
  case 0x138:
    uVar5 = (**(code **)(*param_1 + 0x2b0))(param_2);
    return uVar5;
  case 0x13b:
    uVar5 = (**(code **)(*param_1 + 0xf8))(param_2);
    return uVar5;
  case 0x13c:
    uVar5 = (**(code **)(*param_1 + 0xfc))(param_2);
    return uVar5;
  case 0x13d:
    uVar5 = (**(code **)(*param_1 + 0x280))(param_2);
    return uVar5;
  case 0x13f:
    uVar5 = (**(code **)(*param_1 + 0x10c))(param_2);
    return uVar5;
  case 0x140:
    uVar5 = (**(code **)(*param_1 + 0x100))(param_2);
    return uVar5;
  case 0x141:
    uVar5 = (**(code **)(*param_1 + 0x1f0))(param_2);
    return uVar5;
  case 0x147:
    uVar5 = (**(code **)(*param_1 + 0x108))(param_2);
    return uVar5;
  case 0x148:
    uVar5 = (**(code **)(*param_1 + 0x114))(param_2);
    return uVar5;
  case 0x149:
    uVar5 = (**(code **)(*param_1 + 0x33c))(param_2);
    return uVar5;
  case 0x14a:
    uVar5 = (**(code **)(*param_1 + 0x354))(param_2);
    return uVar5;
  case 0x14b:
    uVar5 = (**(code **)(*param_1 + 0x358))(param_2);
    return uVar5;
  case 0x14c:
    uVar5 = (**(code **)(*param_1 + 0x340))(param_2);
    return uVar5;
  case 0x14d:
    uVar5 = (**(code **)(*param_1 + 0x344))(param_2);
    return uVar5;
  case 0x14e:
    uVar5 = (**(code **)(*param_1 + 0x348))(param_2);
    return uVar5;
  case 0x14f:
    uVar5 = (**(code **)(*param_1 + 0x34c))(param_2);
    return uVar5;
  case 0x150:
    uVar5 = (**(code **)(*param_1 + 0x350))(param_2);
    return uVar5;
  case 0x152:
    uVar5 = (**(code **)(*param_1 + 0x368))(param_2);
    return uVar5;
  case 0x153:
    uVar5 = (**(code **)(*param_1 + 0x36c))(param_2);
    return uVar5;
  case 0x154:
    uVar5 = (**(code **)(*param_1 + 0x374))(param_2);
    return uVar5;
  case 0x155:
    uVar5 = (**(code **)(*param_1 + 0x364))(param_2);
    return uVar5;
  case 0x156:
    uVar5 = (**(code **)(*param_1 + 0x328))(param_2);
    return uVar5;
  case 0x157:
    uVar5 = (**(code **)(*param_1 + 0x334))(param_2);
    return uVar5;
  case 0x158:
    uVar5 = (**(code **)(*param_1 + 800))(param_2);
    return uVar5;
  case 0x159:
    uVar5 = (**(code **)(*param_1 + 0x338))(param_2);
    return uVar5;
  case 0x15a:
    uVar5 = (**(code **)(*param_1 + 0x35c))(param_2);
    return uVar5;
  case 0x15b:
    uVar5 = (**(code **)(*param_1 + 0x360))(param_2);
    return uVar5;
  case 0x15c:
    uVar5 = (**(code **)(*param_1 + 0x37c))(param_2);
    return uVar5;
  case 0x15d:
  case 0x15e:
  case 0x15f:
  case 0x160:
  case 0x161:
  case 0x164:
    uVar5 = (**(code **)(*param_1 + 0x380))(param_2);
    return uVar5;
  case 0x162:
    uVar5 = (**(code **)(*param_1 + 0x390))(param_2);
    return uVar5;
  case 0x163:
    uVar5 = (**(code **)(*param_1 + 900))(param_2);
    return uVar5;
  case 0x165:
    uVar5 = (**(code **)(*param_1 + 0x388))(param_2);
    return uVar5;
  case 0x166:
    uVar5 = (**(code **)(*param_1 + 0x38c))(param_2);
    return uVar5;
  case 0x167:
    uVar5 = (**(code **)(*param_1 + 0x200))(param_2);
    return uVar5;
  case 0x168:
    uVar5 = (**(code **)(*param_1 + 0x204))(param_2);
    return uVar5;
  case 0x169:
  case 0x16a:
  case 0x193:
  case 0x194:
  case 0x195:
  case 0x196:
  case 0x197:
  case 0x198:
  case 0x199:
  case 0x19a:
  case 0x19b:
  case 0x1a5:
  case 0x1a6:
    uVar5 = (**(code **)(*param_1 + 0x3a8))(param_2);
    return uVar5;
  case 0x16b:
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_2);
    return uVar5;
  case 0x16c:
    uVar5 = (**(code **)(*param_1 + 0x2c4))(param_2);
    return uVar5;
  case 0x16d:
    uVar5 = (**(code **)(*param_1 + 0x2c8))(param_2);
    return uVar5;
  case 0x16e:
    uVar5 = (**(code **)(*param_1 + 0x2cc))(param_2);
    return uVar5;
  case 0x16f:
    uVar5 = (**(code **)(*param_1 + 0x2d4))(param_2);
    return uVar5;
  case 0x170:
    uVar5 = (**(code **)(*param_1 + 0x2d8))(param_2);
    return uVar5;
  case 0x171:
    uVar5 = (**(code **)(*param_1 + 0x2dc))(param_2);
    return uVar5;
  case 0x172:
    uVar5 = (**(code **)(*param_1 + 0x2ec))(param_2);
    return uVar5;
  case 0x173:
    uVar5 = (**(code **)(*param_1 + 0x2f0))(param_2);
    return uVar5;
  case 0x174:
    uVar5 = (**(code **)(*param_1 + 0x2f8))(param_2);
    return uVar5;
  case 0x175:
    uVar5 = (**(code **)(*param_1 + 0x2f4))(param_2);
    return uVar5;
  case 0x176:
    uVar5 = (**(code **)(*param_1 + 0x2fc))(param_2);
    return uVar5;
  case 0x17b:
    uVar5 = (**(code **)(*param_1 + 0x300))(param_2);
    return uVar5;
  case 0x17c:
    uVar5 = (**(code **)(*param_1 + 0x304))(param_2);
    return uVar5;
  case 0x17d:
    uVar5 = (**(code **)(*param_1 + 0x31c))(param_2);
    return uVar5;
  case 0x17e:
    uVar5 = (**(code **)(*param_1 + 0x314))(param_2);
    return uVar5;
  case 0x17f:
    uVar5 = (**(code **)(*param_1 + 0x318))(param_2);
    return uVar5;
  case 0x180:
    uVar5 = (**(code **)(*param_1 + 0x32c))(param_2);
    return uVar5;
  case 0x181:
    uVar5 = (**(code **)(*param_1 + 0x330))(param_2);
    return uVar5;
  case 0x182:
    uVar5 = (**(code **)(*param_1 + 0x310))(param_2);
    return uVar5;
  case 0x183:
    uVar5 = (**(code **)(*param_1 + 0x278))(param_2);
    return uVar5;
  case 0x184:
    uVar5 = (**(code **)(*param_1 + 0x27c))(param_2);
    return uVar5;
  case 0x185:
    uVar5 = (**(code **)(*param_1 + 0x274))(param_2);
    return uVar5;
  case 0x186:
    uVar5 = (**(code **)(*param_1 + 0x270))(param_2);
    return uVar5;
  case 0x187:
    uVar5 = (**(code **)(*param_1 + 0x284))(param_2);
    return uVar5;
  case 0x188:
    uVar5 = (**(code **)(*param_1 + 0x30c))(param_2);
    return uVar5;
  case 0x189:
    uVar5 = (**(code **)(*param_1 + 0x370))(param_2);
    return uVar5;
  case 0x18a:
    uVar5 = (**(code **)(*param_1 + 0x378))(param_2);
    return uVar5;
  case 0x18b:
    uVar5 = (**(code **)(*param_1 + 700))(param_2);
    return uVar5;
  case 0x18c:
    uVar5 = (**(code **)(*param_1 + 0x124))(param_2);
    return uVar5;
  case 0x18d:
    uVar5 = (**(code **)(*param_1 + 0x128))(param_2);
    return uVar5;
  case 0x18e:
    iVar6 = param_2[1];
    if (*(int *)(iVar6 + 0x52) == 0x158) {
      FUN_006aeaa0(iVar6 + 0xe,*(undefined2 *)(iVar6 + 0x4e));
    }
    else if ((&DAT_0089cad8)[*(int *)(iVar6 + 0x52)] != 0) {
      FUN_006aeaa0(iVar6 + 0xe,CONCAT22(extraout_var,*(undefined2 *)(iVar6 + 0x4e)));
    }
    break;
  case 399:
    iVar6 = param_2[1];
    if (*(int *)(iVar6 + 0x52) == 0x158) {
      FUN_006aeb10(iVar6 + 0xe,*(undefined2 *)(iVar6 + 0x4e));
    }
    else if ((&DAT_0089cad8)[*(int *)(iVar6 + 0x52)] != 0) {
      FUN_006aeb10(iVar6 + 0xe,CONCAT22(extraout_var,*(undefined2 *)(iVar6 + 0x4e)));
    }
    break;
  case 400:
    uVar5 = (**(code **)(*param_1 + 0xc0))(param_2);
    return uVar5;
  case 0x192:
    uVar5 = (**(code **)(*param_1 + 0x398))(param_2);
    return uVar5;
  case 0x19c:
    uVar5 = (**(code **)(*param_1 + 0x3b0))(param_2);
    return uVar5;
  case 0x19d:
    uVar5 = (**(code **)(*param_1 + 0x3b4))(param_2);
    return uVar5;
  case 0x19e:
    uVar5 = (**(code **)(*param_1 + 0x3b8))(param_2);
    return uVar5;
  case 0x19f:
    uVar5 = (**(code **)(*param_1 + 0x3bc))(param_2);
    return uVar5;
  case 0x1a0:
    uVar5 = (**(code **)(*param_1 + 0x3c0))(param_2);
    return uVar5;
  case 0x1a1:
    uVar5 = (**(code **)(*param_1 + 0x3c4))(param_2);
    return uVar5;
  case 0x1a2:
    uVar5 = (**(code **)(*param_1 + 0x3a4))(param_2);
    return uVar5;
  case 0x1a3:
    uVar5 = (**(code **)(*param_1 + 0x39c))(param_2);
    return uVar5;
  case 0x1a4:
    uVar5 = (**(code **)(*param_1 + 0x3a0))(param_2);
    return uVar5;
  case 0x1a7:
    uVar5 = (**(code **)(*param_1 + 0x3d0))(param_2);
    return uVar5;
  case 0x1a8:
    uVar5 = (**(code **)(*param_1 + 0x3c8))(param_2);
    return uVar5;
  case 0x1a9:
    uVar5 = (**(code **)(*param_1 + 0x3cc))(param_2);
    return uVar5;
  case 0x1aa:
    uVar5 = (**(code **)(*param_1 + 0x3d4))(param_2);
    return uVar5;
  case 0x1ab:
    uVar5 = (**(code **)(*param_1 + 0x3d8))(param_2);
    return uVar5;
  case 0x1ac:
    uVar5 = (**(code **)(*param_1 + 0x3dc))(param_2);
    return uVar5;
  case 0x1ad:
    uVar5 = (**(code **)(*param_1 + 0x3e0))(param_2);
    return uVar5;
  case 0x1ae:
    uVar5 = (**(code **)(*param_1 + 0xe4))(param_2);
    return uVar5;
  case 0x1af:
    uVar5 = (**(code **)(*param_1 + 0xe8))(param_2);
    return uVar5;
  case 0x1b0:
    uVar5 = (**(code **)(*param_1 + 0xec))(param_2);
    return uVar5;
  case 0x1b1:
    uVar5 = (**(code **)(*param_1 + 0xf0))(param_2);
    return uVar5;
  case 0x1b2:
    uVar5 = (**(code **)(*param_1 + 0xf4))(param_2);
    return uVar5;
  case 0x1b9:
    uVar5 = (**(code **)(*param_1 + 0x3ac))(param_2);
    return uVar5;
  case 0x1ba:
    uVar5 = (**(code **)(*param_1 + 0x3e4))(param_2);
    return uVar5;
  case 0x1bb:
    uVar5 = (**(code **)(*param_1 + 0x2e0))(param_2);
    return uVar5;
  case 0x1bc:
    uVar5 = (**(code **)(*param_1 + 0x2e4))(param_2);
    return uVar5;
  case 0x1bd:
    uVar5 = (**(code **)(*param_1 + 0x2e8))(param_2);
    return uVar5;
  case 0x1be:
    uVar5 = (**(code **)(*param_1 + 0x208))(param_2);
    return uVar5;
  case 0x1bf:
    uVar5 = (**(code **)(*param_1 + 0x20c))(param_2);
    return uVar5;
  case 0x1c2:
    uVar5 = (**(code **)(*param_1 + 1000))(param_2);
    return uVar5;
  case 0x1c3:
    uVar5 = (**(code **)(*param_1 + 0x3ec))(param_2);
    return uVar5;
  case 0x1c4:
    uVar5 = (**(code **)(*param_1 + 0x3f0))(param_2);
    return uVar5;
  case 0x1c5:
    uVar5 = (**(code **)(*param_1 + 0x3fc))(param_2);
    return uVar5;
  case 0x1c6:
    uVar5 = (**(code **)(*param_1 + 0x3f4))(param_2);
    return uVar5;
  case 0x1c7:
    uVar5 = (**(code **)(*param_1 + 0x40c))(param_2);
    return uVar5;
  case 0x1c8:
    uVar5 = (**(code **)(*param_1 + 0x324))(param_2);
    return uVar5;
  case 0x1c9:
    (**(code **)(*param_1 + 0x3f8))(param_2);
    break;
  case 0x1ca:
    uVar5 = (**(code **)(*param_1 + 0x408))(param_2);
    return uVar5;
  case 0x1cb:
    uVar5 = (**(code **)(*param_1 + 0x410))(param_2);
    return uVar5;
  case 0x1cc:
    uVar5 = (**(code **)(*param_1 + 0x414))(param_2);
    return uVar5;
  case 0x1cd:
    uVar5 = (**(code **)(*param_1 + 0x418))(param_2);
    return uVar5;
  case 0x1ce:
    uVar5 = (**(code **)(*param_1 + 0x41c))(param_2);
    return uVar5;
  case 0x1cf:
    uVar5 = (**(code **)(*param_1 + 0x404))(param_2);
    return uVar5;
  case 0x1d1:
    uVar5 = (**(code **)(*param_1 + 0xc4))(0,1);
    return uVar5;
  case 0x1d2:
    uVar5 = (**(code **)(*param_1 + 0xc4))(1,1);
    return uVar5;
  case 0x1d3:
    uVar5 = (**(code **)(*param_1 + 0xc4))(2,1);
    return uVar5;
  case 0x1d4:
    uVar5 = (**(code **)(*param_1 + 0xc4))(3,1);
    return uVar5;
  case 0x1d5:
    uVar5 = (**(code **)(*param_1 + 0xc4))(4,1);
    return uVar5;
  case 0x1d6:
    uVar5 = (**(code **)(*param_1 + 0xc4))(5,1);
    return uVar5;
  case 0x1d7:
    uVar5 = (**(code **)(*param_1 + 200))(0,1);
    return uVar5;
  case 0x1d8:
    uVar5 = (**(code **)(*param_1 + 200))(1,1);
    return uVar5;
  case 0x1d9:
    uVar5 = (**(code **)(*param_1 + 200))(2,1);
    return uVar5;
  case 0x1da:
    uVar5 = (**(code **)(*param_1 + 200))(3,1);
    return uVar5;
  case 0x1db:
    uVar5 = (**(code **)(*param_1 + 200))(4,1);
    return uVar5;
  case 0x1dc:
    uVar5 = (**(code **)(*param_1 + 200))(5,1);
    return uVar5;
  case 0x1dd:
    uVar5 = (**(code **)(*param_1 + 0xcc))(0,1);
    return uVar5;
  case 0x1de:
    uVar5 = (**(code **)(*param_1 + 0xcc))(1,1);
    return uVar5;
  case 0x1df:
    uVar5 = (**(code **)(*param_1 + 0xcc))(2,1);
    return uVar5;
  case 0x1e0:
    uVar5 = (**(code **)(*param_1 + 0xcc))(3,1);
    return uVar5;
  case 0x1e1:
    uVar5 = (**(code **)(*param_1 + 0xcc))(4,1);
    return uVar5;
  case 0x1e2:
    uVar5 = (**(code **)(*param_1 + 0xcc))(5,1);
    return uVar5;
  case 0x1e3:
    uVar5 = (**(code **)(*param_1 + 0xc4))(0,0);
    return uVar5;
  case 0x1e4:
    uVar5 = (**(code **)(*param_1 + 0xc4))(1,0);
    return uVar5;
  case 0x1e5:
    uVar5 = (**(code **)(*param_1 + 0xc4))(2,0);
    return uVar5;
  case 0x1e6:
    uVar5 = (**(code **)(*param_1 + 0xc4))(3,0);
    return uVar5;
  case 0x1e7:
    uVar5 = (**(code **)(*param_1 + 0xc4))(4,0);
    return uVar5;
  case 0x1e8:
    uVar5 = (**(code **)(*param_1 + 0xc4))(5,0);
    return uVar5;
  case 0x1e9:
    uVar5 = (**(code **)(*param_1 + 200))(0,0);
    return uVar5;
  case 0x1ea:
    uVar5 = (**(code **)(*param_1 + 200))(1,0);
    return uVar5;
  case 0x1eb:
    uVar5 = (**(code **)(*param_1 + 200))(2,0);
    return uVar5;
  case 0x1ec:
    uVar5 = (**(code **)(*param_1 + 200))(3,0);
    return uVar5;
  case 0x1ed:
    uVar5 = (**(code **)(*param_1 + 200))(4,0);
    return uVar5;
  case 0x1ee:
    uVar5 = (**(code **)(*param_1 + 200))(5,0);
    return uVar5;
  case 0x1ef:
    uVar5 = (**(code **)(*param_1 + 0xcc))(0,0);
    return uVar5;
  case 0x1f0:
    uVar5 = (**(code **)(*param_1 + 0xcc))(1,0);
    return uVar5;
  case 0x1f1:
    uVar5 = (**(code **)(*param_1 + 0xcc))(2,0);
    return uVar5;
  case 0x1f2:
    uVar5 = (**(code **)(*param_1 + 0xcc))(3,0);
    return uVar5;
  case 499:
    uVar5 = (**(code **)(*param_1 + 0xcc))(4,0);
    return uVar5;
  case 500:
    uVar5 = (**(code **)(*param_1 + 0xcc))(5,0);
    return uVar5;
  case 0x1f5:
    uVar5 = (**(code **)(*param_1 + 0x308))(param_2);
    return uVar5;
  case 0x1f6:
    uVar5 = (**(code **)(*param_1 + 0xd0))();
    return uVar5;
  case 0x1f7:
    uVar5 = (**(code **)(*param_1 + 0x420))(param_2);
    return uVar5;
  case 0x1f8:
    uVar5 = (**(code **)(*param_1 + 0x424))(param_2);
    return uVar5;
  case 0x1f9:
    uVar5 = (**(code **)(*param_1 + 0x428))(param_2);
    return uVar5;
  case 0x1fa:
    uVar5 = (**(code **)(*param_1 + 0xd4))(param_2);
    return uVar5;
  case 0x1fb:
    uVar5 = (**(code **)(*param_1 + 0x42c))(param_2);
    return uVar5;
  case 0x1fc:
    uVar5 = (**(code **)(*param_1 + 0xd8))(param_2);
    return uVar5;
  case 0x1fd:
    uVar5 = (**(code **)(*param_1 + 0x430))(param_2);
    return uVar5;
  case 0x1fe:
    uVar5 = (**(code **)(*param_1 + 0x434))(param_2);
    return uVar5;
  case 0x1ff:
    uVar5 = (**(code **)(*param_1 + 0x438))(param_2);
    return uVar5;
  case 0x200:
    uVar5 = (**(code **)(*param_1 + 0x43c))(param_2);
    return uVar5;
  case 0x202:
    uVar5 = (**(code **)(*param_1 + 0x440))(param_2);
    return uVar5;
  case 0x203:
    if ((&DAT_0089cad8)[*(int *)(param_2[1] + 0x4e)] != 0) {
      FUN_00540ab0(param_2[1] + 0xe);
    }
    break;
  case 0x204:
    uVar5 = (**(code **)(*param_1 + 0x444))(param_2);
    return uVar5;
  case 0x205:
    uVar5 = (**(code **)(*param_1 + 0x448))(param_2);
    return uVar5;
  case 0x206:
    uVar5 = (**(code **)(*param_1 + 0x44c))(param_2);
    return uVar5;
  }
  uVar5 = (**(code **)(*param_2 + 8))();
  switch(uVar5) {
  case 0x19:
  case 0x1a:
  case 0x4d:
    goto switchD_004aa754_caseD_19;
  default:
    iVar6 = 0;
    puVar3 = (undefined4 *)param_1[0x1142];
    while ((puVar3 != (undefined4 *)0x0 && (iVar6 == 0))) {
      puVar2 = (undefined4 *)puVar3[2];
      iVar6 = (**(code **)(*(int *)*puVar3 + 4))(param_2);
      puVar3 = puVar2;
    }
switchD_004aa754_caseD_19:
    (**(code **)(**(int **)((int)param_1 + 0x12da) + 4))(param_2);
    return 0;
  case 0x4b:
    return 0;
  }
}


