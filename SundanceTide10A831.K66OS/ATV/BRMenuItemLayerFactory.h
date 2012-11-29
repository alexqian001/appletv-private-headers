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
+ (void)setSingleton:(id)singleton;	// 0x325ecd
+ (id)singleton;	// 0x325ebd
- (id)init;	// 0x325edd
- (id)_populatorForObject:(id)object;	// 0x326309
- (void)dealloc;	// 0x325f99
- (id)menuItemForObject:(id)object;	// 0x326225
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x326261
- (float)menuItemHeightForObject:(id)object;	// 0x326239
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x326299
- (void)registerPopulator:(Class)populator;	// 0x325fe5
- (id)titleForObject:(id)object;	// 0x32624d
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x3262d1
@end
