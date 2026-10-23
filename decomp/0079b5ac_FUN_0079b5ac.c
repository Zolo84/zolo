// FUN_0079b5ac @ 79b5ac size=30

uint __fastcall FUN_0079b5ac(int *param_1)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = *(byte **)param_1[7];
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)param_1[0xb])) {
    return (uint)*pbVar1;
  }
  uVar2 = (**(code **)(*param_1 + 0x10))();
  return uVar2;
}


