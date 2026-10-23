// FUN_0047bc40 @ 47bc40 size=471

undefined4 __thiscall FUN_0047bc40(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  float10 fVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bd1b1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_00428ee0(*(int *)(param_2 + 4) + 0x20);
  iVar8 = 0;
  if (((iVar4 != 0) && (iVar4 + -8 != 0)) && (*(int *)(iVar4 + 0xd0) == 0)) {
    param_2 = FUN_00428460(*(int *)(param_2 + 4) + 0x14);
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 + -8;
    }
    pvVar5 = operator_new(0x42);
    local_4 = 0;
    if (pvVar5 != (void *)0x0) {
      iVar8 = FUN_0075a7c0(param_1);
    }
    local_4 = 0xffffffff;
    (**(code **)(*(int *)(iVar8 + 8) + 4))(*(int *)(iVar1 + 4) + 0x1a);
    *(undefined1 *)(iVar8 + 0x40) = 1;
    *(int *)(iVar8 + 0x18) = param_2;
    *(int *)(iVar8 + 0x1c) = iVar4 + -8;
    *(int *)(iVar4 + 0xd0) = iVar8;
    iVar1 = *(int *)(param_1 + 0x3658);
    pvVar5 = operator_new(0xe);
    local_4 = 1;
    if (pvVar5 == (void *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0049a830(iVar8,iVar1,0);
    }
    iVar4 = *(int *)(param_1 + 0x365c);
    local_4 = 0xffffffff;
    *(undefined4 *)(param_1 + 0x3658) = uVar6;
    *(int *)(param_1 + 0x365c) = iVar4 + 1;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x3654) = uVar6;
    }
    else {
      *(undefined4 *)(iVar1 + 8) = uVar6;
    }
    piVar3 = *(int **)(param_2 + 0x54);
    while (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[2];
      iVar1 = *piVar3;
      piVar3 = piVar2;
      if (*(int *)(iVar1 + 4) == 0xd7) {
        puVar7 = operator_new(0xc);
        local_4 = 2;
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          uVar6 = *(undefined4 *)(iVar1 + 0xc);
          FUN_00499020(0x17e,param_1 + 4);
          *puVar7 = &PTR_FUN_007e6ab8;
          *(undefined4 *)(puVar7[1] + 0xe) = uVar6;
        }
        local_4 = 0xffffffff;
        FUN_00565c30(puVar7);
      }
    }
    *(undefined4 *)(param_1 + 0x3950) = 0;
    piVar3 = *(int **)(param_1 + 0x3654);
    while (piVar3 != (int *)0x0) {
      piVar2 = (int *)piVar3[2];
      iVar1 = *piVar3;
      piVar3 = piVar2;
      if (*(int *)(iVar1 + 0x1c) != 0) {
        fVar9 = (float10)FUN_0075b2d0();
        *(float *)(param_1 + 0x3950) = (float)(fVar9 + (float10)*(float *)(param_1 + 0x3950));
      }
    }
  }
  ExceptionList = local_c;
  return 3;
}


