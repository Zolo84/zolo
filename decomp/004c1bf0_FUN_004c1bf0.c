// FUN_004c1bf0 @ 4c1bf0 size=340

undefined4 * __thiscall FUN_004c1bf0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007bee7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00426120(param_2);
  local_4 = 0;
  FUN_00426330(1);
  iVar3 = 7;
  puVar4 = param_1;
  do {
    FUN_004262f0(1);
    iVar5 = 7;
    do {
      FUN_004265c0(local_10c);
      iVar1 = FUN_007a8730(&DAT_0083f6fc,local_10c);
      uVar2 = 0;
      if (iVar1 != 0) {
        iVar1 = FUN_007a8730(&DAT_0083f6f8,local_10c);
        if (iVar1 == 0) {
          uVar2 = 1;
        }
        else {
          iVar1 = FUN_007a8730(&DAT_0083f6f4,local_10c);
          if (iVar1 == 0) {
            uVar2 = 2;
          }
          else {
            iVar1 = FUN_007a8730(&DAT_0083f6f0,local_10c);
            if (iVar1 == 0) {
              uVar2 = 3;
            }
            else {
              iVar1 = FUN_007a8730(&DAT_0083f6ec,local_10c);
              if (iVar1 == 0) {
                uVar2 = 4;
              }
              else {
                FUN_007a8730(&DAT_0083f6e8,local_10c);
                uVar2 = 0xffffffff;
              }
            }
          }
        }
      }
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_4 = 0xffffffff;
  FUN_004262d0();
  ExceptionList = local_c;
  return param_1;
}


