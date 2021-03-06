/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreScrollerDataSource : NSObject {
@private
	NSArray *_controls;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *controls;	// G=0x3300d3c1; S=0x3300d13d; @synthesize=_controls
@property(retain, nonatomic) NSString *identifier;	// G=0x3300d3d1; S=0x3300d191; @synthesize=_identifier
- (void)_setControlIdentifiers;	// 0x3300d3e1
// declared property getter: - (id)controls;	// 0x3300d3c1
- (void)dealloc;	// 0x3300d0dd
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x3300d229
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x3300d2d9
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x3300d209
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x3300d2a1
// declared property getter: - (id)identifier;	// 0x3300d3d1
- (long)numberOfColumnsInGrid:(id)grid;	// 0x3300d205
- (long)numberOfItemsInGrid:(id)grid;	// 0x3300d1e5
// declared property setter: - (void)setControls:(id)controls;	// 0x3300d13d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3300d191
@end

