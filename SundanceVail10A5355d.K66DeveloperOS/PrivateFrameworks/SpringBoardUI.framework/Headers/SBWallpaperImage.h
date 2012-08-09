/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIImage.h> // Unknown library

@class NSData;

@interface SBWallpaperImage : UIImage {
	int _variant;	// 36 = 0x24
	NSData *_data;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) NSData *data;	// G=0x3639273d; @synthesize=_data
@property(readonly, assign, nonatomic) int variant;	// G=0x3639272d; @synthesize=_variant
+ (id)cachedWallpaperDataForVariant:(int)variant;	// 0x36392371
+ (void)clearCachedWallpaper;	// 0x36392331
+ (void)preheatWallpaperDataForVariant:(int)variant;	// 0x363923b1
- (id)initWithVariant:(int)variant;	// 0x36392499
// declared property getter: - (id)data;	// 0x3639273d
- (void)dealloc;	// 0x36392619
- (BOOL)isEqual:(id)equal;	// 0x36392665
// declared property getter: - (int)variant;	// 0x3639272d
@end
