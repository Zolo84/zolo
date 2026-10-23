// FUN_006911d0 @ 6911d0 size=592

void __fastcall FUN_006911d0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uStack_28;
  int iStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_007d5393;
  local_c = ExceptionList;
  bVar3 = false;
  ExceptionList = &local_c;
  cVar5 = FUN_0044beb0();
  if (cVar5 != '\x01') {
    puVar9 = *(undefined4 **)(*(int *)(param_1 + 10) + 0xe892);
    while (puVar9 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar9[2];
      iVar6 = FUN_004e9370(*puVar9);
      puVar9 = puVar1;
      if (*(int *)(iVar6 + 0x46a) != 0) {
        bVar3 = true;
      }
    }
    piVar10 = *(int **)(*(int *)(param_1 + 10) + 0x4508);
    if (piVar10 != (int *)0x0) {
      while( true ) {
        piVar2 = (int *)piVar10[2];
        piVar10 = (int *)*piVar10;
        if (((char)piVar10[0x5f] != '\0') &&
           (cVar5 = (**(code **)(*(int *)((int)piVar10 + 0x22e) + 8))(), cVar5 != '\0')) {
          FUN_004ee3c0();
          iStack_4 = 0;
          uVar7 = FUN_004a0750();
          uVar8 = FUN_0051b230();
          cVar5 = FUN_00431220(piVar10,uVar8,uVar7);
          if (cVar5 == '\0') {
            FUN_00460000(piVar10);
            if (iStack_1c == 0) {
              ExceptionList = local_c;
              return;
            }
            do {
              iVar6 = *(int *)(iStack_1c + 8);
              FUN_00796cd8(iStack_1c);
              iStack_1c = iVar6;
            } while (iVar6 != 0);
            ExceptionList = local_c;
            return;
          }
          puVar9 = operator_new(0xc);
          iStack_4._0_1_ = 1;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            uStack_28 = uStack_28 & 0xff000000;
            uVar7 = *(undefined4 *)(*(int *)(param_1 + 10) + 0x117de);
            FUN_004c0990(0x34,&DAT_0088f24c);
            iVar6 = puVar9[1];
            *puVar9 = &PTR_FUN_007e7804;
            *(short *)(iVar6 + 0x14) = (short)uVar7;
            *(int *)(iVar6 + 0xe) = piVar10[6];
            iVar4 = piVar10[7];
            *(undefined1 *)(iVar6 + 0x16) = 1;
            *(short *)(iVar6 + 0x12) = (short)iVar4;
            *(uint *)(iVar6 + 0x18) = uStack_28;
            *(undefined2 *)(iVar6 + 0x1c) = 0;
          }
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_00565c30(puVar9);
          iStack_4 = 0xffffffff;
          while (iStack_1c != 0) {
            iVar6 = *(int *)(iStack_1c + 8);
            FUN_00796cd8(iStack_1c);
            iStack_1c = iVar6;
          }
          iStack_1c = 0;
        }
        if (((!bVar3) &&
            (cVar5 = (**(code **)(*(int *)((int)piVar10 + 0x22e) + 8))(), cVar5 != '\0')) &&
           (cVar5 = (**(code **)(*piVar10 + 0x2c))(), cVar5 != '\0')) break;
        piVar10 = piVar2;
        if (piVar2 == (int *)0x0) {
          ExceptionList = local_c;
          return;
        }
      }
      FUN_00460000(piVar10);
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = local_c;
  return;
}


