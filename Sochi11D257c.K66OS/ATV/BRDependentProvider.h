/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRProviderGroup;

__attribute__((visibility("hidden")))
@interface BRDependentProvider : XXUnknownSuperclass <BRProvider> {
	id<BRProvider> _provider;	// 4 = 0x4
	BRProviderGroup *_providerGroup;	// 8 = 0x8
	long _threshold;	// 12 = 0xc
	BOOL _hidden;	// 16 = 0x10
}
@property(readonly, assign) long threshold;	// G=0x4226c5; converted property
+ (id)providerWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x422319
- (id)initWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x422371
- (void)_groupDataCountChanged:(id)changed;	// 0x4226d5
- (void)_providerDataSetChanged:(id)changed;	// 0x422781
- (void)_providerItemsModified:(id)modified;	// 0x4227dd
- (id)controlFactory;	// 0x4225e9
- (id)dataAtIndex:(long)index;	// 0x42263d
- (long)dataCount;	// 0x422609
- (void)dealloc;	// 0x422559
- (id)hashForDataAtIndex:(long)index;	// 0x422671
- (id)providers;	// 0x4226a5
// converted property getter: - (long)threshold;	// 0x4226c5
@end
