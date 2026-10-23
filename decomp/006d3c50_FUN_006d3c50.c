// FUN_006d3c50 @ 6d3c50 size=158

void __fastcall FUN_006d3c50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  (**(code **)(**(int **)(param_1 + 0x70) + 0x18))(0,0);
  iVar1 = **(int **)(param_1 + 0x74);
  uVar2 = FUN_00415be0();
  (**(code **)(iVar1 + 0x18))(0,uVar2);
  iVar1 = **(int **)(param_1 + 0x78);
  uVar2 = FUN_00415be0();
  (**(code **)(iVar1 + 0x18))(0,uVar2);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x10))(0);
  if (DAT_00d0ca90 != 0) {
    switch(*(undefined4 *)(DAT_00d0ca90 + 0x21e62)) {
    case 0xf:
    case 0x10:
    case 0x14:
    case 0x16:
    case 0x17:
      (**(code **)(**(int **)(param_1 + 0x78) + 0x10))(0);
      goto LAB_006d3cd2;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x74) + 0x10))(0);
LAB_006d3cd2:
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x18))(0x270,0);
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x10))(0);
  return;
}


