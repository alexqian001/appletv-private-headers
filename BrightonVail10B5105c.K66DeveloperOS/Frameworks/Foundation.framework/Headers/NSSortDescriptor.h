/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSSortDescriptor : NSObject <NSCoding, NSCopying> {
	unsigned _sortDescriptorFlags;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	SEL _selector;	// 12 = 0xc
	id _selectorOrBlock;	// 16 = 0x10
}
@property(readonly, retain) NSString *key;	// G=0x36071401; converted property
@property(readonly, assign) SEL selector;	// G=0x360713b1; converted property
+ (id)_defaultSelectorName;	// 0x36116951
+ (void)initialize;	// 0x3608af6d
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending;	// 0x360adf6d
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;	// 0x36116909
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;	// 0x360adf99
- (id)initWithCoder:(id)coder;	// 0x36116b91
- (id)initWithKey:(id)key ascending:(BOOL)ascending;	// 0x3608ed4d
- (id)initWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;	// 0x3611695d
- (id)initWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;	// 0x36070db9
- (BOOL)_isEqualToSortDescriptor:(id)sortDescriptor;	// 0x36117071
- (id)_selectorName;	// 0x36116d85
- (void)_setAscending:(BOOL)ascending;	// 0x36116cd9
- (void)_setKey:(id)key;	// 0x36116c95
- (void)_setSelectorName:(id)name;	// 0x36116d1d
- (BOOL)ascending;	// 0x3607139d
- (id)comparator;	// 0x36116cf5
- (int)compareObject:(id)object toObject:(id)object2;	// 0x36116ea5
- (id)copyWithZone:(NSZone *)zone;	// 0x36116c85
- (void)dealloc;	// 0x36071745
- (id)description;	// 0x36116dc5
- (void)encodeWithCoder:(id)coder;	// 0x36116a35
- (BOOL)isEqual:(id)equal;	// 0x36117171
// converted property getter: - (id)key;	// 0x36071401
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x361c7631
- (id)reversedSortDescriptor;	// 0x36116fb9
// converted property getter: - (SEL)selector;	// 0x360713b1
@end
