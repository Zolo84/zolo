// FUN_00747260 @ 747260 size=176

void __thiscall FUN_00747260(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  byte bVar6;
  int iVar7;
  
  uVar2 = param_2;
  uVar3 = 0;
  iVar7 = 0;
  do {
    bVar6 = (byte)uVar3;
    uVar3 = uVar3 + 8;
    *(char *)((int)&param_2 + iVar7) =
         (char)((0xff000000U >> (bVar6 & 0x1f) & uVar2) >> (0x18 - bVar6 & 0x1f));
    iVar7 = iVar7 + 1;
  } while (uVar3 < 0x20);
  piVar5 = (int *)(param_1 + 0x12);
  if (((*(int *)(param_1 + 0x16) != DAT_00d4c214) || (*piVar5 != DAT_00d4c210)) &&
     ((*(int *)(param_1 + 0x16) != DAT_00d4c214 || (*(int *)(param_1 + 0x12) != DAT_00d4c210)))) {
    puVar4 = _malloc(0x1c);
    *puVar4 = 0x1c;
    if (param_1 == -0xe) {
      piVar5 = &DAT_00d4c210;
    }
    puVar4[1] = *piVar5;
    puVar4[2] = piVar5[1];
    puVar4[3] = *(undefined4 *)(param_1 + 0x12);
    uVar1 = *(undefined4 *)(param_1 + 0x16);
    puVar4[5] = 2;
    puVar4[4] = uVar1;
    puVar4[6] = param_2;
    FUN_007579c0(puVar4);
    FUN_007a77fa(puVar4);
  }
  return;
}


