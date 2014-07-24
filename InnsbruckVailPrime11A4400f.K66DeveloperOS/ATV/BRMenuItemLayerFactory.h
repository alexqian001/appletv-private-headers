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
+ (void)setSingleton:(id)singleton;	// 0x388cb5
+ (id)singleton;	// 0x388ca5
- (id)init;	// 0x388cc5
- (id)_populatorForObject:(id)object;	// 0x3890f1
- (void)dealloc;	// 0x388d81
- (id)menuItemForObject:(id)object;	// 0x38900d
- (id)menuItemForObject:(id)object delegate:(id)delegate;	// 0x389049
- (float)menuItemHeightForObject:(id)object;	// 0x389021
- (float)menuItemHeightForObject:(id)object delegate:(id)delegate;	// 0x389081
- (void)registerPopulator:(Class)populator;	// 0x388dcd
- (id)titleForObject:(id)object;	// 0x389035
- (id)titleForObject:(id)object delegate:(id)delegate;	// 0x3890b9
@end
