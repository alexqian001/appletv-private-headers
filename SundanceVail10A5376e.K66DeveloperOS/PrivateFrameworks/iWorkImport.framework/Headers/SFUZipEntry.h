/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUDataRepresentation.h"

@class SFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

@interface SFUZipEntry : SFUDataRepresentation {
	SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;	// 20 = 0x14
	int mCompressionMethod;	// 24 = 0x18
	unsigned long long mCompressedSize;	// 28 = 0x1c
	unsigned long long mUncompressedSize;	// 36 = 0x24
	unsigned long long mOffset;	// 44 = 0x2c
	unsigned mCrc;	// 52 = 0x34
	unsigned long long mDataOffset;	// 56 = 0x38
	BOOL mHasDataOffset;	// 64 = 0x40
	unsigned long long mEncodedLength;	// 68 = 0x44
	BOOL mHasEncodedLength;	// 76 = 0x4c
	SFUCryptoKey *mCryptoKey;	// 80 = 0x50
}
@property(assign) long long dataLength;	// G=0x358864b1; S=0x35886d59; converted property
- (id)initFromCentralFileHeader:(const char *)centralFileHeader dataRepresentation:(id)representation;	// 0x35886151
- (id)initWithDataRepresentation:(id)dataRepresentation compressionMethod:(int)method compressedSize:(unsigned long long)size uncompressedSize:(unsigned long long)size4 offset:(unsigned long long)offset crc:(unsigned)crc;	// 0x35886349
- (unsigned long long)backingFileDataOffset;	// 0x35886b15
- (id)backingFilePath;	// 0x35886ad1
- (unsigned long long)calculateEncodedLength;	// 0x35886fed
- (void)copyToFile:(id)file;	// 0x35886879
- (unsigned)crc;	// 0x35886b51
- (id)data;	// 0x35886701
// converted property getter: - (long long)dataLength;	// 0x358864b1
- (unsigned long long)dataOffset;	// 0x35886d99
- (void)dealloc;	// 0x35886401
- (long long)encodedLength;	// 0x358864c9
- (id)inputStream;	// 0x358864d9
- (BOOL)isBackedByFile;	// 0x35886a89
- (BOOL)isCompressed;	// 0x35886a59
- (BOOL)isEncrypted;	// 0x35886a71
- (BOOL)isReadable;	// 0x35886465
- (void)readZip64ExtraField:(const char *)field size:(unsigned long)size;	// 0x35886b61
- (void)setCompressionFlags:(unsigned short)flags;	// 0x35886ca1
- (void)setCryptoKey:(id)key;	// 0x35886d1d
// converted property setter: - (void)setDataLength:(long long)length;	// 0x35886d59
@end
