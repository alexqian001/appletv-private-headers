/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class BRProviderGroup;

@interface BRDependentProvider : NSObject <BRProvider> {
@private
	id<BRProvider> _provider;	// 4 = 0x4
	BRProviderGroup *_providerGroup;	// 8 = 0x8
	long _threshold;	// 12 = 0xc
	BOOL _hidden;	// 16 = 0x10
}
@property(readonly, assign) long threshold;	// G=0x35e787c1; converted property
+ (id)providerWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x35e783ed
- (id)initWithDependentProvider:(id)dependentProvider providers:(id)providers threshold:(long)threshold;	// 0x35e78445
- (void)_groupDataCountChanged:(id)changed;	// 0x35e787d1
- (void)_providerDataSetChanged:(id)changed;	// 0x35e78895
- (void)_providerItemsModified:(id)modified;	// 0x35e788ed
- (id)controlFactory;	// 0x35e786cd
- (id)dataAtIndex:(long)index;	// 0x35e78729
- (long)dataCount;	// 0x35e786ed
- (void)dealloc;	// 0x35e7863d
- (id)hashForDataAtIndex:(long)index;	// 0x35e78765
- (id)providers;	// 0x35e787a1
// converted property getter: - (long)threshold;	// 0x35e787c1
@end
