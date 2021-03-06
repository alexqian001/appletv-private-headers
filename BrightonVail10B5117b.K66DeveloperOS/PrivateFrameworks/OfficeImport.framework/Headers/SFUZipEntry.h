/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
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
@property(assign) long long dataLength;	// G=0x34aafcb9; S=0x34cad1ad; converted property
- (id)initFromCentralFileHeader:(const char *)centralFileHeader dataRepresentation:(id)representation;	// 0x34aae6ed
- (id)initWithDataRepresentation:(id)dataRepresentation compressionMethod:(int)method compressedSize:(unsigned long long)size uncompressedSize:(unsigned long long)size4 offset:(unsigned long long)offset crc:(unsigned)crc;	// 0x34cacb49
- (unsigned long long)backingFileDataOffset;	// 0x34cacf71
- (id)backingFilePath;	// 0x34caceb5
- (unsigned long long)calculateEncodedLength;	// 0x34cad25d
- (void)copyToFile:(id)file;	// 0x34cacc5d
- (unsigned)crc;	// 0x34cad021
- (id)data;	// 0x34ac7435
// converted property getter: - (long long)dataLength;	// 0x34aafcb9
- (unsigned long long)dataOffset;	// 0x34aaf5f9
- (void)dealloc;	// 0x34ae3135
- (long long)encodedLength;	// 0x34cacc4d
- (id)inputStream;	// 0x34aaf2ed
- (BOOL)isBackedByFile;	// 0x34cace6d
- (BOOL)isCompressed;	// 0x34cace3d
- (BOOL)isEncrypted;	// 0x34cace55
- (BOOL)isReadable;	// 0x34cacc01
- (void)readZip64ExtraField:(const char *)field size:(unsigned long)size;	// 0x34cad031
- (void)setCompressionFlags:(unsigned short)flags;	// 0x34aae8e5
- (void)setCryptoKey:(id)key;	// 0x34cad171
// converted property setter: - (void)setDataLength:(long long)length;	// 0x34cad1ad
@end

