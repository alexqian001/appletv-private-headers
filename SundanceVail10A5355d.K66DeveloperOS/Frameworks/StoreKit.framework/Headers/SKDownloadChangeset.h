/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "StoreKit-Structs.h"

@class NSError, NSURL, NSNumber;

@interface SKDownloadChangeset : NSObject <NSCopying> {
	NSNumber *_contentLength;	// 4 = 0x4
	NSURL *_contentURL;	// 8 = 0x8
	NSNumber *_downloadID;	// 12 = 0xc
	NSNumber *_downloadState;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	NSNumber *_progress;	// 24 = 0x18
	NSNumber *_timeRemaining;	// 28 = 0x1c
}
@property(copy, nonatomic) NSNumber *contentLength;	// G=0x313bc109; S=0x313bc11d; @synthesize=_contentLength
@property(copy, nonatomic) NSURL *contentURL;	// G=0x313bc12d; S=0x313bc141; @synthesize=_contentURL
@property(copy, nonatomic) NSNumber *downloadID;	// G=0x313bc151; S=0x313bc165; @synthesize=_downloadID
@property(copy, nonatomic) NSNumber *downloadState;	// G=0x313bc175; S=0x313bc189; @synthesize=_downloadState
@property(copy, nonatomic) NSError *error;	// G=0x313bc199; S=0x313bc1ad; @synthesize=_error
@property(copy, nonatomic) NSNumber *progress;	// G=0x313bc1bd; S=0x313bc1d1; @synthesize=_progress
@property(copy, nonatomic) NSNumber *timeRemaining;	// G=0x313bc1e1; S=0x313bc1f5; @synthesize=_timeRemaining
+ (id)changesetWithDownloadID:(id)downloadID state:(int)state;	// 0x313bbc45
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x313bbcd9
// declared property getter: - (id)contentLength;	// 0x313bc109
// declared property getter: - (id)contentURL;	// 0x313bc12d
- (id)copyWithZone:(NSZone *)zone;	// 0x313bbffd
- (id)copyXPCEncoding;	// 0x313bbefd
- (void)dealloc;	// 0x313bbb7d
// declared property getter: - (id)downloadID;	// 0x313bc151
// declared property getter: - (id)downloadState;	// 0x313bc175
// declared property getter: - (id)error;	// 0x313bc199
// declared property getter: - (id)progress;	// 0x313bc1bd
// declared property setter: - (void)setContentLength:(id)length;	// 0x313bc11d
// declared property setter: - (void)setContentURL:(id)url;	// 0x313bc141
// declared property setter: - (void)setDownloadID:(id)anId;	// 0x313bc165
// declared property setter: - (void)setDownloadState:(id)state;	// 0x313bc189
// declared property setter: - (void)setError:(id)error;	// 0x313bc1ad
// declared property setter: - (void)setProgress:(id)progress;	// 0x313bc1d1
// declared property setter: - (void)setTimeRemaining:(id)remaining;	// 0x313bc1f5
// declared property getter: - (id)timeRemaining;	// 0x313bc1e1
@end
