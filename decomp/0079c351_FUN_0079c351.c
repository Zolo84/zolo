// FUN_0079c351 @ 79c351 size=75

void FUN_0079c351(void)

{
  undefined1 local_10 [12];
  
  if ((DAT_00dc5018 & 1) == 0) {
    DAT_00dc5018 = DAT_00dc5018 | 1;
    FUN_0079c39c("bad allocation");
    FUN_007a63e8(&LAB_0079c411);
  }
  FUN_0079c3f9(&DAT_00dc5020);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_00829bd0);
}


