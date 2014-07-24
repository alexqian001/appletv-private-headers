/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface BRMediaAssetExpiryInfo : XXUnknownSuperclass {
	id<BRMediaAsset> _mediaAsset;	// 4 = 0x4
}
@property(retain) id expiryDate;	// G=0x3e863d; S=0x3e8659; converted property
+ (id)expiryInfoForMediaAsset:(id)mediaAsset;	// 0x3e8541
+ (void)setImplementationClass:(Class)aClass;	// 0x3e8531
- (id)initWithMediaAsset:(id)mediaAsset;	// 0x3e8589
- (id)asset;	// 0x3e85dd
- (int)compare:(id)compare;	// 0x3e86b1
- (void)dealloc;	// 0x3e85ed
// converted property getter: - (id)expiryDate;	// 0x3e863d
- (id)expiryDescription;	// 0x3e86ed
- (BOOL)hasBeenPlayed;	// 0x3e878d
- (BOOL)isExpired;	// 0x3e8639
- (unsigned)rentalPlaybackDuration;	// 0x3e86ad
- (id)rentalPlaybackDurationDescription;	// 0x3e8715
// converted property setter: - (void)setExpiryDate:(id)date;	// 0x3e8659
@end
