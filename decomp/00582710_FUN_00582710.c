// FUN_00582710 @ 582710 size=206

void __thiscall FUN_00582710(int *param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_1[6] == -1) && (param_1[7] == -1)) {
    *param_2 = (uint)*(byte *)(*param_1 + 0x17 + param_1[1] * 0x1c) << 0x10 |
               (uint)*(byte *)(*param_1 + param_1[1] * 0x1c + 0x16);
    return;
  }
  uVar4 = param_3 - param_1[6];
  iVar1 = __ftol();
  iVar1 = -((iVar1 >> 2 ^ iVar1 >> 0x1f) - (iVar1 >> 0x1f));
  uVar3 = (int)uVar4 >> 0x1f;
  if ((int)uVar4 < 0) {
    iVar2 = (uVar4 ^ uVar3) - uVar3;
    if (0x40 < iVar2) {
      iVar2 = 0x40;
    }
  }
  else {
    iVar2 = -((uVar4 ^ uVar3) - uVar3);
    if (iVar2 < -0x40) {
      iVar2 = -0x40;
    }
  }
  if (iVar1 < -0xc0) {
    iVar1 = -0xc0;
  }
  *param_2 = iVar1 + 0xc0U & 0xffff ^ (iVar2 + 0x80) * 0x10000;
  return;
}


