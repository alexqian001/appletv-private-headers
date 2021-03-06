/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVDotMacProvider.h"

@class NSArray, ATVInternetPhotosAccount, NSSet;

__attribute__((visibility("hidden")))
@interface ATVDotMacProviderForAccount : ATVDotMacProvider {
	ATVInternetPhotosAccount *_account;	// 28 = 0x1c
	NSSet *_ignoredMediaCollectionTypes;	// 32 = 0x20
	NSArray *_dataWithTypeDividers;	// 36 = 0x24
	BOOL _disableTypeDividers;	// 40 = 0x28
}
@property(readonly, retain) ATVInternetPhotosAccount *account;	// G=0x1b06d9; converted property
@property(retain) NSSet *ignoredMediaCollectionTypes;	// G=0x1b0b7d; S=0x1b0b8d; converted property
+ (id)providerForAccount:(id)account;	// 0x1b0481
- (id)initWithAccount:(id)account;	// 0x1b04c9
- (id)_data;	// 0x1b09c9
- (id)_dataWithTypeDividers;	// 0x1b0835
- (BOOL)_handlesObject:(id)object;	// 0x1b0a41
- (void)_updateDataCount;	// 0x1b0b51
// converted property getter: - (id)account;	// 0x1b06d9
- (id)dataAtIndex:(long)index;	// 0x1b0721
- (long)dataCount;	// 0x1b06f9
- (void)dealloc;	// 0x1b05f1
- (id)hashForDataAtIndex:(long)index;	// 0x1b078d
// converted property getter: - (id)ignoredMediaCollectionTypes;	// 0x1b0b7d
- (void)setDisableTypeDividers:(BOOL)dividers;	// 0x1b06e9
// converted property setter: - (void)setIgnoredMediaCollectionTypes:(id)types;	// 0x1b0b8d
@end

