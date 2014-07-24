/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUDataRepresentation.h"

@class NSString, SFUCryptoKey;
@protocol SFUInputStream;

@interface SFUFileDataRepresentation : SFUDataRepresentation {
	NSString *mPath;	// 12 = 0xc
	int mSharedFd;	// 16 = 0x10
	long long mFileLength;	// 20 = 0x14
	unsigned long mFileType;	// 28 = 0x1c
	BOOL mHasFileAttributes;	// 32 = 0x20
	long long mPlaintextDataLength;	// 36 = 0x24
	SFUCryptoKey *mCryptoKey;	// 44 = 0x2c
	id<SFUInputStream> mInputStream;	// 48 = 0x30
	BOOL mDeleteFileWhenDone;	// 52 = 0x34
}
@property(assign) unsigned long fileType;	// G=0x33d23265; S=0x33d2328d; converted property
- (id)initWithInputStream:(id)inputStream cryptoKey:(id)key dataLength:(long long)length;	// 0x33d230dd
- (id)initWithPath:(id)path;	// 0x33d22fbd
- (id)initWithPath:(id)path cryptoKey:(id)key dataLength:(long long)length;	// 0x33d23011
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor;	// 0x33d22fe5
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor cryptoKey:(id)key dataLength:(long long)length;	// 0x33d2303d
- (long long)dataLength;	// 0x33d23451
- (void)dealloc;	// 0x33d23159
- (void)deleteFileWhenDone;	// 0x33d236fd
- (id)description;	// 0x33d2320d
- (long long)encodedLength;	// 0x33d23489
// converted property getter: - (unsigned long)fileType;	// 0x33d23265
- (BOOL)hasSameLocationAs:(id)as;	// 0x33d23685
- (id)inputStream;	// 0x33d23515
- (BOOL)isCryptoKeyIdenticalToKey:(id)key;	// 0x33d234cd
- (BOOL)isEncrypted;	// 0x33d234b5
- (BOOL)isReadable;	// 0x33d23435
- (id)path;	// 0x33d23255
- (void)readFileAttributes;	// 0x33d23711
// converted property setter: - (void)setFileType:(unsigned long)type;	// 0x33d2328d
@end
