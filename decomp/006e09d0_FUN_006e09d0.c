// FUN_006e09d0 @ 6e09d0 size=371

undefined4 __fastcall FUN_006e09d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar2 = **(int **)(param_1 + 0x66);
  iVar3 = FUN_00415be0();
  iVar7 = (iVar4 - iVar3) + -0x10;
  iVar4 = FUN_00415bd0(iVar7);
  (**(code **)(iVar2 + 0x18))(iVar1 / 2 - iVar4 / 2);
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar2 = **(int **)(param_1 + 0x6a);
  iVar3 = FUN_00415be0();
  iVar5 = FUN_00415be0();
  iVar4 = FUN_00415bd0(((iVar4 - iVar3) - iVar5) + -0x20);
  (**(code **)(iVar2 + 0x18))(iVar1 / 2 - iVar4 / 2);
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 8);
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4);
  iVar2 = **(int **)(param_1 + 0x6e);
  iVar3 = FUN_00415be0();
  iVar5 = FUN_00415be0();
  iVar6 = FUN_00415be0();
  iVar4 = FUN_00415bd0((((iVar4 - iVar3) - iVar5) - iVar6) + -0x30);
  (**(code **)(iVar2 + 0x18))(iVar1 / 2 - iVar4 / 2);
  if ((((*(char *)(param_1 + 0x5c) != '\0') && (DAT_00bd1500 != 0)) &&
      (*(char *)(DAT_00bd1500 + 0x37b) != '\0')) &&
     (*(int *)(param_1 + 0x62) == *(int *)(DAT_00bd1500 + 0xb70))) {
    FUN_00441fe0();
    FUN_00413509(*(undefined4 *)(param_1 + 0x78),*(int *)(*(int *)(param_1 + 0x10) + 4) / 2,8,
                 *(int *)(param_1 + 0x10),0xffff,0);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x5e) + 0x12) + 0x10))(iVar7);
    if (*(int **)(param_1 + 0x66) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x66) + 0x10))(iVar7);
    }
    if (*(int **)(param_1 + 0x6a) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x6a) + 0x10))(iVar7);
    }
    if (*(int **)(param_1 + 0x6e) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x6e) + 0x10))(iVar7);
    }
    FUN_004424d0(iVar7);
  }
  return 0;
}


