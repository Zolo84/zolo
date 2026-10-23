// FUN_006d0270 @ 6d0270 size=365

undefined4 __fastcall FUN_006d0270(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_74;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d9158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar4 = FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
  iVar6 = *(int *)(iVar4 + 0x10) * 2 + 0x26;
  piVar2 = *(int **)(param_1 + 0x10);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar5 = 0;
    piVar2 = (int *)*piVar2;
    if (*piVar2 != 0) {
      iVar5 = FUN_00415bd0();
      iVar5 = iVar5 + 2;
      cVar3 = FUN_006523c0();
      (**(code **)(*(int *)*piVar2 + 0x14))(-(uint)(cVar3 != '\0') & 0x108,iVar6 + 2);
    }
    cVar3 = FUN_006523c0();
    FUN_00434930((0x400 - (-(uint)(cVar3 != '\0') & 0x108)) - iVar5,500,0,0);
    uStack_4 = 0;
    FUN_00584270(0xff,0xff,0xff);
    FUN_004361a0(piVar2[1]);
    cVar3 = FUN_006523c0();
    FUN_00435640((-(uint)(cVar3 != '\0') & 0x108) + iVar5,iVar6);
    FUN_00435cd0(0);
    uStack_4 = 0xffffffff;
    iVar6 = iVar6 + iStack_74 * *(int *)(iVar4 + 0x10);
    FUN_00434e10();
    piVar2 = piVar1;
  }
  ExceptionList = local_c;
  return 0;
}


