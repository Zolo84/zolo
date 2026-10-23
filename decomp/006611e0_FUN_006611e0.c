// FUN_006611e0 @ 6611e0 size=237

void __fastcall FUN_006611e0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piStack_4;
  
  piStack_4 = param_1;
  FUN_006a9cd0();
  *(undefined4 *)((int)param_1 + 0xd2) = 0;
  *(undefined4 *)((int)param_1 + 0xd6) = 0;
  *(undefined4 *)((int)param_1 + 0xda) = 0;
  *(undefined4 *)((int)param_1 + 0xca) = 1;
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  *(undefined4 *)((int)param_1 + 0x102) = 0;
  FUN_00664400();
  (**(code **)(param_1[0x3c] + 0x14))();
  iVar1 = FUN_0044e1d0();
  if (iVar1 != 0) {
    iVar1 = 0x1c6;
    piVar5 = &DAT_008ec354;
    do {
      piVar2 = (int *)(**(code **)(*(int *)(*(int *)(*(int *)((int)param_1 + 10) + 0x120) + 0x174) +
                                  0x28))(&piStack_4,iVar1);
      if ((*piVar2 == 0) && (iVar3 = (**(code **)(*piVar5 + 4))(), iVar3 != 0)) {
        FUN_00664c10(iVar1);
      }
      piVar5 = (int *)((int)piVar5 + 0x12);
      iVar1 = iVar1 + 1;
    } while ((int)piVar5 < 0x8ece04);
  }
  FUN_00661fd0();
  uVar4 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(1,uVar4);
  uVar4 = (**(code **)(*param_1 + 0xe8))();
  FUN_006adf10(0x24,uVar4);
  FUN_006ae0d0(1,0);
  FUN_006ae0d0(1,1);
  return;
}


