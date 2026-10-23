// FUN_0078d420 @ 78d420 size=173

undefined4 __thiscall FUN_0078d420(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = DAT_00893530;
  param_1[2] = *(undefined4 *)(DAT_00893530 + 0x14);
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(iVar1 + 0x18);
  do {
    while( true ) {
      iVar1 = FUN_00535490();
      if (iVar1 != 1) break;
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == 0xfc) {
        uVar2 = FUN_007a7b3c(param_2 + 0x410);
        FUN_0042db80(uVar2);
      }
      else if (iVar1 == 0x10a) {
        uVar2 = FUN_004af6b0(param_2 + 0x410);
        *param_1 = uVar2;
      }
      else if (iVar1 == 0x523) {
        uVar2 = FUN_007a7b3c(param_2 + 0x410);
        param_1[1] = uVar2;
      }
      else {
        FUN_005349b0(s_Unknown_string_in_queued_events_l_0087b45c);
      }
    }
    piVar3 = (int *)FUN_00534391();
  } while (*piVar3 != 4);
  FUN_005343dc();
  return 0;
}


