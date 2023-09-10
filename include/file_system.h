#ifndef GUARD_FILE_SYSTEM_H
#define GUARD_FILE_SYSTEM_H

// size: 0x8
typedef struct File
{
    /* 0x0 */ char *name;
    /* 0x4 */ u8 *data;
} File;

// size: 0x8
typedef struct OpenedFile
{
    /* 0x0 */ File *file;
    /* 0x4 */ u8 *data;
} OpenedFile;

// size: 0x10
typedef struct FileArchive
{
    /* 0x0 */ char magic[8];
    /* 0x8 */ s32 count;
    /* 0xC */ File *entries;
} FileArchive;

// size: 0x8
typedef struct SiroArchive
{
    /* 0x0 */ u32 magic;
    /* 0x4 */ u8 *data;
} SiroArchive;

// size: 0x8
typedef struct UnkFileStruct
{
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
} UnkFileStruct;

OpenedFile *Call_OpenFileAndGetFileDataPtr(const u8 *filename, const FileArchive *arc);
void CloseFile(OpenedFile *openedFile);
u8 *GetFileDataPtr(OpenedFile *openedFile, s32 unused);
void InitFileSystem(void);
OpenedFile *OpenFile(const u8 *filename, const FileArchive *arc);
OpenedFile *OpenFileAndGetFileDataPtr(const u8 *filename, const FileArchive *arc);

u32 sub_800A8F8(u32 value);

#endif //GUARD_FILE_SYSTEM_H
