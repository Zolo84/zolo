// FUN_0068f710 @ 68f710 size=106

void __fastcall FUN_0068f710(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_8;
  
  local_8 = 10;
  iVar3 = param_1;
  do {
    puVar2 = *(undefined4 **)(iVar3 + 4);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[2];
      FUN_00796cd8(*puVar2);
      FUN_00796cd8(puVar2);
      puVar2 = puVar1;
    }
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    iVar3 = iVar3 + 0x12;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  FUN_007a8882(param_1,0x12,10,FUN_0068f780);
  return;
}


