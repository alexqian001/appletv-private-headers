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
+ (void)setSingleton:(id)singleton;	// 0x3c4345
+ (id)singleton;	// 0x3c4335
- (id)init;	// 0x3c4355
- (id)_populatorForObject:(id)object;	// 0x3c4781
- (void)dealloc;	// 0x3c4411
- (id)menuItemForObject:(id)object;	// 0x3c469d
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x3c46d9
- (float)menuItemHeightForObject:(id)object;	// 0x3c46b1
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x3c4711
- (void)registerPopulator:(Class)populator;	// 0x3c445d
- (id)titleForObject:(id)object;	// 0x3c46c5
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x3c4749
@end
