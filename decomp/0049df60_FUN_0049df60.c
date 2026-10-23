// FUN_0049df60 @ 49df60 size=60

undefined4 * __fastcall FUN_0049df60(int param_1)

{
  undefined4 uVar1;
  float10 fVar2;
  double dVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(param_1 + 0x3906);
  fVar2 = (float10)FUN_0049dd70();
  dVar3 = (double)fVar2;
  uVar1 = FUN_0042b6c9(s_DAILY_DISSENT_0083d4ec);
  FUN_007a630a(&DAT_008c4b94,uVar1,dVar3,uVar4);
  return &DAT_008c4b94;
}


