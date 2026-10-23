// FUN_00533f75 @ 533f75 size=268

void FUN_00533f75(void)

{
  int local_10c;
  undefined1 local_108 [256];
  int local_8;
  
  for (local_10c = 0; local_10c < 0x69a; local_10c = local_10c + 1) {
    *(undefined4 *)(&DAT_00bcc57c + local_10c * 4) = 0;
  }
  local_8 = 0x685;
  for (local_10c = 0; local_10c < local_8; local_10c = local_10c + 1) {
    FUN_00429d50(&DAT_00afa16c + local_10c * 0x204,local_108);
    FUN_0042a0fe(local_108,&DAT_00afa16c + local_10c * 0x204,
                 *(undefined4 *)(&DAT_00afa168 + local_10c * 0x204));
    *(undefined **)(&DAT_00bcc57c + *(int *)(&DAT_00afa168 + local_10c * 0x204) * 4) =
         &DAT_00afa16c + local_10c * 0x204;
  }
  return;
}


