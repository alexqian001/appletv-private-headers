/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRImage.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface BRInitialImage : BRImage {
	NSData *_data;	// 44 = 0x2c
}
+ (id)initialImageWithData:(id)data;	// 0x3abf81
- (void)dealloc;	// 0x3ac011
- (void)purgeRawData;	// 0x3ac06d
- (id)rawData;	// 0x3ac05d
@end

