// FUN_00657b60 @ 657b60 size=165

void __thiscall FUN_00657b60(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  void **ppvVar4;
  void *pvVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d2f4b;
  local_c = ExceptionList;
  iVar1 = ((int)(param_2 + (param_2 >> 0x1f & 7U)) >> 3) * 8 + 1;
  puVar3 = *(undefined4 **)(param_1 + 0x13da0);
  iVar2 = ((int)(param_3 + (param_3 >> 0x1f & 7U)) >> 3) * 8 + 1;
  ppvVar4 = &local_c;
  if (puVar3 != (undefined4 *)0x0) {
    if ((iVar1 == puVar3[6]) && (iVar2 == puVar3[7])) {
      return;
    }
    ppvVar4 = &local_c;
    if (puVar3 != (undefined4 *)0x0) {
      ExceptionList = &local_c;
      (**(code **)*puVar3)(1);
      ppvVar4 = ExceptionList;
    }
  }
  ExceptionList = ppvVar4;
  pvVar5 = operator_new(0x58);
  uStack_4 = 0;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00441b30(0,iVar1,iVar2,7);
  }
  *(undefined4 *)(param_1 + 0x13da0) = uVar6;
  ExceptionList = local_c;
  return;
}


