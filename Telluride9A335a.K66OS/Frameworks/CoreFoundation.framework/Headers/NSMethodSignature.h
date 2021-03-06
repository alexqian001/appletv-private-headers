/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"


@interface NSMethodSignature : NSObject {
@private
	void *_private;	// 4 = 0x4
	void *_reserved[6];	// 8 = 0x8
}
+ (id)signatureWithObjCTypes:(const char *)objCTypes;	// 0x334626d1
- (id)init;	// 0x33506611
- (NSMethodFrameArgInfo *)_argInfo:(int)info;	// 0x33463089
- (XXStruct_0V86UA *)_frameDescriptor;	// 0x33462e95
- (id)_typeString;	// 0x335066fd
- (void)dealloc;	// 0x33506629
- (id)debugDescription;	// 0x335068e1
- (void)finalize;	// 0x335066a5
- (unsigned)frameLength;	// 0x33463071
- (const char *)getArgumentTypeAtIndex:(unsigned)index;	// 0x3348562d
- (unsigned)hash;	// 0x335067a5
- (BOOL)isEqual:(id)equal;	// 0x33506801
- (BOOL)isOneway;	// 0x3349482d
- (unsigned)methodReturnLength;	// 0x3348e4ad
- (const char *)methodReturnType;	// 0x33485605
- (unsigned)numberOfArguments;	// 0x334633b5
@end

