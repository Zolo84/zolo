// FUN_006d5140 @ 6d5140 size=796

void __fastcall FUN_006d5140(int param_1)

{
  undefined2 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  void *unaff_ESI;
  int *piVar7;
  int iVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_007d947b;
  pvStack_c = ExceptionList;
  iVar5 = 8;
  piVar6 = (int *)(param_1 + 0x68);
  piVar7 = piVar6;
  ExceptionList = &pvStack_c;
  do {
    uStack_4 = 0xffffffff;
    if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar7)(1);
    }
    pvVar2 = operator_new(0x72);
    uStack_4 = 0;
    if (pvVar2 == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_00434930(0x140,0x140,0,0);
    }
    *piVar7 = iVar3;
    piVar7 = piVar7 + 1;
    iVar5 = iVar5 + -1;
    uStack_4 = 0xffffffff;
    *(undefined1 *)(iVar3 + 0x5c) = 1;
  } while (iVar5 != 0);
  uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)(*piVar6 + 0x56) = uVar4;
  uVar1 = FUN_00584270(0xd0,0xe8,0xf8);
  *(undefined2 *)(*piVar6 + 0x5a) = uVar1;
  uVar4 = FUN_004136a0(s_eurostilecond20bold_bmp_0082f024);
  *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x56) = uVar4;
  uVar1 = FUN_00584270(0xff,0xff,0xff);
  *(undefined2 *)(*(int *)(param_1 + 0x6c) + 0x5a) = uVar1;
  uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)(*(int *)(param_1 + 0x70) + 0x56) = uVar4;
  uVar1 = FUN_00584270(0xd0,0xe8,0xf8);
  *(undefined2 *)(*(int *)(param_1 + 0x70) + 0x5a) = uVar1;
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x56) = uVar4;
  uVar1 = FUN_00584270(0xff,0xff,0xff);
  *(undefined2 *)(*(int *)(param_1 + 0x74) + 0x5a) = uVar1;
  uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x56) = uVar4;
  uVar1 = FUN_00584270(0xd0,0xe8,0xf8);
  *(undefined2 *)(*(int *)(param_1 + 0x78) + 0x5a) = uVar1;
  uVar4 = FUN_004136a0(s_eurostilecond14bold_bmp_0083bcc0);
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x56) = uVar4;
  uVar1 = FUN_00584270(0xff,0xff,0xff);
  *(undefined2 *)(*(int *)(param_1 + 0x7c) + 0x5a) = uVar1;
  uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x56) = uVar4;
  uVar1 = FUN_00584270(0xd0,0xe8,0xf8);
  *(undefined2 *)(*(int *)(param_1 + 0x80) + 0x5a) = uVar1;
  uVar4 = FUN_004136a0(s_eurostilecond14_bmp_0082f010);
  *(undefined4 *)(*(int *)(param_1 + 0x84) + 0x56) = uVar4;
  uVar1 = FUN_00584270(0xd0,0xe8,0xf8);
  *(undefined2 *)(*(int *)(param_1 + 0x84) + 0x5a) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x180;
  FUN_004361a0(*(undefined4 *)(param_1 + 0xa8));
  (**(code **)(**(int **)(param_1 + 0x6c) + 0x34))
            ((*(int *)(param_1 + 0x18) - *(int *)((int)*(int **)(param_1 + 0x6c) + 0x2e)) / 2,0x20);
  iVar5 = *(int *)(*(int *)((int)*(int **)(param_1 + 0x6c) + 0x56) + 0x10);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x6c) + 4))();
  iVar8 = iVar3 * iVar5 + 0x34;
  FUN_004361a0(*(undefined4 *)(param_1 + 0xac));
  (**(code **)(**(int **)(param_1 + 0x70) + 0x34))
            ((*(int *)(param_1 + 0x18) - *(int *)((int)*(int **)(param_1 + 0x70) + 0x2e)) / 2,iVar8)
  ;
  iVar5 = *(int *)(*(int *)((int)*(int **)(param_1 + 0x70) + 0x56) + 0x10);
  iVar3 = (**(code **)(**(int **)(param_1 + 0x70) + 4))();
  FUN_00441c10(0,*(undefined4 *)(param_1 + 0x18),(iVar3 * iVar5 + 0x24 + iVar8 & 0xfffffff0U) + 0x10
               ,0x10,0xff,0);
  iVar5 = 8;
  do {
    FUN_00434f70(*(undefined4 *)(param_1 + 0x10));
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = 8;
  do {
    (**(code **)(*(int *)(*piVar6 + 0x12) + 0x10))(0);
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ExceptionList = unaff_ESI;
  return;
}


