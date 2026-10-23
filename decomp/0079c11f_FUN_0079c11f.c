// FUN_0079c11f @ 79c11f size=65

uint FUN_0079c11f(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
  if (param_1 == -1) {
    return 0xffffffff;
  }
  param_1 = CONCAT13((char)param_1,(undefined3)param_1);
  local_c = 0;
  iVar1 = FUN_0079bfa9((int)&uStack_8 + 2,(int)&param_1 + 3,1,&local_c,0);
  uVar2 = 0xffff;
  if (-1 < iVar1) {
    uVar2 = uStack_8 >> 0x10;
  }
  return uVar2;
}


