// FUN_006a5090 @ 6a5090 size=123

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006a5090(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  cVar4 = FUN_0044beb0();
  if (cVar4 == '\0') {
    FUN_006a4f40();
    *(float *)(param_1 + 0x98) = *(float *)(param_1 + 0x94);
    if (*(float *)(param_1 + 0x94) < _DAT_007e67ec) {
      *(undefined4 *)(param_1 + 0x98) = 0x459c4000;
    }
    piVar3 = *(int **)(param_1 + 0x1a);
    while (piVar3 != (int *)0x0) {
      piVar1 = (int *)piVar3[2];
      piVar2 = (int *)*piVar3;
      piVar3 = piVar1;
      if (*(char *)((int)piVar2 + 0xe) != '\0') {
        (**(code **)(*piVar2 + 0xcc))();
      }
    }
  }
  uVar6 = 0;
  uVar5 = FUN_006ac310(0xfa,500);
  FUN_006adfb0(uVar5,uVar6);
  return;
}


