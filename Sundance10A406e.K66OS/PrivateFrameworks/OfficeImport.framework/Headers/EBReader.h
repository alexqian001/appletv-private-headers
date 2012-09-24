/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"

@class NSString;

@interface EBReader : OCBReader {
	NSString *mTemporaryDirectory;	// 44 = 0x2c
	XlObjectFactory *mXlObjectFactory;	// 48 = 0x30
	BOOL mUseStringOptimization;	// 52 = 0x34
	BOOL mIsFileStructuredStorage;	// 53 = 0x35
	const void *mBuffer;	// 56 = 0x38
}
@property(assign, nonatomic) BOOL isFileStructuredStorage;	// G=0x35064d2d; S=0x35064d3d; @synthesize=mIsFileStructuredStorage
@property(retain, nonatomic) NSString *temporaryDirectory;	// G=0x34eebc75; S=0x35064d0d; @synthesize=mTemporaryDirectory
@property(assign, nonatomic) BOOL useStringOptimization;	// G=0x34eeaa95; S=0x35064d1d; @synthesize=mUseStringOptimization
@property(readonly, assign, nonatomic) XlBinaryReader *xlReader;	// G=0x34ee652d; 
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x34ee4ea5
- (OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(OCCCryptoKey *)cryptoKey baseOutputFilenameInUTF8:(const char *)utf8;	// 0x35064c45
- (void)dealloc;	// 0x34f1ad95
- (OCCEncryptionInfoReader *)encryptionInfoReader;	// 0x34ee6a51
// declared property getter: - (BOOL)isFileStructuredStorage;	// 0x35064d2d
- (id)read;	// 0x34ee6a71
// declared property setter: - (void)setIsFileStructuredStorage:(BOOL)storage;	// 0x35064d3d
// declared property setter: - (void)setTemporaryDirectory:(id)directory;	// 0x35064d0d
// declared property setter: - (void)setUseStringOptimization:(BOOL)optimization;	// 0x35064d1d
- (BOOL)start;	// 0x34ee61c1
// declared property getter: - (id)temporaryDirectory;	// 0x34eebc75
// declared property getter: - (BOOL)useStringOptimization;	// 0x34eeaa95
// declared property getter: - (XlBinaryReader *)xlReader;	// 0x34ee652d
@end
