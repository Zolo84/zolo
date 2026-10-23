// FUN_0053f2a0 @ 53f2a0 size=291

int __thiscall FUN_0053f2a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 unaff_retaddr;
  int *local_218;
  int *local_214;
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_007c30b6;
  pvStack_c = ExceptionList;
  piVar2 = *(int **)(param_1 + 0xc);
  piVar5 = *(int **)(param_1 + 0x10);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
    ExceptionList = &pvStack_c;
  }
  else {
    ExceptionList = &pvStack_c;
    piVar2[2] = piVar2[2] + 1;
  }
  if (piVar5 == (int *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5[2] = piVar5[2] + 1;
  }
  local_4 = 0;
  local_218 = piVar2;
  local_214 = piVar5;
  iVar3 = (**(code **)(*piVar2 + 0x70))(param_2,param_3);
  if (iVar3 == 0) {
    uVar4 = FUN_005341fe(1);
    FUN_00533df2(1,uVar4);
    iVar3 = FUN_00537750(&local_218);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*piVar5 + 0x70))(param_2,unaff_retaddr);
    }
  }
  pvStack_c = (void *)0x1;
  if ((piVar2 != (int *)0x0) && (iVar1 = piVar2[2], piVar2[2] = iVar1 + -1, iVar1 + -1 < 1)) {
    (**(code **)*piVar2)(1);
  }
  if ((piVar5 != (int *)0x0) && (iVar1 = piVar5[2], piVar5[2] = iVar1 + -1, iVar1 + -1 < 1)) {
    (**(code **)*piVar5)(1);
  }
  ExceptionList = pvStack_14;
  return iVar3;
}


