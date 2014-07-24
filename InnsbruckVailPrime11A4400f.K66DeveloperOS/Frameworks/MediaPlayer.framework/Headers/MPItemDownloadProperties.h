/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "SSDownloadManagerObserver.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSArray, NSURL, NSMutableSet, NSString;

@interface MPItemDownloadProperties : NSObject <SSDownloadManagerObserver, NSCopying> {
	long long _assetFileSize;	// 4 = 0x4
	NSURL *_destinationURL;	// 12 = 0xc
	BOOL _downloadExists;	// 16 = 0x10
	NSString *_downloadIdentifier;	// 20 = 0x14
	long long _downloadSizeLimit;	// 24 = 0x18
	unsigned long long _downloadToken;	// 32 = 0x20
	NSMutableSet *_downloadTokenCompletionHandlers;	// 40 = 0x28
	NSArray *_sinfs;	// 44 = 0x2c
	NSURL *_sourceURL;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) long long assetFileSize;	// G=0x2e332c01; @synthesize=_assetFileSize
@property(readonly, assign, nonatomic) NSURL *destinationURL;	// G=0x2e332c19; @synthesize=_destinationURL
@property(readonly, assign, nonatomic) BOOL downloadExists;	// G=0x2e332c29; @synthesize=_downloadExists
@property(readonly, assign, nonatomic) NSString *downloadIdentifier;	// G=0x2e332c39; @synthesize=_downloadIdentifier
@property(readonly, assign, nonatomic) long long downloadSizeLimit;	// G=0x2e332c49; @synthesize=_downloadSizeLimit
@property(assign, nonatomic) unsigned long long downloadToken;	// G=0x2e332c61; S=0x2e332c79; @synthesize=_downloadToken
@property(readonly, assign, nonatomic) NSURL *sourceURL;	// G=0x2e332c8d; @synthesize=_sourceURL
- (id)initWithDownload:(id)download;	// 0x2e3317f5
- (id)initWithDownloadIdentifier:(long long)downloadIdentifier;	// 0x2e331c5d
- (id)initWithMediaItem:(id)mediaItem;	// 0x2e331cb9
- (void).cxx_destruct;	// 0x2e332c9d
- (void)_reloadNetworkConstraints;	// 0x2e332b55
- (void)acquireDownloadTokenWithCompletionHandler:(id)completionHandler;	// 0x2e332851
// declared property getter: - (long long)assetFileSize;	// 0x2e332c01
- (id)copyWithZone:(NSZone *)zone;	// 0x2e3320b5
- (void)dealloc;	// 0x2e331d6d
- (id)description;	// 0x2e331e99
// declared property getter: - (id)destinationURL;	// 0x2e332c19
// declared property getter: - (BOOL)downloadExists;	// 0x2e332c29
// declared property getter: - (id)downloadIdentifier;	// 0x2e332c39
- (void)downloadManager:(id)manager downloadStatesDidChange:(id)downloadStates;	// 0x2e3321e5
// declared property getter: - (long long)downloadSizeLimit;	// 0x2e332c49
// declared property getter: - (unsigned long long)downloadToken;	// 0x2e332c61
- (unsigned)hash;	// 0x2e331f21
- (BOOL)isEqual:(id)equal;	// 0x2e331f61
- (id)newAVAssetOptionsWithDownloadStyle:(int)downloadStyle;	// 0x2e3329d5
// declared property setter: - (void)setDownloadToken:(unsigned long long)token;	// 0x2e332c79
// declared property getter: - (id)sourceURL;	// 0x2e332c8d
@end
