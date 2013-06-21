/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRMenuItemLayerFactory : BRSingleton {
	NSArray *_populators;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x336d51
+ (id)singleton;	// 0x336d41
- (id)init;	// 0x336d61
- (id)_populatorForObject:(id)object;	// 0x33718d
- (void)dealloc;	// 0x336e1d
- (id)menuItemForObject:(id)object;	// 0x3370a9
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x3370e5
- (float)menuItemHeightForObject:(id)object;	// 0x3370bd
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x33711d
- (void)registerPopulator:(Class)populator;	// 0x336e69
- (id)titleForObject:(id)object;	// 0x3370d1
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x337155
@end
