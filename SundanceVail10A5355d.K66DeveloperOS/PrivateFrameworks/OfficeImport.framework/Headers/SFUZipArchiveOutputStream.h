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
+ (unsigned long)approximateBytesForEntryHeaderWithName:(id)name;	// 0x31e4fc39
- (id)initWithOutputStream:(id)outputStream cryptoKey:(id)key passphraseHint:(id)hint;	// 0x31e4fc69
- (id)initWithPath:(id)path;	// 0x31e4fea1
- (id)initWithPath:(id)path cryptoKey:(id)key passphraseHint:(id)hint;	// 0x31e4fec1
- (void)beginEntryWithName:(id)name isCompressed:(BOOL)compressed uncompressedSize:(unsigned long long)size;	// 0x31e500d5
- (id)beginUncompressedUnknownSizeEntryWithName:(id)name;	// 0x31e505f1
- (void)beginUnknownSizeEntryWithName:(id)name isCompressed:(BOOL)compressed;	// 0x31e505c9
- (BOOL)canRemoveEntryWithName:(id)name;	// 0x31e50869
- (void)close;	// 0x31e50f45
- (void)coalesceAndTruncateFreeSpace;	// 0x31e523c9
- (unsigned)crc32ForEntry:(id)entry;	// 0x31e51989
- (void)dealloc;	// 0x31e4fffd
- (id)entriesAtPath:(id)path;	// 0x31e51681
- (id)entryNames;	// 0x31e515d9
- (void)finishEntry;	// 0x31e51a91
- (void)flush;	// 0x31e51895
- (unsigned long long)freeBytes;	// 0x31e518b5
- (void)moveToPath:(id)path;	// 0x31e513b9
- (void)removeEntryWithName:(id)name;	// 0x31e509dd
- (void)reset;	// 0x31e518cd
- (void)setCrc32ForCurrentEntry:(unsigned)currentEntry;	// 0x31e506ed
- (void)setEncryptedDocumentUuid:(id)uuid;	// 0x31e50ec9
- (void)writeBuffer:(const char *)buffer size:(unsigned long)size;	// 0x31e50721
- (void)writeCentralFileHeaderUsingEntry:(id)entry isFirstEntry:(BOOL)entry2;	// 0x31e52a41
- (void)writeEndOfCentralDirectoryWithOffset:(long long)offset;	// 0x31e52fb9
- (unsigned)writeLocalFileHeaderForEntry:(id)entry;	// 0x31e527c9
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)offset;	// 0x31e53241
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)offset;	// 0x31e5311d
@end

