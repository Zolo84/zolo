// FUN_006300c0 @ 6300c0 size=978

void __fastcall FUN_006300c0(int param_1)

{
  int iVar1;
  undefined4 in_stack_ffffffd0;
  undefined1 local_8 [8];
  
  iVar1 = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  if (0 < *(int *)(param_1 + 0x14e)) {
    do {
      FUN_00428eb0(local_8);
      switch(*(undefined4 *)(param_1 + 0x172)) {
      case 3:
        FUN_00467460(7);
        FUN_00467350(7);
        FUN_00467100(7,*(undefined4 *)(param_1 + 0x14a));
        break;
      default:
        goto switchD_006300fd_caseD_4;
      case 5:
        FUN_00467460(6);
        FUN_00467350(6);
        FUN_00467100(6,*(undefined4 *)(param_1 + 0x14a));
        break;
      case 6:
        FUN_00467460(1);
        FUN_00467350(1);
        FUN_00467100(1,*(undefined4 *)(param_1 + 0x14a));
        break;
      case 7:
        FUN_00467460(4);
        FUN_00467350(4);
        FUN_00467100(4,*(undefined4 *)(param_1 + 0x14a));
        break;
      case 8:
        FUN_00467460(3);
        FUN_00467350(3);
        FUN_00467100(3,*(undefined4 *)(param_1 + 0x14a));
        break;
      case 9:
        FUN_00467460(2);
        FUN_00467350(2);
        FUN_00467100(2,*(undefined4 *)(param_1 + 0x14a));
        break;
      case 10:
        FUN_00467460(8);
        FUN_00467350(8);
        FUN_00467100(8,*(undefined4 *)(param_1 + 0x14a));
        break;
      case 0xb:
        FUN_00467460(9);
        FUN_00467350(9);
        FUN_00467100(9,*(undefined4 *)(param_1 + 0x14a));
        break;
      case 0xc:
        FUN_00467460(10);
        FUN_00467350(10);
        FUN_00467100(10,*(undefined4 *)(param_1 + 0x14a));
        break;
      case 0xd:
        FUN_00467460(5);
        FUN_00467350(5);
        FUN_00467100(5,*(undefined4 *)(param_1 + 0x14a));
        break;
      case 0xe:
        FUN_00467470(1);
        FUN_00467370(1);
        FUN_004671c0(1,*(undefined4 *)(param_1 + 0x14a));
        goto LAB_00630463;
      case 0xf:
        FUN_00467470(0);
        FUN_00467370(0);
        FUN_004671c0(0,*(undefined4 *)(param_1 + 0x14a));
LAB_00630463:
        FUN_00446d10(local_8);
        in_stack_ffffffd0 = 0x63047d;
        FUN_0045e110();
        goto switchD_006300fd_caseD_4;
      }
      FUN_00446d10(local_8);
      FUN_0045e050(in_stack_ffffffd0);
switchD_006300fd_caseD_4:
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x14e));
  }
  return;
}


