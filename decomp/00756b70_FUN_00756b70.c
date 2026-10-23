// FUN_00756b70 @ 756b70 size=234

void __thiscall FUN_00756b70(int param_1,undefined4 *param_2,uint *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar3 = (int *)piVar1[1];
  bVar5 = true;
  piVar4 = piVar1;
  if (piVar3 != DAT_00d4be04) {
    do {
      piVar4 = piVar3;
      bVar5 = *param_3 < (uint)piVar4[3];
      if (bVar5) {
        piVar3 = (int *)*piVar4;
      }
      else {
        piVar3 = (int *)piVar4[2];
      }
    } while (piVar3 != DAT_00d4be04);
  }
  local_4 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    puVar2 = (undefined4 *)FUN_0074a100(&local_4,piVar3,piVar4,param_3);
    *param_2 = *puVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar5) {
    if (piVar4 == (int *)*piVar1) {
      puVar2 = (undefined4 *)FUN_0074a100(&local_4,piVar3,piVar4,param_3);
      *param_2 = *puVar2;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    FUN_0074a570();
  }
  if ((uint)piVar4[3] < *param_3) {
    puVar2 = (undefined4 *)FUN_0074a100(&local_4,piVar3,piVar4,param_3);
    *param_2 = *puVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *param_2 = piVar4;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}


