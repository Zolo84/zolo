// FUN_006a9f80 @ 6a9f80 size=115

undefined4 FUN_006a9f80(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(char *)((int)param_1 + 0xe) == '\0') {
    return 0;
  }
  cVar1 = (**(code **)(*param_2 + 0x28))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x10))();
    uVar2 = (**(code **)(*param_1 + 0x1a8))(uVar2);
    return uVar2;
  }
  cVar1 = (**(code **)(*param_2 + 0x30))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_2 + 0x18))();
    uVar2 = (**(code **)(*param_1 + 0x1b8))(uVar2);
    return uVar2;
  }
  uVar2 = (**(code **)(*param_2 + 0x14))();
  uVar2 = (**(code **)(*param_1 + 0x1c8))(uVar2);
  return uVar2;
}


