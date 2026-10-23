// FUN_00758d30 @ 758d30 size=337

int __thiscall FUN_00758d30(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined1 local_19;
  int *local_18;
  undefined1 local_14 [4];
  uint local_10;
  int local_c;
  
  FUN_00748ca0(&local_18);
  if (local_18 != *(int **)(param_1 + 8)) {
    do {
      iVar4 = FUN_00676e10(param_2 + 0x14);
      if (iVar4 == 0) break;
      FUN_0074a520();
    } while (local_18 != *(int **)(param_1 + 8));
  }
  if (local_18 != *(int **)(param_1 + 8)) {
    return 0;
  }
  local_10 = *(uint *)(param_2 + 0x28);
  piVar1 = *(int **)(param_1 + 8);
  local_c = param_2;
  bVar5 = true;
  piVar2 = piVar1;
  piVar3 = (int *)piVar1[1];
  while (piVar3 != DAT_00d4bdfc) {
    bVar5 = local_10 < (uint)piVar3[3];
    piVar2 = piVar3;
    if (bVar5) {
      piVar3 = (int *)*piVar3;
    }
    else {
      piVar3 = (int *)piVar3[2];
    }
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_00759040(local_14,piVar3,piVar2,&local_10);
    return param_2;
  }
  local_18 = piVar2;
  if (bVar5) {
    if (piVar2 == (int *)*piVar1) {
      FUN_00759040(local_14,piVar3,piVar2,&local_10);
      return param_2;
    }
    FUN_007592b0();
  }
  if ((uint)local_18[3] < local_10) {
    FUN_00759040(local_14,piVar3,piVar2,&local_10);
    return param_2;
  }
  local_19 = 0;
  FUN_00759020(&local_18,&local_19);
  return param_2;
}


