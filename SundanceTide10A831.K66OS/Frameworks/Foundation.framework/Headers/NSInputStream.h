/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSInputStream.h> // Unknown library


@interface NSInputStream (NSInputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x325a9045
+ (id)inputStreamWithData:(id)data;	// 0x325a90a1
+ (id)inputStreamWithFileAtPath:(id)path;	// 0x325a90e1
+ (id)inputStreamWithURL:(id)url;	// 0x325a9121
- (unsigned long)_cfTypeID;	// 0x325a91d1
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x325a9189
- (BOOL)hasBytesAvailable;	// 0x325a91ad
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x325a9161
@end

@interface NSInputStream (NSCFInputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x325a9389
@end

