// FUN_004ca4b8 @ 4ca4b8 size=195

int __fastcall FUN_004ca4b8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  int *local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = *(int **)(param_1 + 0x2c);
  while (local_8 != (int *)0x0) {
    piVar1 = (int *)local_8[2];
    iVar2 = *local_8;
    local_8 = piVar1;
    if (((*(int *)(iVar2 + 0x46a) != 0) && (*(int *)(iVar2 + 0x3d8) == *(int *)(iVar2 + 0x3d8))) &&
       ((iVar3 = FUN_004ec4c0(), iVar2 == 0 || (local_10 < iVar3)))) {
      local_10 = iVar3;
      local_c = iVar2;
    }
  }
  return local_c;
}


