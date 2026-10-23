// FUN_00739900 @ 739900 size=132

undefined4 __thiscall FUN_00739900(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if ((((*(int *)(param_1 + 0x12) != 0) &&
       (iVar1 = (&DAT_0089cad8)[*(int *)(param_1 + 0x12)], iVar1 != 0)) &&
      (cVar3 = FUN_0044beb0(), cVar3 != '\0')) &&
     (iVar2 = DAT_00d615e4,
     *(char *)(*(int *)(param_2 + 0x12da) + (*(int *)(param_1 + 0x12) + 1) * 0x2c) != '\0')) {
    while (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 8);
      cVar3 = FUN_00584e20(*(undefined4 *)(iVar1 + 6));
      if ((cVar3 == '\x01') && (cVar3 = FUN_00584e20(*(undefined4 *)(param_2 + 6)), cVar3 == '\x01')
         ) {
        return 1;
      }
    }
  }
  return 0;
}


