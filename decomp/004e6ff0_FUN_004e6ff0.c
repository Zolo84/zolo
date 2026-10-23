// FUN_004e6ff0 @ 4e6ff0 size=405

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6ff0(void)

{
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  undefined4 *puVar4;
  int extraout_ECX;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  int iStack00000004;
  int in_stack_0000100c;
  undefined4 in_stack_00001010;
  undefined4 in_stack_ffffffec;
  undefined2 uVar10;
  
  uVar10 = (undefined2)((uint)in_stack_ffffffec >> 0x10);
  FUN_007a69e0();
  iVar8 = 0;
  if (*(undefined4 **)(in_stack_0000100c + 4) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(in_stack_0000100c + 4);
    puVar5 = (undefined4 *)&stack0x00000008;
    do {
      if (0x3ff < iVar8) break;
      puVar1 = (undefined4 *)puVar4[2];
      iVar8 = iVar8 + 1;
      *puVar5 = *puVar4;
      puVar4 = puVar1;
      puVar5 = puVar5 + 1;
    } while (puVar1 != (undefined4 *)0x0);
    if (iVar8 != 0) {
      fVar9 = _DAT_007e3380;
      if (*(int *)(extraout_ECX + 0x3d4) != 0) {
        fVar9 = *(float *)(*(int *)(extraout_ECX + 0x1d6) + 0x14);
      }
      fVar9 = *(float *)(*(int *)(extraout_ECX + 0x3d8) + 0x380a) * fVar9;
      if ((DAT_00dc16e1 != '\0') &&
         (cVar3 = FUN_004ec380(*(undefined4 *)(DAT_00893530 + 0x14),
                               CONCAT22(uVar10,*(undefined2 *)(DAT_00893530 + 0x18))), cVar3 != '\0'
         )) {
        fVar9 = _DAT_008772ac * fVar9;
      }
      if (((DAT_00dc16e8 != '\0') && (*(int *)(extraout_ECX + 0x3d8) != 0)) &&
         (_DAT_007e3380 < *(float *)(*(int *)(extraout_ECX + 0x1e6) + 0x14))) {
        fVar9 = (*(float *)(*(int *)(extraout_ECX + 0x3d8) + 0xe864) *
                 *(float *)(*(int *)(extraout_ECX + 0x1e6) + 0x14) * _DAT_00dc16e4 + _DAT_007e3374)
                * fVar9;
      }
      iStack00000004 = 0;
      fVar2 = _DAT_007e3380;
joined_r0x004e7102:
      if (fVar2 < fVar9) {
        iVar7 = 3;
        do {
          iVar6 = 0;
          do {
            if (iVar6 != 0) {
LAB_004e715c:
              FUN_004e6dd0(iVar6,in_stack_00001010);
LAB_004e7165:
              iStack00000004 = iStack00000004 + 1;
              fVar2 = (float)iStack00000004;
              goto joined_r0x004e7102;
            }
            iVar7 = iVar7 + -1;
            iVar6 = _rand();
            iVar6 = *(int *)(&stack0x00000008 + (iVar6 % iVar8) * 4);
            if (iVar7 < 1) {
              if (iVar6 != 0) goto LAB_004e715c;
              goto LAB_004e7165;
            }
          } while ((_DAT_007e3380 < *(float *)(iVar6 + 0xec) - *(float *)(iVar6 + 0x7c)) ||
                  (_DAT_007e3380 < *(float *)(iVar6 + 0xf4) - *(float *)(iVar6 + 0x80)));
        } while( true );
      }
    }
  }
  return;
}


