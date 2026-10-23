// FUN_005b5cc0 @ 5b5cc0 size=98

undefined4 FUN_005b5cc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  iVar1 = (&DAT_008ca218)[param_1 * 0x47];
  iVar2 = *(int *)(&DAT_00bdc11c + iVar1 * 0x12);
  if (iVar2 == 0) {
    uVar4 = (**(code **)(*(int *)((&DAT_0089cad8)[param_1] + 0xe) + 0xc))();
    return uVar4;
  }
  if (param_2 == 0) {
    param_2 = _rand();
  }
  puVar3 = *(undefined4 **)(&DAT_00bdc114 + iVar1 * 0x12);
  for (param_2 = param_2 % iVar2; param_2 != 0; param_2 = param_2 + -1) {
    puVar3 = (undefined4 *)puVar3[2];
  }
  return *puVar3;
}


