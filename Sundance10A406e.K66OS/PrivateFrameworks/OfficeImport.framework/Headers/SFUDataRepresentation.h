/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface SFUDataRepresentation : NSObject {
	BOOL mHasHash;	// 4 = 0x4
	unsigned mHash;	// 8 = 0x8
	BOOL mHasSha1Hash;	// 12 = 0xc
	NSData *mSha1Hash;	// 16 = 0x10
}
- (id)bufferedInputStream;	// 0x34f2a489
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x35120165
- (CGDataProviderRef)cgDataProvider;	// 0x3512035d
- (int)compare:(id)compare;	// 0x35120c05
- (long long)dataLength;	// 0x35120055
- (long long)encodedLength;	// 0x351200d5
- (BOOL)hasSameLocationAs:(id)as;	// 0x351201c9
- (unsigned)hash;	// 0x35120631
- (id)inputStream;	// 0x351200e9
- (BOOL)isEncrypted;	// 0x351200e5
- (BOOL)isEqual:(id)equal;	// 0x35120a09
- (BOOL)isReadable;	// 0x35120051
- (unsigned long)readIntoData:(id)data;	// 0x35120431
- (id)sha1Hash;	// 0x35120861
- (xmlDoc *)xmlDocument;	// 0x34f2bf91
- (xmlTextReader *)xmlReader;	// 0x34f40151
- (xmlTextReader *)xmlReaderForGzippedData;	// 0x351201cd
- (xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)inputStream;	// 0x351201e1
@end

