/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacParserDelegate.h"

@class NSDate, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVDotMacVideoDelegate : ATVDotMacParserDelegate {
@private
	NSDate *_modDate;	// 24 = 0x18
	NSDictionary *_startSelectors;	// 28 = 0x1c
	NSDictionary *_endSelectors;	// 32 = 0x20
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x340b69ed; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x340b69fd; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x340b69dd; converted property
- (id)init;	// 0x340b630d
- (void)__atv_end_dotmac_description;	// 0x340b6751
- (void)__atv_end_dotmac_posterPath;	// 0x340b67d1
- (void)__atv_end_dotmac_title;	// 0x340b6711
- (void)__atv_end_dotmac_videoDurationLrg;	// 0x340b6951
- (void)__atv_end_dotmac_videoDurationMed;	// 0x340b68d1
- (void)__atv_end_dotmac_videoDurationSmall;	// 0x340b6851
- (void)__atv_end_dotmac_videoPathLrg;	// 0x340b6911
- (void)__atv_end_dotmac_videoPathMed;	// 0x340b6891
- (void)__atv_end_dotmac_videoPathSmall;	// 0x340b6811
- (void)__atv_end_dotmac_webImagePath;	// 0x340b6791
- (void)__atv_end_title;	// 0x340b66d1
- (void)__atv_end_updated;	// 0x340b6991
- (void)dealloc;	// 0x340b665d
// converted property getter: - (id)endSelectors;	// 0x340b69ed
// converted property getter: - (id)modDate;	// 0x340b69fd
// converted property getter: - (id)startSelectors;	// 0x340b69dd
- (id)videoName;	// 0x340b6a0d
@end

