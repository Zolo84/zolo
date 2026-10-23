// FUN_004ef470 @ 4ef470 size=209

void FUN_004ef470(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 local_20c [256];
  undefined1 local_10c [256];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_007c020b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007a630a(local_20c,s__s_terrain_types_csv_00848fa8,&DAT_00dc1970);
  FUN_00426120(local_20c);
  iVar2 = 0;
  local_4 = 0;
  FUN_00426330(1);
  puVar3 = &DAT_00ad2a08;
  do {
    FUN_004262f0(1);
    FUN_004265c0(local_10c);
    uVar1 = FUN_0042b6c9(*(undefined4 *)((int)&PTR_s_TERRAIN_PLAINS_00848ec0 + iVar2));
    *(undefined4 *)((int)&DAT_00ad29d8 + iVar2) = uVar1;
    FUN_00426470(puVar3);
    puVar3 = puVar3 + 8;
    iVar2 = iVar2 + 4;
  } while ((int)puVar3 < 0xad2a60);
  local_4 = 0xffffffff;
  FUN_004262d0();
  ExceptionList = local_c;
  return;
}


