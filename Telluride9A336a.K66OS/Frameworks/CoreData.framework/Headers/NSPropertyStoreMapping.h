/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface NSPropertyStoreMapping : NSStoreMapping {
@private
	NSPropertyDescription *_property;	// 8 = 0x8
}
@property(retain) NSPropertyDescription *property;	// G=0x323a4519; S=0x323a4529; converted property
- (id)initWithProperty:(id)property;	// 0x323a460d
- (void)dealloc;	// 0x323a4731
- (id)description;	// 0x323a46ad
- (BOOL)isEqual:(id)equal;	// 0x323a4539
// converted property getter: - (id)property;	// 0x323a4519
// converted property setter: - (void)setProperty:(id)property;	// 0x323a4529
@end

