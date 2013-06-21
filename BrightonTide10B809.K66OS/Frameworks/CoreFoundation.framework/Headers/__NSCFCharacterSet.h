/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "__NSCFType.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFCharacterSet : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x310d33e9
- (BOOL)_isDeallocating;	// 0x310d3399
- (BOOL)_tryRetain;	// 0x310d3389
- (void)addCharactersInRange:(NSRange)range;	// 0x310a2b5d
- (void)addCharactersInString:(id)string;	// 0x310829fd
- (id)bitmapRepresentation;	// 0x310d340d
- (BOOL)characterIsMember:(unsigned short)member;	// 0x3108334d
- (Class)classForCoder;	// 0x310d3451
- (id)copyWithZone:(NSZone *)zone;	// 0x310a75c5
- (void)encodeWithCoder:(id)coder;	// 0x310d3481
- (void)finalize;	// 0x310d33a9
- (void)formIntersectionWithCharacterSet:(id)characterSet;	// 0x310d343d
- (void)formUnionWithCharacterSet:(id)characterSet;	// 0x31081fb5
- (BOOL)hasMemberInPlane:(unsigned char)plane;	// 0x310d33fd
- (unsigned)hash;	// 0x310d3381
- (void)invert;	// 0x31081e45
- (id)invertedSet;	// 0x31090229
- (BOOL)isEqual:(id)equal;	// 0x310d3369
- (BOOL)isSupersetOfSet:(id)set;	// 0x310d33ed
- (BOOL)longCharacterIsMember:(unsigned long)member;	// 0x310a7a0d
- (void)makeCharacterSetCompact;	// 0x310d3449
- (void)makeCharacterSetFast;	// 0x310d344d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31081e21
- (oneway void)release;	// 0x31082ced
- (void)removeCharactersInRange:(NSRange)range;	// 0x310abd0d
- (void)removeCharactersInString:(id)string;	// 0x310aba15
- (id)retain;	// 0x31082cdd
- (unsigned)retainCount;	// 0x310d33a5
@end
