// FUN_004d5de0 @ 4d5de0 size=116

undefined4 __fastcall FUN_004d5de0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x10e);
  while( true ) {
    do {
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      puVar1 = (undefined4 *)puVar2[2];
      iVar4 = FUN_004e9370(*puVar2);
      puVar2 = puVar1;
    } while (*(int *)(iVar4 + 0x254) != 8);
    cVar3 = FUN_004a3020(iVar4,0);
    if (cVar3 == '\0') break;
    iVar4 = FUN_004e9370(*(undefined4 *)(param_1 + 0x11c));
    cVar3 = FUN_004ed600(*(undefined4 *)(param_1 + 0x12a),*(undefined4 *)(iVar4 + 0x3dc));
    if (cVar3 == '\0') {
      return 1;
    }
  }
  return 1;
}


