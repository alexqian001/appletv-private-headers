/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacProvider.h"

@class NSSet, ATVInternetPhotosAccount, NSArray;

__attribute__((visibility("hidden")))
@interface ATVDotMacProviderForAccount : ATVDotMacProvider {
	ATVInternetPhotosAccount *_account;	// 28 = 0x1c
	NSSet *_ignoredMediaCollectionTypes;	// 32 = 0x20
	NSArray *_dataWithTypeDividers;	// 36 = 0x24
	BOOL _disableTypeDividers;	// 40 = 0x28
}
@property(readonly, retain) ATVInternetPhotosAccount *account;	// G=0x1a7509; converted property
@property(retain) NSSet *ignoredMediaCollectionTypes;	// G=0x1a79ad; S=0x1a79bd; converted property
+ (id)providerForAccount:(id)account;	// 0x1a72b1
- (id)initWithAccount:(id)account;	// 0x1a72f9
- (id)_data;	// 0x1a77f9
- (id)_dataWithTypeDividers;	// 0x1a7665
- (BOOL)_handlesObject:(id)object;	// 0x1a7871
- (void)_updateDataCount;	// 0x1a7981
// converted property getter: - (id)account;	// 0x1a7509
- (id)dataAtIndex:(long)index;	// 0x1a7551
- (long)dataCount;	// 0x1a7529
- (void)dealloc;	// 0x1a7421
- (id)hashForDataAtIndex:(long)index;	// 0x1a75bd
// converted property getter: - (id)ignoredMediaCollectionTypes;	// 0x1a79ad
- (void)setDisableTypeDividers:(BOOL)dividers;	// 0x1a7519
// converted property setter: - (void)setIgnoredMediaCollectionTypes:(id)types;	// 0x1a79bd
@end

