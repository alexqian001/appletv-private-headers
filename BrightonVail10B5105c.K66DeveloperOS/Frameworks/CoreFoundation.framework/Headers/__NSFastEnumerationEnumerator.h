/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSEnumerator.h"
#import "CoreFoundation-Structs.h"


@interface __NSFastEnumerationEnumerator : NSEnumerator {
	id<NSFastEnumeration> _obj;	// 4 = 0x4
	id _origObj;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
	unsigned _mut;	// 16 = 0x10
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x356c5c51
- (id)initWithObject:(id)object;	// 0x356c5c71
- (void)dealloc;	// 0x356c5e51
- (id)nextObject;	// 0x356c5cb5
@end
