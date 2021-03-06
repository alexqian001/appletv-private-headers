/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSURLDownloadDecoder.h"
#import "NSURLDataDecoder.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder, NSURLDataDecoder> {
@private
	z_stream_s _stream;	// 4 = 0x4
	unsigned _modificationTime;	// 60 = 0x3c
	NSString *_filename;	// 64 = 0x40
	BOOL _streamInitialized;	// 68 = 0x44
	BOOL _decodedHeader;	// 69 = 0x45
	BOOL _finishedInflating;	// 70 = 0x46
	BOOL _pad;	// 71 = 0x47
}
+ (id)MIMEType;	// 0x33714f09
+ (BOOL)canDecodeDownloadHeaderData:(id)data;	// 0x33714ee5
+ (BOOL)decodeDownloadHeader:(id)header headerLength:(int *)length modificationTime:(unsigned *)time filename:(id *)filename;	// 0x33714d89
- (id)init;	// 0x33714f15
- (void)dealloc;	// 0x33714f91
- (id)decodeData:(id)data;	// 0x33715051
- (BOOL)decodeDownloadData:(id)data dataForkData:(id *)data2 resourceForkData:(id *)data3;	// 0x33715219
- (id)fileAttributes;	// 0x33715281
- (id)filenameWithOriginalFilename:(id)originalFilename;	// 0x337152f5
- (void)finalize;	// 0x33715001
- (BOOL)finishDownloadDecoding;	// 0x33715269
- (BOOL)isFinishedDecoding;	// 0x33715241
@end

