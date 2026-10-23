// FUN_00674980 @ 674980 size=234

void __thiscall FUN_00674980(int param_1,undefined4 *param_2,int *param_3)

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
  if (piVar4 != DAT_00d11168) {
    do {
      piVar5 = piVar4;
      bVar2 = *param_3 < piVar5[3];
      if (bVar2) {
        piVar4 = (int *)*piVar5;
      }
      else {
        piVar4 = (int *)piVar5[2];
      }
    } while (piVar4 != DAT_00d11168);
  }
  local_4 = param_1;
  if (*(char *)(param_1 + 8) != '\0') {
    puVar3 = (undefined4 *)FUN_00675fb0(&local_4,piVar4,piVar5,param_3);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  if (bVar2) {
    if (piVar5 == (int *)*piVar1) {
      puVar3 = (undefined4 *)FUN_00675fb0(&local_4,piVar4,piVar5,param_3);
      *param_2 = *puVar3;
      *(undefined1 *)(param_2 + 1) = 1;
      return;
    }
    FUN_00676650();
  }
  if (piVar5[3] < *param_3) {
    puVar3 = (undefined4 *)FUN_00675fb0(&local_4,piVar4,piVar5,param_3);
    *param_2 = *puVar3;
    *(undefined1 *)(param_2 + 1) = 1;
    return;
  }
  *param_2 = piVar5;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}


