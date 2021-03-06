/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MCText, MPTextInternal;
@protocol MPEffectSupport;

@interface MPText : NSObject <NSCoding, NSCopying> {
@private
	MCText *_text;	// 4 = 0x4
	MPTextInternal *_internal;	// 8 = 0x8
	NSObject<MPEffectSupport> *_parent;	// 12 = 0xc
}
@property(retain) id attributedString;	// G=0x354bf595; S=0x354bf5b5; converted property
@property(retain) id plainString;	// G=0x354c0901; S=0x354c0939; converted property
@property(retain) MCText *text;	// G=0x354c0381; S=0x354c0ae5; converted property
+ (id)textWithAttributedString:(id)attributedString;	// 0x354bf1d1
- (id)init;	// 0x354bf24d
- (id)initWithAttributedString:(id)attributedString;	// 0x354bf20d
- (id)initWithCoder:(id)coder;	// 0x354bf3d1
- (id)action;	// 0x354c09e1
// converted property getter: - (id)attributedString;	// 0x354bf595
- (void)checkForMaxFontSize;	// 0x354c1099
- (void)checkForPlacesLabel;	// 0x354c0bcd
- (void)copyStruct:(id)aStruct;	// 0x354c0a61
- (id)copyWithZone:(NSZone *)zone;	// 0x354bf2c5
- (void)dealloc;	// 0x354bf521
- (id)defaultString;	// 0x354c03f9
- (id)description;	// 0x354bf4a9
- (double)displayDuration;	// 0x354c00c1
- (double)displayStartTime;	// 0x354bfed1
- (double)displayTime;	// 0x354bfcd9
- (void)dump;	// 0x354c0391
- (void)encodeWithCoder:(id)coder;	// 0x354bf329
- (id)fullDebugLog;	// 0x354c03b9
- (int)index;	// 0x354bfc71
- (BOOL)isOriginal;	// 0x354c0529
- (float)maxFontSize;	// 0x354c0491
- (id)nearestPlug;	// 0x354c0abd
- (id)parentEffect;	// 0x354bf94d
// converted property getter: - (id)plainString;	// 0x354c0901
// converted property setter: - (void)setAttributedString:(id)string;	// 0x354bf5b5
- (void)setParent:(id)parent;	// 0x354c0b5d
// converted property setter: - (void)setPlainString:(id)string;	// 0x354c0939
// converted property setter: - (void)setText:(id)text;	// 0x354c0ae5
- (id)subtitleSlide;	// 0x354bf95d
// converted property getter: - (id)text;	// 0x354c0381
- (float)textAreaAspectRatio;	// 0x354c017d
@end

