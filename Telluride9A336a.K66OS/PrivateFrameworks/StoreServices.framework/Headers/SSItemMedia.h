/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString;

@interface SSItemMedia : NSObject {
@private
	int _duration;	// 4 = 0x4
	int _fullDuration;	// 8 = 0x8
	long long _mediaFileSize;	// 12 = 0xc
	NSString *_mediaKind;	// 20 = 0x14
	BOOL _protected;	// 24 = 0x18
	NSURL *_url;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x341eca51; @synthesize=_url
@property(readonly, assign, nonatomic) int durationInMilliseconds;	// G=0x341ec9d5; @synthesize=_duration
@property(readonly, assign, nonatomic) int fullDurationInMilliseconds;	// G=0x341ec9e5; @synthesize=_fullDuration
@property(readonly, assign, nonatomic) long long mediaFileSize;	// G=0x341ec9f5; @synthesize=_mediaFileSize
@property(copy, nonatomic) NSString *mediaKind;	// G=0x341eca0d; S=0x341eca1d; @synthesize=_mediaKind
@property(readonly, assign, nonatomic, getter=isProtectedMedia) BOOL protectedMedia;	// G=0x341eca41; @synthesize=_protected
- (id)init;	// 0x341ec5d1
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary;	// 0x341ec781
// declared property getter: - (id)URL;	// 0x341eca51
- (void)dealloc;	// 0x341ec611
- (id)description;	// 0x341ec671
// declared property getter: - (int)durationInMilliseconds;	// 0x341ec9d5
// declared property getter: - (int)fullDurationInMilliseconds;	// 0x341ec9e5
- (unsigned)hash;	// 0x341ec6e9
- (BOOL)isEqual:(id)equal;	// 0x341ec709
// declared property getter: - (BOOL)isProtectedMedia;	// 0x341eca41
// declared property getter: - (long long)mediaFileSize;	// 0x341ec9f5
// declared property getter: - (id)mediaKind;	// 0x341eca0d
// declared property setter: - (void)setMediaKind:(id)kind;	// 0x341eca1d
@end
