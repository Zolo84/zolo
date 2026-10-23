// FUN_00521e00 @ 521e00 size=236

undefined4 __thiscall FUN_00521e00(int *param_1,char param_2,int param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  int *piStack_4;
  
  piStack_4 = param_1;
  cVar2 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 8))();
  if ((cVar2 == '\0') && (param_2 != '\0')) {
    FUN_0040d210();
    FUN_0040d170();
    (**(code **)(*(int *)((int)param_1 + 0x22e) + 0x10))();
  }
  piStack_4 = *(int **)((int)param_1 + 0x236);
  for (puVar1 = *(undefined4 **)(param_3 + 4); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    FUN_0049a100(*puVar1);
  }
  uVar3 = (**(code **)(*(int *)((int)param_1 + 0x22e) + 4))();
  FUN_00405ad0(s_New_move_path_size___d_in_Unit___0084b184,uVar3,
               *(undefined4 *)((int)param_1 + 0x1a));
  if ((cVar2 == '\0') && (param_2 == '\0')) {
    uVar4 = 1;
    uVar3 = extraout_ECX;
    FUN_00526ae0(&piStack_4);
    FUN_00522520(uVar3,uVar4);
    return 0;
  }
  (**(code **)(*param_1 + 0xa0))();
  FUN_00523370(0);
  *(undefined1 **)((int)param_1 + 0x21a) = &LAB_005219a0;
  *(undefined4 *)((int)param_1 + 0x21e) = 0;
  FUN_00522380(1,0);
  return 0;
}


