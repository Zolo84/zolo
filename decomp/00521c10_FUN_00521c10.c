// FUN_00521c10 @ 521c10 size=180

undefined4 __thiscall FUN_00521c10(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *(undefined4 *)((int)param_1 + 0x27e);
  uVar4 = *(undefined4 *)((int)param_1 + 0x282);
  (**(code **)(*param_1 + 0x74))();
  FUN_0050bd90(uVar3,uVar4);
  uVar3 = *(undefined4 *)(*(int *)(param_2 + 4) + 0xe);
  FUN_004e9370(uVar3);
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if ((cVar1 != '\0') && (param_1[3] == 0)) {
    iVar2 = (**(code **)(*param_1 + 0x10))();
    uVar4 = *(undefined4 *)(iVar2 + 0x2ae);
    (**(code **)(*param_1 + 0x10))(uVar3,uVar4);
    FUN_005088c0(uVar3,uVar4);
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if ((cVar1 != '\0') && (param_1[3] == 0)) {
    iVar2 = (**(code **)(*param_1 + 0x18))();
    uVar4 = *(undefined4 *)(iVar2 + 0x2a6);
    (**(code **)(*param_1 + 0x18))(uVar3,uVar4);
    FUN_004f00e0(uVar3,uVar4);
    return 0;
  }
  (**(code **)(*param_1 + 0x60))(uVar3);
  return 0;
}


