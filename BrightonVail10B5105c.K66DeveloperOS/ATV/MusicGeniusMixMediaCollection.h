/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaCollection.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface MusicGeniusMixMediaCollection : BRBaseMediaCollection {
	NSArray *_assets;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
}
@property(readonly, retain) NSString *title;	// G=0x1cb7a5; converted property
- (id)initWithAssets:(id)assets andTitle:(id)title;	// 0x1cb69d
- (id)collectionType;	// 0x1cb779
- (void)dealloc;	// 0x1cb715
- (id)mediaAssets;	// 0x1cb795
// converted property getter: - (id)title;	// 0x1cb7a5
@end
