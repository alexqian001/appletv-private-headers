/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVDotMacParserDelegate.h"

@class NSDictionary, NSDate;

__attribute__((visibility("hidden")))
@interface ATVDotMacVideoDelegate : ATVDotMacParserDelegate {
@private
	NSDate *_modDate;	// 24 = 0x18
	NSDictionary *_startSelectors;	// 28 = 0x1c
	NSDictionary *_endSelectors;	// 32 = 0x20
}
@property(readonly, retain) NSDictionary *endSelectors;	// G=0x33697525; converted property
@property(readonly, retain) NSDate *modDate;	// G=0x33697535; converted property
@property(readonly, retain) NSDictionary *startSelectors;	// G=0x33697515; converted property
- (id)init;	// 0x33697855
- (void)__atv_end_dotmac_description;	// 0x33697741
- (void)__atv_end_dotmac_posterPath;	// 0x336976d1
- (void)__atv_end_dotmac_title;	// 0x33697779
- (void)__atv_end_dotmac_videoDurationLrg;	// 0x33697581
- (void)__atv_end_dotmac_videoDurationMed;	// 0x336975f1
- (void)__atv_end_dotmac_videoDurationSmall;	// 0x33697661
- (void)__atv_end_dotmac_videoPathLrg;	// 0x336975b9
- (void)__atv_end_dotmac_videoPathMed;	// 0x33697629
- (void)__atv_end_dotmac_videoPathSmall;	// 0x33697699
- (void)__atv_end_dotmac_webImagePath;	// 0x33697709
- (void)__atv_end_title;	// 0x336977b1
- (void)__atv_end_updated;	// 0x33697b49
- (void)dealloc;	// 0x336977e9
// converted property getter: - (id)endSelectors;	// 0x33697525
// converted property getter: - (id)modDate;	// 0x33697535
// converted property getter: - (id)startSelectors;	// 0x33697515
- (id)videoName;	// 0x33697545
@end

