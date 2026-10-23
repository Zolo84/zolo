// FUN_007660d0 @ 7660d0 size=267

void __fastcall FUN_007660d0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  switch(*(undefined4 *)(param_1 + 4)) {
  case 0:
    if (*(int *)(param_1 + 8) == 0x161) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int *)(param_1 + 0xc) == 0x12) {
      *(undefined4 *)(param_1 + 0xc) = 9;
      return;
    }
    break;
  case 1:
  case 10:
    if (*(int *)(param_1 + 8) == 0x161) {
      *(undefined4 *)(param_1 + 8) = 0;
      return;
    }
    break;
  case 2:
    if (*(int *)(param_1 + 8) == 0x161) {
      *(undefined4 *)(param_1 + 8) = 0x15;
    }
    if ((*(int *)(param_1 + 8) == 0x15) && (*(int *)(param_1 + 0xc) == 0x12)) {
      *(undefined4 *)(param_1 + 0xc) = 7;
      return;
    }
    break;
  case 3:
  case 5:
  case 0x13:
    iVar1 = *(int *)(param_1 + 8);
    goto joined_r0x00766198;
  case 4:
    if ((*(int *)(param_1 + 8) != 0x161) || (*(int *)(param_1 + 0xc) == 0xf))
    goto switchD_007660dc_caseD_6;
    goto LAB_007660ec;
  case 6:
    goto switchD_007660dc_caseD_6;
  case 7:
    iVar1 = *(int *)(param_1 + 8);
joined_r0x00766198:
    if (iVar1 == 0x161) {
LAB_007660ec:
      *(undefined4 *)(param_1 + 8) = 0;
    }
switchD_007660dc_caseD_6:
    bVar2 = *(int *)(param_1 + 0xc) == 0x12;
LAB_007660f7:
    if (bVar2) {
      *(undefined4 *)(param_1 + 0xc) = 8;
      return;
    }
    break;
  case 8:
  case 9:
    if (*(int *)(param_1 + 8) == 0x161) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    if (*(int *)(param_1 + 0xc) == 0x12) {
      *(undefined4 *)(param_1 + 0xc) = 6;
      return;
    }
    break;
  case 0xb:
    if (*(int *)(param_1 + 0xc) != 0x12) {
      return;
    }
    if (*(int *)(param_1 + 8) == 0x161) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
    bVar2 = *(int *)(param_1 + 8) == 0x161;
    goto LAB_007660f7;
  case 0x11:
    if (*(int *)(param_1 + 0xc) == 0x12) {
      *(undefined4 *)(param_1 + 0xc) = 7;
    }
  }
  return;
}


