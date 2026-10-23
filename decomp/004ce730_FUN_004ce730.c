// FUN_004ce730 @ 4ce730 size=229

/* WARNING: Removing unreachable block (ram,0x004ce75b) */

int * __thiscall FUN_004ce730(int param_1,int *param_2,void *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *local_2c;
  void *local_28;
  
  puVar1 = *(undefined4 **)((int)param_3 + 4);
  puVar3 = operator_new(0xc);
  local_28 = puVar3;
  if (param_3 != (void *)0x0) {
    local_28 = param_3;
  }
  *puVar3 = local_28;
  local_2c = puVar3;
  if (puVar1 != (undefined4 *)0x0) {
    local_2c = puVar1;
  }
  puVar3[1] = local_2c;
  *(undefined4 **)((int)param_3 + 4) = puVar3;
  iVar2 = *(int *)((int)param_3 + 4);
  **(int **)(iVar2 + 4) = iVar2;
  if ((undefined4 *)(iVar2 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar2 + 8) = *param_4;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  *param_2 = iVar2;
  return param_2;
}


