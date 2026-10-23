// FUN_006aa9c0 @ 6aa9c0 size=119

void __thiscall FUN_006aa9c0(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cVar1 = (**(code **)(*param_2 + 0x28))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x1a4))();
    uVar3 = (**(code **)(*param_2 + 0x10))(uVar2);
    FUN_006aa500(uVar3,uVar2);
    return;
  }
  cVar1 = (**(code **)(*param_2 + 0x2c))();
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x1c4))();
    uVar3 = (**(code **)(*param_2 + 0x14))(uVar2);
    FUN_006aa500(uVar3,uVar2);
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x1b4))();
  uVar3 = (**(code **)(*param_2 + 0x18))(uVar2);
  FUN_006aa500(uVar3,uVar2);
  return;
}


