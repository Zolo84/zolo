// FUN_0044bb10 @ 44bb10 size=928

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0044bb10(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uStack_14;
  undefined2 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007bbb6b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_005af1f0();
  FUN_005278a0();
  piVar1 = *(int **)(param_1 + 0x4508);
  do {
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(param_1 + 0x451c);
      while (piVar1 != (int *)0x0) {
        iVar8 = *piVar1;
        piVar1 = (int *)piVar1[2];
        iVar6 = *(int *)(iVar8 + 0x58);
        if ((((iVar6 != 0) && (iVar6 != *(int *)(param_1 + 6))) &&
            (iVar6 = (&DAT_0089cad8)[iVar6], iVar6 != 0)) && (cVar5 = FUN_0044a690(), cVar5 == '\0')
           ) {
          (**(code **)(*(int *)(param_1 + 0x4518) + 0x18))();
          fVar2 = *(float *)(iVar8 + 0xec);
          fVar3 = *(float *)(iVar8 + 0xf4);
          *(int *)(iVar8 + 0x5c) = iVar6;
          if (*(char *)(iVar8 + 0x162) == '\0') {
            uVar9 = FUN_00789c90();
            FUN_004fbc90(uVar9,0x8c,0);
          }
          if (*(float *)(iVar8 + 0xf0) < fVar2) {
            fVar2 = *(float *)(iVar8 + 0xf0);
          }
          *(float *)(iVar8 + 0xec) = fVar2;
          if (fVar3 < _DAT_007e3380) {
            fVar3 = _DAT_007e3380;
          }
          *(float *)(iVar8 + 0xf4) = fVar3;
          FUN_00458210();
          *(undefined4 *)(iVar8 + 0x14c) = 0;
          FUN_005033b0();
          FUN_00458230();
          iVar4 = *(int *)(iVar6 + 0x4520);
          piVar10 = operator_new(0xe);
          if (piVar10 == (int *)0x0) {
            piVar10 = (int *)0x0;
          }
          else {
            *piVar10 = iVar8;
            piVar10[1] = iVar4;
            piVar10[2] = 0;
            *(undefined1 *)(piVar10 + 3) = 0;
          }
          iVar8 = *(int *)(iVar6 + 0x4524);
          *(int **)(iVar6 + 0x4520) = piVar10;
          *(int *)(iVar6 + 0x4524) = iVar8 + 1;
          if (iVar8 == 0) {
            *(int **)(iVar6 + 0x451c) = piVar10;
          }
          else {
            *(int **)(iVar4 + 8) = piVar10;
          }
        }
      }
      ExceptionList = pvStack_c;
      return;
    }
    iVar8 = *piVar1;
    piVar1 = (int *)piVar1[2];
    if ((*(char *)(iVar8 + 0x17c) == '\0') || (*(int *)(iVar8 + 0x176) != 0)) {
LAB_0044bc8d:
      iVar6 = (**(code **)(*(int *)(iVar8 + 0x11c) + 4))();
      if ((((iVar6 == 0) && (*(int *)(iVar8 + 0x176) == 0)) &&
          (iVar8 = (**(code **)(*(int *)(iVar8 + 0x11c) + 4))(), iVar8 == 0)) &&
         (cVar5 = FUN_0042e980(), cVar5 != '\0')) {
        FUN_005afd90();
      }
    }
    else {
      iVar6 = (**(code **)(*(int *)(iVar8 + 0x11c) + 4))();
      if (((iVar6 != 0) ||
          ((*(char *)(iVar8 + 0x17b) != '\0' ||
           (iVar6 = (**(code **)(*(int *)(iVar8 + 0x11c) + 4))(), iVar6 != 0)))) ||
         (*(int *)(iVar8 + 0x176) != 0)) goto LAB_0044bc8d;
      *(undefined1 *)(iVar8 + 0x184) = 1;
      cVar5 = FUN_0042e980();
      if (cVar5 != '\0') {
        iVar6 = *(int *)(iVar8 + 0x26);
        while (iVar6 != 0) {
          iVar6 = *(int *)(iVar6 + 8);
          FUN_00522770();
          FUN_0045e830();
        }
        puVar7 = operator_new(0xc);
        uStack_4 = 0;
        if (puVar7 != (undefined4 *)0x0) {
          FUN_00446d10();
          FUN_00458490();
          iVar6 = puVar7[1];
          *puVar7 = &PTR_FUN_007e5370;
          *(undefined4 *)(iVar6 + 0xe) = *(undefined4 *)(iVar8 + 0x18);
          *(undefined2 *)(iVar6 + 0x12) = *(undefined2 *)(iVar8 + 0x1c);
          *(undefined1 *)(puVar7[1] + 0x14) = 1;
          *(undefined1 *)(puVar7[1] + 0x15) = 0;
          *(undefined4 *)(puVar7[1] + 0x16) = 0;
          iVar8 = puVar7[1];
          *(undefined4 *)(iVar8 + 0x1a) = uStack_14;
          *(undefined2 *)(iVar8 + 0x1e) = uStack_10;
        }
        uStack_4 = 0xffffffff;
        FUN_00565bc0();
      }
    }
    FUN_00522770();
    cVar5 = FUN_0044a690();
    if (cVar5 == '\0') {
      FUN_00522770();
      FUN_0045c890();
    }
  } while( true );
}


