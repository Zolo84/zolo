// FUN_006d9570 @ 6d9570 size=125

undefined4 __fastcall FUN_006d9570(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x2220e) + 8);
  while (iVar2 != 0) {
    piVar1 = (int *)(iVar2 + 8);
    iVar2 = ((undefined4 *)*piVar1)[2];
    FUN_0045d220(0x11,0,*(undefined4 *)*piVar1,0,0,DAT_0088f28c,(short)((uint)DAT_0088f28e >> 0x10))
    ;
  }
  iVar2 = *(int *)(param_1 + 0x2220e);
  if (iVar2 != 0) {
    FUN_006d65d0();
    FUN_00796cd8((short)iVar2);
  }
  *(undefined4 *)(param_1 + 0x2220e) = 0;
  return 1;
}


