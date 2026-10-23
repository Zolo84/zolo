// FUN_004e8930 @ 4e8930 size=86

undefined * __fastcall FUN_004e8930(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_004e8540();
  DAT_00abc528 = 0;
  iVar3 = (int)ROUND(*(float *)(param_1 + 0x22a));
  uVar2 = *(undefined4 *)(param_1 + 0x226);
  uVar1 = FUN_0042b6c9(s_PARTISAN_EXPL_00848364);
  FUN_007a630a(&DAT_00abc528,uVar1,uVar2,iVar3);
  return &DAT_00abc528;
}


