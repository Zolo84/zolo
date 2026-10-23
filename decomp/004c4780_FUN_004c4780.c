// FUN_004c4780 @ 4c4780 size=234

void __thiscall FUN_004c4780(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int local_4;
  
  piVar1 = *(int **)(param_1 + 4);
  piVar4 = (int *)piVar1[1];
  bVar2 = true;
  piVar5 = piVar1;
  if (piVar4 != DAT_008e8328) {
    do {
      piVar5 = piVar4;
      bVar2 = *param_3 < piVar5[3];
      if (bVar2) {
        piVar4 = (int *)*piVar5;
      }
      else {
        piVar4 = (int *)piVar5[2];
      }
    } while (piVar4 != DAT_008e8328);
  }
  local_4 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    puVar3 = (undefined4 *)FUN_004c50e0(&local_4,piVar4,piVar5,param_3);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar2) {
    if (piVar5 == (int *)*piVar1) {
      puVar3 = (undefined4 *)FUN_004c50e0(&local_4,piVar4,piVar5,param_3);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    FUN_004c5450();
  }
  if (piVar5[3] < *param_3) {
    puVar3 = (undefined4 *)FUN_004c50e0(&local_4,piVar4,piVar5,param_3);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *param_2 = piVar5;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}


