// FUN_007b2052 @ 7b2052 size=152

float10 FUN_007b2052(undefined4 param_1,undefined4 param_2,undefined8 param_3,double param_4,
                    undefined4 param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_007b2442(param_1,&param_4,param_5);
  if (iVar1 == 0) {
    FUN_007b218f();
  }
  iVar1 = FUN_007b272e(param_1);
  if ((DAT_008801b0 == 0) && (iVar1 != 0)) {
    fVar2 = (float10)FUN_007b2659(iVar1,param_2,param_3,0,param_4,param_5);
    return fVar2;
  }
  FUN_007b26e1(iVar1);
  FUN_007b2932();
  return (float10)param_4;
}


