// FUN_004153a0 @ 4153a0 size=118

void __fastcall FUN_004153a0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  *(undefined4 *)((int)param_1 + 0x26) = 0x1e;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  uVar1 = FUN_005841b0();
  uVar2 = FUN_005841a0();
  *(undefined4 *)((int)param_1 + 0x3e) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = uVar2;
  *(undefined4 *)((int)param_1 + 0x4a) = uVar1;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0xe) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = DAT_00bd1bac;
  DAT_0088ebf4 = DAT_0088ebf4 + 1;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  (**(code **)(*param_1 + 0x18))(0,0);
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  (**(code **)(*param_1 + 0x34))(1);
  *(undefined1 *)((int)param_1 + 0x66) = 0;
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  return;
}


