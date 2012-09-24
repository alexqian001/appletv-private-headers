/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class MCText, MPTextInternal;
@protocol MPEffectSupport;

@interface MPText : NSObject <NSCoding, NSCopying> {
	MCText *_text;	// 4 = 0x4
	MPTextInternal *_internal;	// 8 = 0x8
	NSObject<MPEffectSupport> *_parent;	// 12 = 0xc
}
@property(retain) id attributedString;	// G=0x36062431; S=0x36062451; converted property
@property(retain) id plainString;	// G=0x3606372d; S=0x36063765; converted property
@property(retain) MCText *text;	// G=0x36063179; S=0x36063911; converted property
+ (id)textWithAttributedString:(id)attributedString;	// 0x36062031
- (id)init;	// 0x360620ad
- (id)initWithAttributedString:(id)attributedString;	// 0x3606206d
- (id)initWithCoder:(id)coder;	// 0x36062231
- (id)action;	// 0x3606380d
// converted property getter: - (id)attributedString;	// 0x36062431
- (void)checkForMaxFontSize;	// 0x36063eed
- (void)checkForPlacesLabel;	// 0x36063a01
- (void)copyStruct:(id)aStruct;	// 0x3606388d
- (id)copyWithZone:(NSZone *)zone;	// 0x36062125
- (void)dealloc;	// 0x360623bd
- (id)defaultString;	// 0x360631f1
- (id)description;	// 0x36062345
- (double)displayDuration;	// 0x36062ec1
- (double)displayStartTime;	// 0x36062cd9
- (double)displayTime;	// 0x36062ae9
- (void)dump;	// 0x36063189
- (void)encodeWithCoder:(id)coder;	// 0x36062189
- (id)fullDebugLog;	// 0x360631b1
- (int)index;	// 0x36062a79
- (BOOL)isOriginal;	// 0x36063321
- (float)maxFontSize;	// 0x36063289
- (id)nearestPlug;	// 0x360638e9
- (id)parentEffect;	// 0x36062745
// converted property getter: - (id)plainString;	// 0x3606372d
// converted property setter: - (void)setAttributedString:(id)string;	// 0x36062451
- (void)setParent:(id)parent;	// 0x36063991
// converted property setter: - (void)setPlainString:(id)string;	// 0x36063765
// converted property setter: - (void)setText:(id)text;	// 0x36063911
- (id)subtitleSlide;	// 0x36062755
// converted property getter: - (id)text;	// 0x36063179
- (float)textAreaAspectRatio;	// 0x36062f81
@end
