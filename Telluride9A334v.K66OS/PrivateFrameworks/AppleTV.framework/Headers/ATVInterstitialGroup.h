/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ATVFeedDocument, NSArray, NSDictionary, ATVFeedInterstitialGroupElement;

@interface ATVInterstitialGroup : NSObject {
@private
	ATVFeedDocument *_feedDocument;	// 4 = 0x4
	NSDictionary *_feedDictionary;	// 8 = 0x8
	ATVFeedInterstitialGroupElement *_feedElement;	// 12 = 0xc
	NSArray *_interstitials;	// 16 = 0x10
	NSArray *_collapsedInterstitials;	// 20 = 0x14
	NSArray *_netTimeChapters;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSArray *collapsedInterstitials;	// G=0x332f1c19; @synthesize=_collapsedInterstitials
@property(readonly, assign, nonatomic) NSDictionary *feedDictionary;	// G=0x332f1be9; @synthesize=_feedDictionary
@property(readonly, assign, nonatomic) ATVFeedInterstitialGroupElement *feedElement;	// G=0x332f1bf9; @synthesize=_feedElement
@property(readonly, assign, nonatomic) NSArray *interstitials;	// G=0x332f1c09; @synthesize=_interstitials
@property(retain, nonatomic) NSArray *netTimeChapters;	// G=0x332f1c29; S=0x332f1c39; @synthesize=_netTimeChapters
- (id)initWithFeedDictionary:(id)feedDictionary;	// 0x332f1499
- (id)initWithFeedElement:(id)feedElement;	// 0x332f10b5
- (id)collapsedInterstitialForGrossTime:(double)grossTime;	// 0x332f1b1d
// declared property getter: - (id)collapsedInterstitials;	// 0x332f1c19
- (void)dealloc;	// 0x332f1821
// declared property getter: - (id)feedDictionary;	// 0x332f1be9
// declared property getter: - (id)feedElement;	// 0x332f1bf9
- (double)grossTimeForNetTime:(double)netTime;	// 0x332f1a0d
// declared property getter: - (id)interstitials;	// 0x332f1c09
// declared property getter: - (id)netTimeChapters;	// 0x332f1c29
- (double)netTimeForGrossTime:(double)grossTime;	// 0x332f18d1
// declared property setter: - (void)setNetTimeChapters:(id)chapters;	// 0x332f1c39
@end
