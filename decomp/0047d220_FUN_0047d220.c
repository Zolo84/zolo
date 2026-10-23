// FUN_0047d220 @ 47d220 size=181

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047d220(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  undefined4 uVar7;
  
  cVar3 = FUN_00444290();
  if (cVar3 != '\0') {
    iVar1 = *(int *)(param_2 + 4);
    iVar2 = (&DAT_0089cad8)[*(int *)(iVar1 + 0x12)];
    uVar7 = *(undefined4 *)(iVar2 + 0x117de);
    uVar4 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar7);
    uVar5 = (**(code **)(*(int *)(iVar2 + 0xe) + 0xc))(uVar4);
    FUN_006eaa80(0x1c,*(undefined4 *)(iVar1 + 0x12),uVar5,uVar4,uVar7);
  }
  FUN_00588600(*(float *)(*(int *)(*(int *)(param_2 + 4) + 0x12) * 0x2c + 0x28 +
                         *(int *)(param_1 + 0x12da)) - _DAT_007e681c);
  fVar6 = (float10)FUN_005885d0();
  FUN_00588600((float)fVar6);
  return 3;
}


