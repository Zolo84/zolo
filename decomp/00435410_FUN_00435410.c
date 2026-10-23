// FUN_00435410 @ 435410 size=390

void __thiscall FUN_00435410(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  float fStack_24;
  
  fStack_24 = *(float *)(param_1 + 0x36);
  *(int *)(param_1 + 0x3a) = param_2;
  iVar2 = **(int **)(param_1 + 0x42);
  iStack_28 = 0x43542e;
  iStack_28 = FUN_00415bd0();
  iStack_28 = param_2 - iStack_28;
  uStack_2c = 0x435439;
  (**(code **)(iVar2 + 0x18))();
  iVar2 = **(int **)(param_1 + 0x4a);
  uStack_2c = 0x435443;
  FUN_00415be0();
  uStack_2c = 0x43545b;
  FUN_00436060();
  uStack_2c = 0x43546b;
  FUN_00415be0();
  uStack_2c = 0x43547f;
  uStack_2c = __ftol();
  iStack_30 = 0x435488;
  iStack_30 = FUN_00415bd0();
  iStack_30 = param_2 - iStack_30;
  iStack_34 = 0x435493;
  (**(code **)(iVar2 + 0x18))();
  iVar2 = *(int *)(param_1 + 0x2a);
  iVar5 = **(int **)(param_1 + 0x46);
  iStack_34 = 0x4354a0;
  iVar1 = FUN_00415be0();
  iStack_34 = (iVar2 - iVar1) + *(int *)(param_1 + 0x36);
  iVar2 = FUN_00415bd0();
  (**(code **)(iVar5 + 0x18))(param_2 - iVar2);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x42) + 0x28))(&iStack_28);
  iVar1 = FUN_00415be0();
  iVar2 = *(int *)(iVar2 + 4);
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x42) + 0x28))(&fStack_24);
  iVar4 = FUN_00415bd0();
  iVar5 = *(int *)(param_1 + 0x52);
  *(int *)(iVar5 + 0x14) = iVar4 / 2 + -2 + *piVar3;
  *(int *)(iVar5 + 0x18) = iVar2 + iVar1;
  piVar3 = *(int **)(param_1 + 0x42);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x46) + 0x28))(&iStack_28);
  iVar5 = (**(code **)(*piVar3 + 0x28))(&iStack_34);
  iVar2 = *(int *)(iVar2 + 4);
  iVar5 = *(int *)(iVar5 + 4);
  iVar1 = FUN_00415be0();
  *(int *)(*(int *)(param_1 + 0x52) + 0x1c) = (iVar2 - iVar5) - iVar1;
  piVar3 = *(int **)(param_1 + 0x4a);
  iStack_34 = *(int *)(*(int *)(param_1 + 0x52) + 0x18);
  iVar2 = *(int *)(*(int *)(param_1 + 0x52) + 0x1c);
  iVar5 = *piVar3;
  iVar1 = FUN_00415be0();
  fStack_24 = (float)(iVar2 - iVar1);
  FUN_00436060();
  uVar6 = __ftol();
  puVar7 = (undefined4 *)(**(code **)(*piVar3 + 0x28))(&iStack_30,uVar6);
  (**(code **)(iVar5 + 0x18))(*puVar7);
  return;
}


