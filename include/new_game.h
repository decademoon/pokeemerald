#ifndef GUARD_NEW_GAME_H
#define GUARD_NEW_GAME_H

void WriteUnalignedWord(u32 var, u8 *dataPtr);
void CopyUnalignedWord(u8 *copyTo, u8 *copyFrom);
void InitPlayerTrainerId(void);
void SetDefaultOptions(void);
void ClearPokedexFlags(void);
void WarpToTruck(void);
void NewGameInitData(void);

#endif // GUARD_NEW_GAME_H
