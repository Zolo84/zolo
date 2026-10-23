// FUN_00522930 @ 522930 size=290

void __fastcall FUN_00522930(int *param_1)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 unaff_ESI;
  byte bVar5;
  undefined4 uStack_10;
  byte bStack_d;
  
  if (*(char *)((int)param_1 + 0x17b) != '\x01') {
    *(undefined1 *)((int)param_1 + 0x17b) = 1;
    (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x2c))
              (s_gfx_map_flags_flag_retreat_bmp_0084b11c);
    (**(code **)(**(int **)((int)param_1 + 0x15a) + 0x34))(0x19);
    iVar1 = *(int *)((int)param_1 + 0x15a);
    *(undefined4 *)(iVar1 + 0x22) = 0;
    *(undefined4 *)(iVar1 + 0x26) = 10;
    *(undefined1 *)(iVar1 + 0x67) = 0;
    uVar4 = FUN_00413d60(s_flag_palette_bmp_0083c738);
    FUN_00415f20(uVar4);
    cVar3 = (**(code **)(*param_1 + 0x28))();
    bVar5 = (byte)((uint)unaff_ESI >> 0x18);
    bVar2 = bStack_d;
    if ((cVar3 != '\0') || (bVar2 = bVar5, bVar5 = bStack_d, param_1[0x99] == 1)) {
      FUN_0050bd10(0,param_1[3],0x3ca3d70a,1,0,(uint)bVar2 << 0x18,0,(uint)bVar5 << 0x18,0,
                   0xffffffff,0,1,0,0xbf800000,1);
    }
  }
  return;
}


