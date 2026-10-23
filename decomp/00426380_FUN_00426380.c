// FUN_00426380 @ 426380 size=112

undefined4 __thiscall FUN_00426380(int param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_3e8 [1000];
  
  cVar1 = 'z';
  iVar3 = 0;
  while (cVar1 != '\n') {
    cVar1 = FUN_007a81b4(*(undefined4 *)(param_1 + 4));
    if ((*(byte *)(*(int *)(param_1 + 4) + 0xc) & 0x10) != 0) {
      local_3e8[iVar3] = '\0';
      return 0;
    }
    if ((cVar1 == ';') || (cVar1 == '\n')) break;
    local_3e8[iVar3] = cVar1;
    iVar3 = iVar3 + 1;
  }
  local_3e8[iVar3] = '\0';
  uVar2 = FUN_007a7b3c(local_3e8);
  *param_2 = uVar2;
  return 1;
}


