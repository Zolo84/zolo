// FUN_00538a27 @ 538a27 size=107

void __fastcall FUN_00538a27(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_004af700(*(undefined4 *)(param_1 + 6));
  FUN_007a630a(param_1 + 0x1468a,s_scenarios_data_propaganda__s_bmp_00850f30,uVar2);
  cVar1 = FUN_00427770(param_1 + 0x1468a);
  if (cVar1 == '\0') {
    FUN_007a630a(param_1 + 0x1468a,s_scenarios_data_propaganda_min_bm_00850f54);
  }
  return;
}


