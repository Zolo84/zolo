// FUN_004d29c0 @ 4d29c0 size=260

int __thiscall
FUN_004d29c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined2 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  void *unaff_EBX;
  int iVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bf69b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pvVar2 = operator_new(0xd4);
  iVar5 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    iVar5 = FUN_004d1b30(param_2,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  }
  local_4 = 0xffffffff;
  FUN_00419440(param_3,param_4);
  iVar1 = *(int *)(iVar5 + 0x30);
  iVar3 = FUN_00415be0();
  (**(code **)(iVar1 + 0x18))(param_3,iVar3 / 2 + param_4);
  iVar1 = *(int *)(param_1 + 8);
  piVar4 = operator_new(0xe);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = iVar5;
    piVar4[1] = iVar1;
    piVar4[2] = 0;
    *(undefined1 *)(piVar4 + 3) = 0;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  *(int **)(param_1 + 8) = piVar4;
  *(int *)(param_1 + 0xc) = iVar3 + 1;
  if (iVar3 == 0) {
    *(int **)(param_1 + 4) = piVar4;
  }
  else {
    *(int **)(iVar1 + 8) = piVar4;
  }
  ExceptionList = unaff_EBX;
  return iVar5;
}


