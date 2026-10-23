// FUN_007b1721 @ 7b1721 size=36

undefined4 FUN_007b1721(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    *param_1 = *param_1 + 1;
    uVar1 = FUN_007b16f0(param_2);
    iVar2 = FUN_007a900b(uVar1);
  } while (iVar2 != 0);
  return uVar1;
}


