/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, BRImage, ATVGameMenuItemContents;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVGameMenuItem : BRControl {
	ATVGameMenuItemContents *_contents;	// 80 = 0x50
}
@property(copy) NSString *detailedText;	// G=0xfb0f9; S=0xfb119; 
@property(assign) BOOL dimmed;	// G=0xfb179; S=0xfb19d; 
@property(copy) NSString *imageSeparatorText;	// G=0xfb079; S=0xfb099; 
@property(retain) BRImage *leftImage;	// G=0xfafb9; S=0xfafd9; 
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0xfaf79; S=0xfaf99; 
@property(retain) BRImage *rightImage;	// G=0xfaff9; S=0xfb019; 
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0xfb039; S=0xfb059; 
@property(copy) NSString *rightJustifiedText;	// G=0xfb139; S=0xfb159; 
@property(copy) NSString *text;	// G=0xfb0b9; S=0xfb0d9; 
+ (CGRect)contentFrameForControl:(id)control;	// 0xfb2b1
- (id)init;	// 0xfac85
- (float)accessibilityDelayForScreenContent;	// 0xfb2a9
- (id)accessibilityLabel;	// 0xfb1c1
- (id)accessibilityTraitsList;	// 0xfb239
- (void)controlWasFocused;	// 0xfadcd
- (void)controlWasUnfocused;	// 0xfae1d
- (void)dealloc;	// 0xfad81
// declared property getter: - (id)detailedText;	// 0xfb0f9
// declared property getter: - (BOOL)dimmed;	// 0xfb179
- (void)drawRect:(CGRect)rect;	// 0xfaf15
- (CGRect)focusCursorFrame;	// 0xfae91
// declared property getter: - (id)imageSeparatorText;	// 0xfb079
- (BOOL)isAccessibilityElement;	// 0xfb1bd
// declared property getter: - (id)leftImage;	// 0xfafb9
// declared property getter: - (id)leftImageProxy;	// 0xfaf79
// declared property getter: - (id)rightImage;	// 0xfaff9
// declared property getter: - (id)rightImageProxy;	// 0xfb039
// declared property getter: - (id)rightJustifiedText;	// 0xfb139
// declared property setter: - (void)setDetailedText:(id)text;	// 0xfb119
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0xfb19d
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0xfb099
// declared property setter: - (void)setLeftImage:(id)image;	// 0xfafd9
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0xfaf99
// declared property setter: - (void)setRightImage:(id)image;	// 0xfb019
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0xfb059
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0xfb159
// declared property setter: - (void)setText:(id)text;	// 0xfb0d9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xfae6d
// declared property getter: - (id)text;	// 0xfb0b9
@end
