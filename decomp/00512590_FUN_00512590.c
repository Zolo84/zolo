// FUN_00512590 @ 512590 size=93

void FUN_00512590(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x30))();
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*param_1 + 0x18))();
      FUN_0050f230(uVar2);
    }
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x10))();
    FUN_0050c590(uVar2);
  }
  cVar1 = (**(code **)(*param_1 + 0x2c))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x14))();
    FUN_0050cf00(uVar2);
  }
  return;
}


