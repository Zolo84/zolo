// FUN_004b2880 @ 4b2880 size=733

void __thiscall FUN_004b2880(int param_1,uint param_2)

{
  undefined2 uVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  undefined2 local_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined1 local_4 [4];
  
  uVar5 = param_2;
  iVar9 = *(int *)(param_1 + 0xc);
  if (iVar9 != 0) {
    while( true ) {
      puVar8 = (undefined4 *)FUN_004b4050((short)&param_2,0);
      iVar11 = *(int *)*puVar8;
      if ((*(int *)(iVar11 + 4) != 0) && (cVar6 = FUN_004b2cf0((short)(uVar5 + 0xc)), cVar6 != '\0')
         ) break;
      if (iVar9 == 0) {
        return;
      }
    }
    piVar2 = *(int **)(iVar11 + 4);
    if (piVar2 != (int *)0x0) {
      uVar4 = param_2 >> 8;
      param_2 = param_2 & 0xffffff00;
      if ((6 < *(int *)(uVar5 + 0x74)) && (*(int *)(uVar5 + 0x74) < 9)) {
        if (piVar2[0x11] == 0) {
          *(undefined1 *)((int)piVar2 + 0xa5) = 1;
        }
        else {
          param_2 = CONCAT31((int3)uVar4,1);
        }
      }
      if ((*(char *)((int)piVar2 + 0xa5) == '\0') && ((*piVar2 != 0 || (piVar2[0x11] != 0)))) {
        if ((*(char *)(*(int *)(uVar5 + 0x80) + 0x3f) == '\0') &&
           (iVar9 = FUN_004b40b0(), *(char *)(iVar9 + 0x3f) != '\0')) {
          uVar7 = 1;
        }
        else {
          uVar7 = 0;
        }
        *(undefined1 *)(piVar2 + 1) = uVar7;
        if ((*(char *)(*(int *)(uVar5 + 0x84) + 0x3f) == '\0') &&
           (iVar9 = FUN_004b40b0(), *(char *)(iVar9 + 0x3f) != '\0')) {
          cVar6 = '\x01';
        }
        else {
          cVar6 = '\0';
        }
        *(char *)(piVar2 + 0x12) = cVar6;
        if ((((char)param_2 != '\0') && ((char)piVar2[1] == '\0')) && (cVar6 == '\0')) {
          *(undefined1 *)(piVar2 + 1) = 1;
          *(undefined1 *)(piVar2 + 0x12) = 0;
        }
        iVar9 = DAT_00893530;
        *(undefined4 *)((int)piVar2 + 0x8e) = *(undefined4 *)(DAT_00893530 + 0x14);
        uVar1 = *(undefined2 *)(iVar9 + 0x18);
        *(undefined1 *)(piVar2 + 0x29) = 0;
        *(undefined2 *)((int)piVar2 + 0x92) = uVar1;
        for (puVar3 = *(undefined2 **)(uVar5 + 0x16); puVar3 != (undefined2 *)0x0;
            puVar3 = *(undefined2 **)(puVar3 + 5)) {
          local_c = *puVar3;
          uStack_a = (undefined2)*(undefined4 *)(puVar3 + 1);
          uStack_8 = (undefined2)((uint)*(undefined4 *)(puVar3 + 1) >> 0x10);
          iVar9 = FUN_00428ee0((short)&local_c);
          if ((iVar9 != 0) && (iVar9 != 8)) {
            iVar9 = *(int *)(iVar9 + 0x50);
            if ((iVar9 == *(int *)((int)piVar2 + 0x2a)) ||
               (piVar10 = (int *)(**(code **)(*(int *)(*(int *)(uVar5 + 0x80) + 0x28) + 0x28))
                                           ((short)&param_2,(short)iVar9), *piVar10 != 0)) {
              FUN_0049a190(*puVar3,(short)((uint)*(undefined4 *)(puVar3 + 1) >> 0x10));
            }
            if ((iVar9 == *(int *)((int)piVar2 + 0x6e)) ||
               (piVar10 = (int *)(**(code **)(*(int *)(*(int *)(uVar5 + 0x84) + 0x28) + 0x28))
                                           ((short)local_4,(short)iVar9), *piVar10 != 0)) {
              FUN_0049a190(*puVar3,(short)((uint)*(undefined4 *)(puVar3 + 1) >> 0x10));
            }
          }
        }
        iVar9 = *piVar2;
        iVar11 = piVar2[0x11];
        local_c = (undefined2)iVar9;
        uStack_a = (undefined2)((uint)iVar9 >> 0x10);
        if (iVar11 < iVar9) {
          local_c = (undefined2)iVar11;
          uStack_a = (undefined2)((uint)iVar11 >> 0x10);
        }
        param_2 = (((((int)*(short *)((int)piVar2 + 0x92) - (int)(short)piVar2[0x23]) * 0xc -
                    (int)*(char *)((int)piVar2 + 0x8a)) + (int)(char)piVar2[0x24]) * 0x1e -
                  (int)*(char *)((int)piVar2 + 0x89)) + (int)*(char *)((int)piVar2 + 0x8f);
        if ((int)param_2 < 2) {
          param_2 = 2;
        }
        iVar9 = (**(code **)(*(int *)((int)piVar2 + 0x32) + 4))();
        iVar11 = (**(code **)(*(int *)((int)piVar2 + 0x76) + 4))();
        piVar2[0x25] = (int)(SQRT((float)(int)param_2) * (float)CONCAT22(uStack_a,local_c) +
                            (float)((iVar9 + iVar11) * 3));
        return;
      }
      param_2 = *(int *)(param_1 + 0xc);
      if (param_2 != 0) {
        while( true ) {
          puVar8 = (undefined4 *)FUN_004b4050((short)local_4,0);
          iVar9 = *(int *)*puVar8;
          if (*(int **)(iVar9 + 4) == piVar2) break;
          if (param_2 == 0) {
            return;
          }
        }
        (**(code **)(*(int *)(param_1 + 4) + 0x18))((short)iVar9);
        if (iVar9 != 0) {
          FUN_004b2840(1);
        }
      }
    }
  }
  return;
}


