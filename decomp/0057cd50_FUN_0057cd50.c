// FUN_0057cd50 @ 57cd50 size=305

undefined4 __fastcall FUN_0057cd50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 *puStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_007c8ac3;
  pvStack_c = ExceptionList;
  pvVar4 = (void *)0x0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  local_14 = param_1;
  do {
    while( true ) {
      local_1c = 0;
      local_18 = 0;
      iVar1 = (**(code **)(**(int **)(param_1 + 0xbc4) + 100))
                        (*(int **)(param_1 + 0xbc4),&local_1c,&local_18,1,pvVar4,&local_20);
      if (iVar1 == -0x7788ffe2) break;
      if (iVar1 < 0) {
        if (pvVar4 == (void *)0x0) {
          ExceptionList = pvStack_c;
          return 0;
        }
        FUN_00796cd8(pvVar4);
        ExceptionList = pvStack_c;
        return 0;
      }
      if (3 < local_20) {
        if (local_1c == 0) {
          FUN_0057cea0(pvVar4,local_20,0,local_18);
        }
        else {
          puVar2 = operator_new(0xe);
          puStack_10 = puVar2;
          if (puVar2 == (undefined4 *)0x0) {
            puVar2 = (undefined4 *)0x0;
          }
          else {
            puVar2[1] = 0;
            *(undefined1 *)(puVar2 + 2) = 0;
            *(undefined1 *)((int)puVar2 + 9) = 1;
            uStack_4 = 1;
            *puVar2 = &PTR_FUN_007e943c;
            FUN_00566220(pvVar4);
          }
          uStack_4 = 0xffffffff;
          uVar3 = FUN_00568170(puVar2);
          if (puVar2 != (undefined4 *)0x0) {
            (**(code **)*puVar2)(1);
          }
          FUN_00565c50(uVar3);
          param_1 = local_14;
        }
      }
    }
    if (pvVar4 != (void *)0x0) {
      FUN_00796cd8(pvVar4);
    }
    pvVar4 = operator_new(local_20);
  } while (pvVar4 != (void *)0x0);
  ExceptionList = pvStack_c;
  return 0;
}


