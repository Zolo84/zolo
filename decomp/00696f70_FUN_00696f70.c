// FUN_00696f70 @ 696f70 size=548

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00696f70(int *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  
  *(undefined1 *)(param_2 + 0x286 + (int)param_1) = 0;
  piVar1 = *(int **)((int)param_1 + param_2 * 0x12 + 0x8e);
  do {
    do {
      do {
        if (piVar1 == (int *)0x0) {
          piVar1 = *(int **)((int)param_1 + param_2 * 0x12 + 0x8e);
          while (piVar9 = piVar1, piVar9 != (int *)0x0) {
            piVar1 = (int *)piVar9[2];
            puVar8 = (undefined4 *)*piVar9;
            if ((puVar8[2] == 0) || (cVar3 = (**(code **)*puVar8)(), cVar3 != '\0')) {
              piVar5 = (int *)FUN_006971a0(param_2);
              (**(code **)(*piVar5 + 0x1c))(piVar9);
              if (puVar8[2] != 0) {
                *(undefined4 *)(puVar8[2] + 0x4e + puVar8[1] * 4) = 0;
              }
              puVar8[2] = 0;
              FUN_00796cd8(puVar8);
            }
          }
          if (param_2 == 5) {
            iVar6 = (**(code **)(*param_1 + 0x1a4))();
            puVar8 = *(undefined4 **)(iVar6 + 4);
            if (*(undefined4 **)(iVar6 + 4) != (undefined4 *)0x0) {
              do {
                puVar2 = (undefined4 *)puVar8[2];
                uVar7 = (**(code **)(*(int *)*puVar8 + 0x10))();
                FUN_00690cd0(uVar7);
                puVar8 = puVar2;
              } while (puVar2 != (undefined4 *)0x0);
              return;
            }
          }
          else if (param_2 == 6) {
            iVar6 = (**(code **)(*param_1 + 0x1c4))();
            puVar8 = *(undefined4 **)(iVar6 + 4);
            while (puVar8 != (undefined4 *)0x0) {
              puVar2 = (undefined4 *)puVar8[2];
              iVar6 = (**(code **)(*(int *)*puVar8 + 0x14))();
              cVar3 = FUN_0051a4c0();
              puVar8 = puVar2;
              if ((cVar3 != '\0') && (*(char *)(iVar6 + 0x17d) == '\0')) {
                (**(code **)(*(int *)param_1[0x9a] + 0x1c8))(iVar6);
              }
            }
          }
          return;
        }
        piVar9 = (int *)piVar1[2];
        piVar5 = (int *)*piVar1;
        cVar3 = (**(code **)*piVar5)();
        piVar1 = piVar9;
      } while ((cVar3 != '\0') || (piVar5[2] == 0));
      cVar3 = (**(code **)(*piVar5 + 4))();
      if (cVar3 == '\0') {
        (**(code **)(*piVar5 + 0x10))(param_1);
      }
      else {
        (**(code **)(*piVar5 + 0x14))(param_1);
      }
      cVar3 = (**(code **)(*piVar5 + 4))();
    } while (((cVar3 != '\0') || (cVar3 = (**(code **)*piVar5)(), cVar3 != '\0')) ||
            (piVar5[2] == 0));
    piVar9 = *(int **)((int)param_1 + param_2 * 0x12 + 0x142);
    *(undefined1 *)((int)param_1 + 0x1f2) = 1;
    while( true ) {
      do {
        if (((piVar9 == (int *)0x0) || (cVar3 = (**(code **)*piVar5)(), cVar3 != '\0')) ||
           (piVar5[2] == 0)) goto LAB_0069705a;
        piVar4 = (int *)piVar9[2];
        iVar6 = *piVar9;
        piVar9 = piVar4;
      } while (iVar6 == 0);
      if (*(float *)(*(int *)(piVar5[2] + 0x40) + 0x44) <=
          *(float *)(*(int *)(iVar6 + 0x40) + 0x44) + _DAT_007e34e0) break;
      (**(code **)(*piVar5 + 0x10))(iVar6);
    }
LAB_0069705a:
    piVar9 = *(int **)((int)param_1 + param_2 * 0x12 + 0x142);
    while (piVar9 != (int *)0x0) {
      if (*piVar9 == 0) {
        piVar5 = (int *)piVar9[2];
        piVar4 = (int *)FUN_006971c0(param_2);
        (**(code **)(*piVar4 + 0x1c))(piVar9);
        piVar9 = piVar5;
      }
      else {
        piVar9 = (int *)piVar9[2];
      }
    }
    *(undefined1 *)((int)param_1 + 0x1f2) = 0;
  } while( true );
}


