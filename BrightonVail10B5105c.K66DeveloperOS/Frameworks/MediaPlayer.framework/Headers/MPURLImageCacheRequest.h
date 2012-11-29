/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPImageCacheRequest.h"
#import "MediaPlayer-Structs.h"

@class NSURL;

@interface MPURLImageCacheRequest : MPImageCacheRequest {
	NSURL *_url;	// 60 = 0x3c
	BOOL _usePlaceholderAsFallback;	// 64 = 0x40
}
@property(assign, nonatomic) BOOL usePlaceholderAsFallback;	// G=0x35065c5d; S=0x35065c6d; @synthesize=_usePlaceholderAsFallback
- (id)initWithURL:(id)url;	// 0x350658dd
- (id)copyRawImageReturningError:(id *)error;	// 0x350659c9
- (void)dealloc;	// 0x3506597d
- (id)placeholderImage;	// 0x35065b99
// declared property setter: - (void)setUsePlaceholderAsFallback:(BOOL)fallback;	// 0x35065c6d
- (id)uniqueKey;	// 0x35065be9
// declared property getter: - (BOOL)usePlaceholderAsFallback;	// 0x35065c5d
@end
