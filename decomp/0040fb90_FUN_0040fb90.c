// FUN_0040fb90 @ 40fb90 size=172

bool FUN_0040fb90(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_48 [32];
  int local_28;
  undefined1 local_24 [28];
  int local_8;
  
  iVar1 = FUN_007a6ebb(param_1,0);
  if (iVar1 != 0) {
    iVar2 = FUN_007a6ebb(param_2,0);
    if (iVar2 == 0) {
      FUN_007a6ddb(iVar1);
      return false;
    }
    iVar3 = FUN_007a6b48(iVar1,local_48);
    iVar4 = FUN_007a6b48(iVar2,local_24);
    if ((iVar3 == 0) && (iVar4 == 0)) {
      FUN_007a6ddb(iVar1);
      FUN_007a6ddb(iVar2);
      return local_8 <= local_28;
    }
    FUN_007a6ddb(iVar1);
    FUN_007a6ddb(iVar2);
  }
  return false;
}


