// FUN_007a986a @ 7a986a size=74

undefined4 * __thiscall FUN_007a986a(undefined4 *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_008005f8;
  iVar1 = *(int *)(param_2 + 8);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    param_1[1] = *(undefined4 *)(param_2 + 4);
  }
  else {
    sVar2 = _strlen(*(char **)(param_2 + 4));
    pvVar3 = operator_new(sVar2 + 1);
    param_1[1] = pvVar3;
    if (pvVar3 != (void *)0x0) {
      FUN_007a74f0(pvVar3,*(undefined4 *)(param_2 + 4));
    }
  }
  return param_1;
}


