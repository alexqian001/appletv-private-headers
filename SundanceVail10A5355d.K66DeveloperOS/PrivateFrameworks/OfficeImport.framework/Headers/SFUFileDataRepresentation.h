/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"

@class NSString, SFUCryptoKey;

@interface SFUFileDataRepresentation : SFUDataRepresentation {
	NSString *mPath;	// 20 = 0x14
	int mSharedFd;	// 24 = 0x18
	long long mFileLength;	// 28 = 0x1c
	unsigned long mFileType;	// 36 = 0x24
	BOOL mHasFileAttributes;	// 40 = 0x28
	long long mPlaintextDataLength;	// 44 = 0x2c
	SFUCryptoKey *mCryptoKey;	// 52 = 0x34
	BOOL mDeleteFileWhenDone;	// 56 = 0x38
}
@property(assign) unsigned long fileType;	// G=0x31e4b25d; S=0x31e4b285; converted property
- (id)initWithCopyOfData:(id)data path:(id)path;	// 0x31e4ae51
- (id)initWithCopyOfData:(id)data path:(id)path cryptoKey:(id)key;	// 0x31e4ae75
- (id)initWithPath:(id)path;	// 0x31e4adfd
- (id)initWithPath:(id)path cryptoKey:(id)key dataLength:(long long)length;	// 0x31e4ae25
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor;	// 0x31c53df1
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor cryptoKey:(id)key dataLength:(long long)length;	// 0x31c53e1d
- (long long)dataLength;	// 0x31c549a9
- (void)dealloc;	// 0x31c8a319
- (void)deleteFileWhenDone;	// 0x31e4b521
- (id)description;	// 0x31e4b215
- (long long)encodedLength;	// 0x31c54685
// converted property getter: - (unsigned long)fileType;	// 0x31e4b25d
- (BOOL)hasSameLocationAs:(id)as;	// 0x31e4b4a9
- (id)inputStream;	// 0x31c544dd
- (BOOL)isCryptoKeyIdenticalToKey:(id)key;	// 0x31e4b461
- (BOOL)isEncrypted;	// 0x31e4b449
- (BOOL)isReadable;	// 0x31e4b42d
- (id)path;	// 0x31c53f41
- (void)readFileAttributes;	// 0x31c546b1
// converted property setter: - (void)setFileType:(unsigned long)type;	// 0x31e4b285
@end

