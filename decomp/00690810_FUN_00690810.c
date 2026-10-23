// FUN_00690810 @ 690810 size=252

void __thiscall FUN_00690810(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007d534b;
  local_c = ExceptionList;
  if (param_2 != 0) {
    piVar4 = *(int **)(param_1 + 0x5c);
    do {
      if (piVar4 == (int *)0x0) goto LAB_00690856;
      piVar5 = (int *)*piVar4;
      piVar4 = (int *)piVar4[2];
    } while (*piVar5 != param_2);
    if (piVar5 == (int *)0x0) {
LAB_00690856:
      ExceptionList = &local_c;
      pvVar3 = operator_new(8);
      local_4 = 0;
      if (pvVar3 == (void *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_0076c780();
      }
      *piVar4 = param_2;
      piVar4[1] = param_3;
      iVar1 = *(int *)(param_1 + 0x60);
      local_4 = 0xffffffff;
      piVar5 = operator_new(0xe);
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = (int)piVar4;
        piVar5[1] = iVar1;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar2 = *(int *)(param_1 + 100);
      *(int **)(param_1 + 0x60) = piVar5;
      *(int *)(param_1 + 100) = iVar2 + 1;
      if (iVar2 == 0) {
        *(int **)(param_1 + 0x5c) = piVar5;
        ExceptionList = local_c;
        return;
      }
      *(int **)(iVar1 + 8) = piVar5;
      ExceptionList = local_c;
      return;
    }
    piVar5[1] = param_3;
  }
  return;
}


