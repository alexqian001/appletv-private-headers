/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface _UISwitchArtStorage : NSObject {
@private
	CFDictionaryRef _switchImagesStorage;	// 4 = 0x4
}
+ (id)sharedArtStorage;	// 0x300fdb65
- (id)init;	// 0x300fdbad
- (id)backgroundImageForColor:(id)color;	// 0x300ff405
- (void)dealloc;	// 0x3029237d
- (id)labelImageForColor:(id)color;	// 0x300fedfd
- (id)offImageForColor:(id)color;	// 0x300ff8a9
- (id)onImageForColor:(id)color;	// 0x301c074d
- (void)registerForColor:(id)color;	// 0x300fdc19
- (void)setBackgroundImage:(id)image forColor:(id)color;	// 0x300ff451
- (void)setLabelImage:(id)image forColor:(id)color;	// 0x300ff219
- (void)setOffImage:(id)image forColor:(id)color;	// 0x300ff9d5
- (void)setOnImage:(id)image forColor:(id)color;	// 0x301c0789
- (void)unregisterForColor:(id)color;	// 0x300ffee1
@end
