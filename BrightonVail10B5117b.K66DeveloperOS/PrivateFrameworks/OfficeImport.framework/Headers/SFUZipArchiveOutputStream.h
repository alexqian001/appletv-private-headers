/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUSimpleOutputStream.h"
#import <NSObject.h> // Unknown library

@class SFUZipFreeSpaceEntry, SFUMoveableFileOutputStream, NSMutableArray, NSData, SFUCryptoKey, SFUZipOutputEntry;
@protocol SFUOutputStream;

@interface SFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream> {
	SFUMoveableFileOutputStream *mOutputStream;	// 4 = 0x4
	SFUCryptoKey *mCryptoKey;	// 8 = 0x8
	NSData *mPassphraseHint;	// 12 = 0xc
	NSData *mEncryptedDocumentUuid;	// 16 = 0x10
	NSMutableArray *mEntries;	// 20 = 0x14
	SFUZipOutputEntry *mCurrentEntry;	// 24 = 0x18
	SFUZipOutputEntry *mLastEntryInFile;	// 28 = 0x1c
	id<SFUOutputStream> mEntryOutputStream;	// 32 = 0x20
	char *mBuffer;	// 36 = 0x24
	NSMutableArray *mFreeList;	// 40 = 0x28
	SFUZipFreeSpaceEntry *mCurrentFreeSpace;	// 44 = 0x2c
	unsigned long long mFreeBytes;	// 48 = 0x30
}
+ (unsigned long)approximateBytesForEntryHeaderWithName:(id)name;	// 0x34ca8ce9
- (id)initWithOutputStream:(id)outputStream cryptoKey:(id)key passphraseHint:(id)hint;	// 0x34ca8d19
- (id)initWithPath:(id)path;	// 0x34ca8f51
- (id)initWithPath:(id)path cryptoKey:(id)key passphraseHint:(id)hint;	// 0x34ca8f71
- (void)beginEntryWithName:(id)name isCompressed:(BOOL)compressed uncompressedSize:(unsigned long long)size;	// 0x34ca9185
- (id)beginUncompressedUnknownSizeEntryWithName:(id)name;	// 0x34ca96a1
- (void)beginUnknownSizeEntryWithName:(id)name isCompressed:(BOOL)compressed;	// 0x34ca9679
- (BOOL)canRemoveEntryWithName:(id)name;	// 0x34ca9919
- (void)close;	// 0x34ca9ff5
- (void)coalesceAndTruncateFreeSpace;	// 0x34cab479
- (unsigned)crc32ForEntry:(id)entry;	// 0x34caaa39
- (void)dealloc;	// 0x34ca90ad
- (id)entriesAtPath:(id)path;	// 0x34caa731
- (id)entryNames;	// 0x34caa689
- (void)finishEntry;	// 0x34caab41
- (void)flush;	// 0x34caa945
- (unsigned long long)freeBytes;	// 0x34caa965
- (void)moveToPath:(id)path;	// 0x34caa469
- (void)removeEntryWithName:(id)name;	// 0x34ca9a8d
- (void)reset;	// 0x34caa97d
- (void)setCrc32ForCurrentEntry:(unsigned)currentEntry;	// 0x34ca979d
- (void)setEncryptedDocumentUuid:(id)uuid;	// 0x34ca9f79
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x34ca97d1
- (void)writeCentralFileHeaderUsingEntry:(id)entry isFirstEntry:(BOOL)entry2;	// 0x34cabaf1
- (void)writeEndOfCentralDirectoryWithOffset:(long long)offset;	// 0x34cac069
- (unsigned)writeLocalFileHeaderForEntry:(id)entry;	// 0x34cab879
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)offset;	// 0x34cac2f1
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)offset;	// 0x34cac1cd
@end
