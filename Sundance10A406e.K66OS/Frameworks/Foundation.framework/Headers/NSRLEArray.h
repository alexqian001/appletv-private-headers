/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSMutableCopying.h"


@interface NSRLEArray : NSObject <NSCopying, NSMutableCopying> {
	NSRefCountedRunArray *theList;	// 4 = 0x4
}
- (id)init;	// 0x35503db1
- (id)initWithRefCountedRunArray:(NSRefCountedRunArray *)refCountedRunArray;	// 0x35503dc5
- (void)_makeNewListFrom:(NSRefCountedRunArray *)from;	// 0x35503e31
- (id)copyWithZone:(NSZone *)zone;	// 0x35520c21
- (unsigned)count;	// 0x355ee74d
- (void)dealloc;	// 0x355038c1
- (id)description;	// 0x355ee761
- (void)finalize;	// 0x355ee6f9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3551f4a9
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x35502d55
- (id)objectAtIndex:(unsigned)index effectiveRange:(NSRange *)range runIndex:(unsigned *)index3;	// 0x35526b45
- (id)objectAtRunIndex:(unsigned)runIndex length:(unsigned *)length;	// 0x35526bed
@end
