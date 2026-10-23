// FUN_004bdfd0 @ 4bdfd0 size=107

void __thiscall FUN_004bdfd0(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  if ((((param_2 != 0) && (iVar1 = *(int *)((int)param_1 + 0x46), iVar1 != 0)) &&
      (*(int *)(param_2 + 0x12) == *(int *)(iVar1 + 0x12))) &&
     (*(short *)(param_2 + 0x10) == *(short *)(iVar1 + 0x10))) {
    pcVar2 = s_Attacker_s_0083f2b0;
    if (*(char *)((int)param_1 + 0x4e) == '\0') {
      pcVar2 = s_Defender_s_0083f2a4;
    }
    uVar3 = (**(code **)(*(int *)param_1[0x10] + 0xc))(pcVar2);
    FUN_00405ad0(s__s___s_leader_killed__0083f28c,uVar3);
    iVar1 = *param_1;
    (**(code **)(iVar1 + 0xc))(param_2);
    uVar3 = FUN_00527c20(param_2);
    (**(code **)(iVar1 + 0x20))(uVar3);
  }
  return;
}


