/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, ATVFeedInterstitialGroupElement, NSDictionary, ATVFeedDocument;

@interface ATVInterstitialGroup : NSObject {
@private
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSDictionary *_feedDictionary;	// 8 = 0x8
	ATVFeedInterstitialGroupElement *_feedElement;	// 12 = 0xc
	NSArray *_interstitials;	// 16 = 0x10
	NSArray *_collapsedInterstitials;	// 20 = 0x14
	NSArray *_netTimeChapters;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *collapsedInterstitials;	// G=0x32ac8591; @synthesize=_collapsedInterstitials
@property(readonly, assign, nonatomic) NSDictionary *feedDictionary;	// G=0x32ac8561; @synthesize=_feedDictionary
@property(readonly, assign, nonatomic) ATVFeedInterstitialGroupElement *feedElement;	// G=0x32ac8571; @synthesize=_feedElement
@property(readonly, assign, nonatomic) NSArray *interstitials;	// G=0x32ac8581; @synthesize=_interstitials
@property(retain, nonatomic) NSArray *netTimeChapters;	// G=0x32ac85a1; S=0x32ac85b1; @synthesize=_netTimeChapters
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x32ac7e11
- (id)initWithFeedElement:(id)feedElement;	// 0x32ac7a2d
- (id)collapsedInterstitialForGrossTime:(double)grossTime;	// 0x32ac8495
// declared property getter: - (id)collapsedInterstitials;	// 0x32ac8591
- (void)dealloc;	// 0x32ac8199
// declared property getter: - (id)feedDictionary;	// 0x32ac8561
// declared property getter: - (id)feedElement;	// 0x32ac8571
- (double)grossTimeForNetTime:(double)netTime;	// 0x32ac8385
// declared property getter: - (id)interstitials;	// 0x32ac8581
// declared property getter: - (id)netTimeChapters;	// 0x32ac85a1
- (double)netTimeForGrossTime:(double)grossTime;	// 0x32ac8249
// declared property setter: - (void)setNetTimeChapters:(id)chapters;	// 0x32ac85b1
@end
