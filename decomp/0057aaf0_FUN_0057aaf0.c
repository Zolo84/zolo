// FUN_0057aaf0 @ 57aaf0 size=80

void __fastcall FUN_0057aaf0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = *(int **)(param_1 + 0x22);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    FUN_00405ad0(s_FrontSurface_released__ERROR___d_00857098,uVar2);
  }
  piVar1 = *(int **)(param_1 + 0x1e);
  if (piVar1 != (int *)0x0) {
    uVar2 = (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1e) = 0;
    FUN_00405ad0(s_FrontSurface_released__ERROR___d_00857098,uVar2);
  }
  return;
}


