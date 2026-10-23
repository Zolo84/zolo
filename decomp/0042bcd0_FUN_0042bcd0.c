// FUN_0042bcd0 @ 42bcd0 size=88

undefined4 __thiscall
FUN_0042bcd0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  while( true ) {
    cVar1 = FUN_0042c390();
    if (cVar1 == '\0') break;
    uVar2 = FUN_0042c370(param_4);
    cVar1 = (**(code **)(*param_1 + 0xc))(uVar2);
    if (cVar1 != '\0') break;
    FUN_0042c310();
  }
  FUN_0042c2e0(&param_3);
  return param_2;
}


