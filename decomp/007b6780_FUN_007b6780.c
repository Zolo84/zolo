// FUN_007b6780 @ 7b6780 size=60

uint FUN_007b6780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined1 local_10 [12];
  
  uVar1 = FUN_007b62af(local_10,param_2,param_3,param_4,0,0,0);
  iVar2 = FUN_007b5f0b(local_10,param_1);
  if (iVar2 == 1) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}


