// FUN_00646670 @ 646670 size=83

uint __fastcall FUN_00646670(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00428ee0(param_1 + 0xb8);
  if ((iVar2 != 0) && (iVar2 != 8)) {
    uVar1 = *(uint *)(param_1 + 0xbe);
    if ((&DAT_0089cad8)[uVar1] == 0) {
      return uVar1 & 0xffffff00;
    }
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x8e) >> 8),
                    *(char *)(*(int *)(*(int *)(param_1 + 0x8e) + 0x12da) + uVar1 * 0x2c + 0x2c) !=
                    '\0');
  }
  return 0;
}


