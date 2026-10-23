// FUN_0057ae80 @ 57ae80 size=145

void __fastcall FUN_0057ae80(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_00796cd8(*(undefined4 *)(param_1 + 0x52e));
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
  piVar1 = *(int **)(param_1 + 0x1a);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x1a) = 0;
    FUN_00405ad0(s_Directdraw2_released_00857204);
  }
  piVar1 = *(int **)(param_1 + 0x16);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x16) = 0;
    FUN_00405ad0(s_Directdraw_released_008571ec);
  }
  return;
}


