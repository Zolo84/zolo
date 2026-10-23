// FUN_004ca33c @ 4ca33c size=227

uint __fastcall FUN_004ca33c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  iVar1 = FUN_004c9f81();
  if ((iVar1 == 0) || (iVar1 = FUN_004c9f81(), *(char *)(*(int *)(iVar1 + 0x12da) + 0x3b38) == '\0')
     ) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_004c9f81();
    iVar1 = *(int *)(iVar1 + 6);
    uVar3 = *(uint *)(param_1 + 0x3e);
    local_8 = uVar3;
    do {
      if (local_8 == 0) {
        return uVar3 & 0xffffff00;
      }
      local_8 = *(uint *)(local_8 + 8);
      iVar2 = FUN_004c9f81();
      uVar3 = 0;
    } while ((iVar2 == 0) ||
            (uVar3 = iVar1 * 0x2c, *(char *)(*(int *)(iVar2 + 0x12da) + 0x2c + uVar3) == '\0'));
    uVar3 = CONCAT31((int3)(uVar3 >> 8),1);
  }
  return uVar3;
}


