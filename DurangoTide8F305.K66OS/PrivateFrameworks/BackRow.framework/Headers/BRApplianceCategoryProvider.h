/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRApplianceCategoryProvider : NSObject <BRProvider> {
@private
	NSArray *_categories;	// 4 = 0x4
}
@property(retain) NSArray *categories;	// G=0x3292176d; S=0x3291eb39; converted property
// converted property getter: - (id)categories;	// 0x3292176d
- (long)categoryIndexForIdentifier:(id)identifier;	// 0x32921ac9
- (id)controlFactory;	// 0x32962311
- (id)dataAtIndex:(long)index;	// 0x329622d1
- (long)dataCount;	// 0x329622f1
- (void)dealloc;	// 0x32962379
- (long)defaultCategoryIndex;	// 0x3291ec21
- (id)hashForDataAtIndex:(long)index;	// 0x329622a1
// converted property setter: - (void)setCategories:(id)categories;	// 0x3291eb39
@end
