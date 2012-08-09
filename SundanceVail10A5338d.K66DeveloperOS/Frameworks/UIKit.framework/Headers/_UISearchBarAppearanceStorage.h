/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSValue, NSMutableDictionary, UIImage;

__attribute__((visibility("hidden")))
@interface _UISearchBarAppearanceStorage : NSObject {
	NSMutableDictionary *searchFieldBackgroundImages;	// 4 = 0x4
	NSValue *searchFieldPositionAdjustment;	// 8 = 0x8
	NSMutableDictionary *iconImages;	// 12 = 0xc
	UIImage *separatorImage;	// 16 = 0x10
}
@property(retain, nonatomic) NSValue *searchFieldPositionAdjustment;	// G=0x30e6ea55; S=0x30e6ea65; @synthesize
@property(retain, nonatomic) UIImage *separatorImage;	// G=0x30e6ea75; S=0x30e6ea85; @synthesize
- (void)dealloc;	// 0x30e6e9c9
- (id)imageForIcon:(int)icon state:(unsigned)state;	// 0x30e6e92d
- (id)searchFieldBackgroundImageForState:(unsigned)state;	// 0x30e6e81d
// declared property getter: - (id)searchFieldPositionAdjustment;	// 0x30e6ea55
// declared property getter: - (id)separatorImage;	// 0x30e6ea75
- (void)setImage:(id)image forIcon:(int)icon state:(unsigned)state;	// 0x30e6e865
- (void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;	// 0x30e6e751
// declared property setter: - (void)setSearchFieldPositionAdjustment:(id)adjustment;	// 0x30e6ea65
// declared property setter: - (void)setSeparatorImage:(id)image;	// 0x30e6ea85
@end
