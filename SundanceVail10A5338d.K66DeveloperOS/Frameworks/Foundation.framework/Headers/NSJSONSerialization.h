/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSJSONSerialization : NSObject {
	void *reserved[6];	// 4 = 0x4
}
+ (id)JSONObjectWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x37401ad9
+ (id)JSONObjectWithStream:(id)stream options:(unsigned)options error:(id *)error;	// 0x37401d99
+ (id)allocWithZone:(NSZone *)zone;	// 0x3740189d
+ (id)dataWithJSONObject:(id)jsonobject options:(unsigned)options error:(id *)error;	// 0x37401959
+ (BOOL)isValidJSONObject:(id)object;	// 0x3740192d
+ (int)writeJSONObject:(id)object toStream:(id)stream options:(unsigned)options error:(id *)error;	// 0x37401bb1
- (id)init;	// 0x374018e5
@end
