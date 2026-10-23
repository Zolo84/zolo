// FUN_007a5b99 @ 7a5b99 size=249

int FUN_007a5b99(void *param_1,int param_2,void *param_3,int param_4,int *param_5)

{
  uint _Size;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar3 = param_2 - (int)param_1;
  uVar4 = param_4 - (int)param_3;
  InterlockedIncrement(&DAT_00dc5c70);
  bVar5 = DAT_00dc5c6c == 0;
  if (!bVar5) {
    InterlockedDecrement(&DAT_00dc5c70);
    FUN_007aae71(0x13);
  }
  iVar1 = DAT_00dc5214;
  if (param_5 != (int *)0x0) {
    iVar1 = *param_5;
  }
  if (iVar1 == 0) {
    if (bVar5) {
      InterlockedDecrement(&DAT_00dc5c70);
    }
    else {
      FUN_007aaed2(0x13);
    }
    _Size = uVar3;
    if (uVar4 <= uVar3) {
      _Size = uVar4;
    }
    iVar1 = _memcmp(param_1,param_3,_Size);
    if ((iVar1 == 0) && (uVar3 != uVar4)) {
      iVar1 = (-(uint)(uVar3 < uVar4) & 0xfffffffe) + 1;
    }
  }
  else {
    iVar1 = FUN_007abdb2(iVar1,0,param_1,uVar3,param_3,uVar4,DAT_00dc522c);
    if (iVar1 == 0) {
      if (bVar5) {
        InterlockedDecrement(&DAT_00dc5c70);
      }
      else {
        FUN_007aaed2(0x13);
      }
      puVar2 = (undefined4 *)FUN_007aadca();
      *puVar2 = 0x16;
      iVar1 = 0x7fffffff;
    }
    else {
      if (bVar5) {
        InterlockedDecrement(&DAT_00dc5c70);
      }
      else {
        FUN_007aaed2(0x13);
      }
      iVar1 = iVar1 + -2;
    }
  }
  return iVar1;
}


