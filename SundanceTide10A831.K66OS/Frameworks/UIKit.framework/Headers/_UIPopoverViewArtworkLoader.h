/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIPopoverViewArtworkLoader : NSObject {
	int _backgroundStyle;	// 4 = 0x4
	NSString *_backgroundSelector;	// 8 = 0x8
}
+ (id)backgroundSelectorForBackgroundStyle:(int)backgroundStyle;	// 0x31fb535d
- (id)initWithBackgroundStyle:(int)backgroundStyle;	// 0x31fb529d
- (id)bottomArrowLeftEndCapView;	// 0x31fb69e1
- (id)bottomArrowPinnedView;	// 0x31fb67f1
- (id)bottomArrowRightEndCapView;	// 0x31fb6bad
- (id)bottomArrowView;	// 0x31fb6621
- (CGRect)contentRectForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x31fb5439
- (CGRect)contentsCenterForRect:(CGRect)rect inImageOfSize:(CGSize)size;	// 0x31fb5475
- (void)dealloc;	// 0x31fb5311
- (id)rightArrowBottomEndCapView;	// 0x31fb6411
- (id)rightArrowPinnedBottomView;	// 0x31fb605d
- (id)rightArrowPinnedTopView;	// 0x31fb5e95
- (id)rightArrowTopEndCapView;	// 0x31fb6249
- (id)rightArrowView;	// 0x31fb5cc5
- (id)shortBottomArrowLeftEndCapView;	// 0x31fb7859
- (id)shortBottomArrowPinnedView;	// 0x31fb7669
- (id)shortBottomArrowRightEndCapView;	// 0x31fb7a25
- (id)shortBottomArrowView;	// 0x31fb7499
- (id)shortRightArrowView;	// 0x31fb72b1
- (id)shortTopArrowLeftEndCapView;	// 0x31fb7029
- (id)shortTopArrowPinnedView;	// 0x31fb6e39
- (id)shortTopArrowRightEndCapView;	// 0x31fb71f5
- (id)shortTopArrowView;	// 0x31fb6c69
- (id)templateImageForDirection:(id)direction shortArtwork:(BOOL)artwork;	// 0x31fb53b5
- (id)topArrowLeftEndCapView;	// 0x31fb5a3d
- (id)topArrowPinnedView;	// 0x31fb584d
- (id)topArrowRightEndCapView;	// 0x31fb5c09
- (id)topArrowView;	// 0x31fb567d
- (id)viewWithContentsImage:(id)contentsImage rect:(CGRect)rect center:(CGRect)center antialiasingMask:(unsigned)mask directionSelector:(id)selector;	// 0x31fb5501
@end

