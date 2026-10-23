// FUN_00426470 @ 426470 size=112

undefined4 __thiscall FUN_00426470(int param_1,double *param_2)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  char local_3e8 [1000];
  
  cVar1 = 'z';
  iVar2 = 0;
  while (cVar1 != '\n') {
    cVar1 = FUN_007a81b4(*(undefined4 *)(param_1 + 4));
    if ((*(byte *)(*(int *)(param_1 + 4) + 0xc) & 0x10) != 0) {
      local_3e8[iVar2] = '\0';
      return 0;
    }
    if ((cVar1 == ';') || (cVar1 == '\n')) break;
    local_3e8[iVar2] = cVar1;
    iVar2 = iVar2 + 1;
  }
  local_3e8[iVar2] = '\0';
  fVar3 = (float10)FUN_007a8265(local_3e8);
  *param_2 = (double)fVar3;
  return 1;
}


