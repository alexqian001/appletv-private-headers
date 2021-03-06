/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSMutableString.h"
#import "Foundation-Structs.h"


@interface NSPlaceholderMutableString : NSMutableString {
}
- (id)init;	// 0x3158aafd
- (id)initWithBytes:(const void *)bytes length:(unsigned)length encoding:(unsigned)encoding;	// 0x31591481
- (id)initWithBytesNoCopy:(void *)bytesNoCopy length:(unsigned)length encoding:(unsigned)encoding freeWhenDone:(BOOL)done;	// 0x315f8b01
- (id)initWithCString:(const char *)cstring encoding:(unsigned)encoding;	// 0x315f8be9
- (id)initWithCStringNoCopy:(char *)cstringNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x315f8c95
- (id)initWithCapacity:(unsigned)capacity;	// 0x31590e25
- (id)initWithCharactersNoCopy:(unsigned short *)charactersNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x315f8bad
- (id)initWithFormat:(id)format locale:(id)locale arguments:(void *)arguments;	// 0x315a6675
- (id)initWithString:(id)string;	// 0x3158a96d
- (BOOL)_isDeallocating;	// 0x315f8af5
- (BOOL)_tryRetain;	// 0x315f8af9
- (id)autorelease;	// 0x315f8ae1
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x315f8d1d
- (void)dealloc;	// 0x315f8afd
- (unsigned)length;	// 0x315f8ced
- (oneway void)release;	// 0x315f8af1
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x315f8d4d
- (id)retain;	// 0x315f8ae5
- (unsigned)retainCount;	// 0x315f8ae9
@end

