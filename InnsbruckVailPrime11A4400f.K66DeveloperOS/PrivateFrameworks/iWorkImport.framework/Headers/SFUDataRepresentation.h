/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import </libobjc.A.h>

@class NSData;

@interface SFUDataRepresentation : NSObject {
	BOOL mHasSha1Hash;	// 4 = 0x4
	NSData *mSha1Hash;	// 8 = 0x8
}
- (id)bufferedInputStream;	// 0x33d22051
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x33d220cd
- (CGDataProviderRef)cgDataProvider;	// 0x33d22781
- (int)compare:(id)compare;	// 0x33d22cf1
- (long long)dataLength;	// 0x33d22031
- (long long)encodedLength;	// 0x33d22039
- (BOOL)hasSameLocationAs:(id)as;	// 0x33d22131
- (unsigned)hash;	// 0x33d22921
- (id)inputStream;	// 0x33d2204d
- (BOOL)isEncrypted;	// 0x33d22049
- (BOOL)isEqual:(id)equal;	// 0x33d22ad9
- (BOOL)isReadable;	// 0x33d2202d
- (unsigned long)readIntoData:(id)data;	// 0x33d227b9
- (id)sha1Hash;	// 0x33d22935
- (unsigned)uint32Hash;	// 0x33d22931
- (xmlDoc *)xmlDocument;	// 0x33d22135
- (xmlTextReader *)xmlReader;	// 0x33d22481
- (xmlTextReader *)xmlReaderForGzippedData;	// 0x33d225f1
- (xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)inputStream;	// 0x33d22605
@end
