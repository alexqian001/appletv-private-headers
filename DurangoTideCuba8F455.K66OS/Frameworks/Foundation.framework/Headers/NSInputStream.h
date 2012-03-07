/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSInputStream.h> // Unknown library


@interface NSInputStream (NSCFInputStreamAdditions)
- (XXStruct_K5nmsA)_cfStreamError;	// 0x310819d5
@end

@interface NSInputStream (NSInputStream)
+ (id)allocWithZone:(NSZone *)zone;	// 0x31081979
+ (id)inputStreamWithData:(id)data;	// 0x31081515
+ (id)inputStreamWithFileAtPath:(id)path;	// 0x310814dd
+ (id)inputStreamWithURL:(id)url;	// 0x310814a5
- (unsigned long)_cfTypeID;	// 0x3108191d
- (BOOL)getBuffer:(char **)buffer length:(unsigned *)length;	// 0x31081119
- (BOOL)hasBytesAvailable;	// 0x310810f5
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x3108113d
@end
