// FUN_006a7d40 @ 6a7d40 size=270

void __fastcall FUN_006a7d40(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uStack_c;
  uint uStack_8;
  
  iVar3 = (**(code **)(*param_1 + 0x218))();
  piVar6 = *(int **)(iVar3 + 4);
  if ((int *)param_1[0x2f] == (int *)0x0) {
    iVar3 = *(int *)((int)param_1 + 10);
    uVar4 = (**(code **)(*(int *)param_1[0x23] + 0xc))();
    uVar5 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar4);
    FUN_00458570(s_AITransport___d_of__s__Starts_mo_008693cc,*(undefined4 *)((int)param_1 + 6),uVar5
                );
  }
  else {
    iVar3 = *(int *)((int)param_1 + 10);
    uVar4 = (**(code **)(*(int *)param_1[0x2f] + 0xc))();
    uVar5 = (**(code **)(*(int *)(iVar3 + 0xe) + 0xc))(uVar4);
    FUN_00458570(s_AITransport___d_of__s__Starts_mo_00869414,*(undefined4 *)((int)param_1 + 6),uVar5
                );
    if (piVar6 != (int *)0x0) {
      do {
        if (*(int *)(*piVar6 + 0x12) == *(int *)(param_1[0x2f] + 0x12)) break;
        piVar6 = (int *)piVar6[2];
      } while (piVar6 != (int *)0x0);
    }
    piVar6 = (int *)piVar6[2];
  }
  bVar2 = true;
  uStack_c = 1;
  do {
    if (piVar6 == (int *)0x0) {
LAB_006a7e35:
      *(undefined1 *)(param_1 + 0x30) = 0;
      if (bVar2) {
        FUN_006a7b90();
      }
      return;
    }
    piVar1 = (int *)piVar6[2];
    iVar3 = *piVar6;
    if ((*(int *)(iVar3 + 0x254) != 8) && (*(int *)(iVar3 + 0x254) != 9)) {
      param_1[0x2f] = iVar3;
      goto LAB_006a7e35;
    }
    uStack_8 = uStack_8 & 0xff000000;
    uVar5 = uVar5 & 0xffff0000;
    FUN_0052af00(*(undefined4 *)(iVar3 + 0x12),uStack_8,uVar5,uStack_c);
    bVar2 = false;
    uStack_c = 0;
    piVar6 = piVar1;
  } while( true );
}


