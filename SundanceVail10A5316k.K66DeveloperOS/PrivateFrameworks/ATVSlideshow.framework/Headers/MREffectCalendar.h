/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRTextRenderer, MRImage;

@interface MREffectCalendar : MREffect {
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	CGSize mStride;	// 124 = 0x7c
	CGSize mImageSize;	// 132 = 0x84
	CGSize mTextSize;	// 140 = 0x8c
	CGPoint mBaseImagePosition;	// 148 = 0x94
	CGPoint mBaseTextPosition;	// 156 = 0x9c
	unsigned char mFirstDayWeekday;	// 164 = 0xa4
	unsigned char mNumberOfDays;	// 165 = 0xa5
	BOOL mTextWasUpdatedSinceLastRendering;	// 166 = 0xa6
}
- (id)init;	// 0x365bbac5
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365bc5d9
- (void)_unload;	// 0x365bc7fd
- (BOOL)isLoadedForTime:(double)time;	// 0x365bc1fd
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365bc281
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x365bc2c9
- (void)setAttributes:(id)attributes;	// 0x365bbaf1
@end
