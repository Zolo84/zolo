// FUN_00525df0 @ 525df0 size=357

uint __thiscall FUN_00525df0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_8;
  
  piVar1 = *(int **)(param_1 + 0x120);
  local_8 = local_8 & 0xffffff00;
  do {
    if (piVar1 == (int *)0x0) {
      return (*param_2 == 0x1f) - 1 & local_8;
    }
    iVar5 = *piVar1;
    iVar2 = *(int *)(*(int *)(iVar5 + 0x78) + 0x254);
    if (*(int *)(iVar5 + 0x74) != 3) {
      if (iVar2 == 7) {
        *param_2 = 0x14;
LAB_00525e7b:
        local_8._1_3_ = (undefined3)(local_8 >> 8);
        local_8 = CONCAT31(local_8._1_3_,1);
      }
      else {
        if (iVar2 == 2) {
          *param_2 = 0x16;
          goto LAB_00525e7b;
        }
        if (iVar2 == 6) {
          *param_2 = 0x13;
          goto LAB_00525e7b;
        }
        if (iVar2 == 3) {
          *param_2 = 0x12;
          goto LAB_00525e7b;
        }
        if (iVar2 == 1) {
          *param_2 = 0x15;
          goto LAB_00525e7b;
        }
        if (iVar2 == 5) {
          *param_2 = 0x17;
          goto LAB_00525e7b;
        }
      }
      if (*(int *)(iVar5 + 0x5e) != 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x248);
        (**(code **)(**(int **)(iVar5 + 0x84) + 0xc))(uVar6);
        cVar3 = FUN_00527dc0(uVar6);
        cVar4 = FUN_004c12e0(**(undefined4 **)(iVar5 + 0x5e));
        if (cVar3 == cVar4) {
          switch(**(undefined4 **)(iVar5 + 0x5e)) {
          case 0:
            *param_2 = 0x18;
            break;
          case 1:
            *param_2 = 0x19;
            break;
          case 2:
            *param_2 = 0x1a;
            break;
          case 3:
            *param_2 = 0x1b;
            break;
          case 4:
            *param_2 = 0x1c;
            break;
          case 5:
            *param_2 = 0x1d;
            break;
          case 6:
            *param_2 = 0x1e;
          }
          local_8 = CONCAT31(local_8._1_3_,1);
        }
      }
    }
    iVar5 = *(int *)(param_1 + 0x14a);
    if (iVar5 == 0) {
      iVar5 = param_1 + 0x188;
    }
    if ((*(uint *)(iVar5 + 0x1e) & 1 << ((byte)*param_2 & 0x1f)) != 0) {
      *param_2 = 0x1f;
      local_8 = local_8 & 0xffffff00;
    }
    piVar1 = (int *)piVar1[2];
  } while( true );
}


