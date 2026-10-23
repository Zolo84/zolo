// FUN_00690cd0 @ 690cd0 size=386

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00690cd0(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  float local_10;
  int *local_c;
  undefined1 auStack_4 [4];
  
  uVar6 = 0;
  if (((*(int *)(param_2 + 0xc) != 0) && (uVar6 = FUN_0051a4c0(), (char)uVar6 != '\0')) &&
     (uVar6 = CONCAT31((int3)(uVar6 >> 8),*(char *)(param_2 + 0x17d)),
     *(char *)(param_2 + 0x17d) == '\0')) {
    uVar7 = FUN_0051b230();
    uVar1 = *(uint *)(uVar7 + 0x482);
    local_c = (int *)0x0;
    local_10 = 0.0;
    uVar6 = uVar7;
    piVar8 = *(int **)(param_1 + 0x25a);
    if (*(int **)(param_1 + 0x25a) != (int *)0x0) {
      do {
        piVar2 = (int *)piVar8[2];
        piVar9 = (int *)*piVar8;
        uVar6 = (**(code **)(*piVar9 + 0x194))(param_2);
        if ((char)uVar6 == '\0') {
          uVar6 = piVar9[0x12];
          if (uVar6 == uVar1) break;
          fVar3 = local_10 + _DAT_007e3374;
          if ((uVar1 == 0) || (piVar8 = (int *)FUN_004c7fad(auStack_4,uVar6), *piVar8 == 0)) {
            cVar5 = (**(code **)(*(int *)(piVar9[0x12] + 0x28) + 8))();
            if (cVar5 == '\0') {
              fVar4 = (float)(*(int *)(uVar7 + 0x3f2) -
                             *(int *)(**(int **)(piVar9[0x12] + 0x2c) + 0x3f2));
              fVar3 = (float)(*(int *)(uVar7 + 0x3f6) -
                             *(int *)(**(int **)(piVar9[0x12] + 0x2c) + 0x3f6));
              fVar3 = fVar4 * fVar4 + fVar3 * fVar3;
            }
          }
          else {
            (*(code *)**(undefined4 **)piVar9[0x12])();
            cVar5 = FUN_004ca41f();
            fVar3 = _DAT_007e3374;
            if (cVar5 != '\0') {
              fVar3 = _DAT_007e3380;
            }
          }
          uVar6 = 0;
          if ((local_c == (int *)0x0) ||
             (uVar6 = CONCAT22((short)((uint)local_c >> 0x10),
                               (ushort)(fVar3 < local_10) << 8 |
                               (ushort)(NAN(fVar3) || NAN(local_10)) << 10 |
                               (ushort)(fVar3 == local_10) << 0xe), fVar3 < local_10)) {
            local_10 = fVar3;
            local_c = piVar9;
          }
        }
        piVar9 = local_c;
        piVar8 = piVar2;
      } while (piVar2 != (int *)0x0);
      if (piVar9 != (int *)0x0) {
        uVar6 = (**(code **)(*piVar9 + 0x1a8))(param_2);
        return uVar6;
      }
    }
  }
  return uVar6 & 0xffffff00;
}


