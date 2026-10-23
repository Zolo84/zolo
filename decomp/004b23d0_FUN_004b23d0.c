// FUN_004b23d0 @ 4b23d0 size=1131

void __thiscall FUN_004b23d0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int *local_18;
  int local_14;
  short local_10;
  undefined4 uStack_e;
  undefined1 auStack_8 [8];
  
  iVar3 = param_2;
  iVar6 = *(int *)(param_1 + 0xc);
  local_14 = param_1;
  if (iVar6 == 0) {
    return;
  }
  do {
    puVar5 = (undefined4 *)FUN_004b4050((short)&local_18,0);
    iVar1 = *(int *)*puVar5;
    if (*(int *)(iVar1 + 4) != 0) {
      cVar4 = FUN_004b2cf0((short)(iVar3 + 0xc));
      if (cVar4 != '\0') {
        piVar2 = *(int **)(iVar1 + 4);
        if (piVar2 == (int *)0x0) {
          return;
        }
        local_18 = piVar2;
        if ((*(char *)((int)piVar2 + 0xa5) == '\0') && ((*piVar2 != 0 || (piVar2[0x11] != 0)))) {
          iVar6 = (**(code **)(*(int *)((int)piVar2 + 6) + 4))();
          if (1 < iVar6) {
            FUN_00446d10((short)*(undefined4 *)((int)piVar2 + 0xe));
            (**(code **)(*(int *)((int)piVar2 + 6) + 0x10))();
            FUN_004739f0(local_10,uStack_e._2_2_);
          }
          iVar6 = (**(code **)(*(int *)((int)piVar2 + 0x4a) + 4))();
          if (1 < iVar6) {
            FUN_00446d10((short)*(undefined4 *)((int)piVar2 + 0x52));
            (**(code **)(*(int *)((int)piVar2 + 0x4a) + 0x10))();
            FUN_004739f0(local_10,uStack_e._2_2_);
          }
          iVar6 = (**(code **)(*(int *)(*(int *)(iVar3 + 0x80) + 0x28) + 4))();
          if (0 < iVar6) {
            *(undefined4 *)((int)piVar2 + 0x2a) = **(undefined4 **)(*(int *)(iVar3 + 0x80) + 0x2c);
          }
          iVar6 = (**(code **)(*(int *)(*(int *)(iVar3 + 0x84) + 0x28) + 4))();
          if (0 < iVar6) {
            *(undefined4 *)((int)piVar2 + 0x6e) = **(undefined4 **)(*(int *)(iVar3 + 0x84) + 0x2c);
          }
          local_10 = *(short *)(*(int *)(iVar3 + 0x78) + 0x10);
          uStack_e = *(int *)(*(int *)(iVar3 + 0x78) + 0x12);
          iVar6 = (int)*(char *)(DAT_00893530 + 0x15) +
                  ((int)*(char *)(DAT_00893530 + 0x16) + *(short *)(DAT_00893530 + 0x18) * 0xc) *
                  0x1e;
          piVar8 = *(int **)(param_1 + 0xc);
          if (*(int **)(param_1 + 0xc) == (int *)0x0) {
            return;
          }
          do {
            piVar7 = piVar8 + 1;
            piVar8 = *(int **)(*piVar8 + 4);
            if (piVar8 != (int *)0x0) {
              if ((((*(int *)((int)piVar8 + 0x9a) == uStack_e) && ((short)piVar8[0x26] == local_10))
                  && ((char)piVar8[0x29] == '\0')) &&
                 (((uint)((((char)piVar8[0x24] * -0x1e + *(short *)((int)piVar8 + 0x92) * -0x168) -
                          (int)*(char *)((int)piVar8 + 0x8f)) + iVar6) < 4 &&
                  (*(int *)((int)piVar2 + 0x2a) == *(int *)((int)piVar8 + 0x2a))))) {
                *(undefined4 *)((int)piVar8 + 0x9e) = *(undefined4 *)(param_2 + 0xc);
                uVar9 = *(undefined2 *)(param_2 + 0x10);
                *(undefined1 *)(piVar8 + 0x29) = 1;
                *(undefined2 *)((int)piVar8 + 0xa2) = uVar9;
                iVar6 = piVar2[7];
                while (iVar6 != 0) {
                  iVar3 = *(int *)(iVar6 + 10);
                  uVar10 = (undefined2)iVar6;
                  uVar9 = 0x265a;
                  FUN_00446d10(uVar10);
                  iVar6 = piVar8[6];
                  FUN_00446d10(&local_10);
                  piVar7 = (int *)(**(code **)(iVar6 + 0x28))(&param_2);
                  piVar2 = local_18;
                  iVar6 = iVar3;
                  if (*piVar7 == 0) {
                    FUN_00446d10(&local_10);
                    FUN_004739f0(uVar9,uVar10);
                    piVar2 = local_18;
                  }
                }
                iVar6 = *(int *)((int)piVar2 + 10);
                while (iVar6 != 0) {
                  iVar3 = *(int *)(iVar6 + 10);
                  uVar10 = (undefined2)iVar6;
                  uVar9 = 0x26b1;
                  FUN_00446d10(uVar10);
                  iVar6 = *(int *)((int)piVar8 + 6);
                  FUN_00446d10(&local_10);
                  piVar7 = (int *)(**(code **)(iVar6 + 0x28))(&local_18);
                  iVar6 = iVar3;
                  if (*piVar7 == 0) {
                    FUN_00446d10(&local_10);
                    FUN_004739f0(uVar9,uVar10);
                  }
                }
                iVar6 = piVar2[0x18];
                while (param_2 = iVar6, param_2 != 0) {
                  iVar6 = *(int *)(param_2 + 10);
                  uVar10 = SUB42(auStack_8,0);
                  uVar9 = 0x2711;
                  FUN_0045aac0(uVar10);
                  iVar3 = piVar8[0x17];
                  FUN_00446d10(auStack_8);
                  piVar7 = (int *)(**(code **)(iVar3 + 0x28))(&local_10);
                  if (*piVar7 == 0) {
                    FUN_00446d10(auStack_8);
                    FUN_004739f0(uVar9,uVar10);
                  }
                }
                param_2 = *(int *)((int)piVar2 + 0x4e);
                while (param_2 != 0) {
                  puVar5 = (undefined4 *)FUN_004b3f60((short)&local_10,0);
                  uVar10 = (undefined2)*puVar5;
                  uVar9 = 0x277a;
                  FUN_00446d10(uVar10);
                  iVar6 = *(int *)((int)piVar8 + 0x4a);
                  FUN_00446d10(auStack_8);
                  piVar7 = (int *)(**(code **)(iVar6 + 0x28))(&local_18);
                  if (*piVar7 == 0) {
                    FUN_00446d10(auStack_8);
                    FUN_004739f0(uVar9,uVar10);
                  }
                }
                if (*piVar8 < *piVar2) {
                  *piVar8 = *piVar2;
                }
                if (piVar8[0x11] < piVar2[0x11]) {
                  piVar8[0x11] = piVar2[0x11];
                }
                FUN_004b30a0((short)piVar2);
                return;
              }
              if (0x1e < (uint)(((*(char *)((int)piVar8 + 0x8a) * -0x1e +
                                 (short)piVar8[0x23] * -0x168) - (int)*(char *)((int)piVar8 + 0x89))
                               + iVar6)) {
                return;
              }
            }
            piVar8 = (int *)*piVar7;
            if ((int *)*piVar7 == (int *)0x0) {
              return;
            }
          } while( true );
        }
        param_2 = *(int *)(param_1 + 0xc);
        if (param_2 == 0) {
          return;
        }
        do {
          puVar5 = (undefined4 *)FUN_004b4050((short)&local_10,0);
          iVar6 = *(int *)*puVar5;
          if (*(int **)(iVar6 + 4) == piVar2) {
            (**(code **)(*(int *)(param_1 + 4) + 0x18))((short)iVar6);
            if (iVar6 == 0) {
              return;
            }
            FUN_004b2840(1);
            return;
          }
        } while (param_2 != 0);
        return;
      }
    }
    if (iVar6 == 0) {
      return;
    }
  } while( true );
}


