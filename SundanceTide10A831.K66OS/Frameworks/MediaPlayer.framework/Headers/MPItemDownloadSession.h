/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPItemDownloadProperties, NSError, AVAsset, SSDownloadHandlerSession;

@interface MPItemDownloadSession : NSObject {
	AVAsset *_asset;	// 4 = 0x4
	MPItemDownloadProperties *_downloadProperties;	// 8 = 0x8
	SSDownloadHandlerSession *_downloadSession;	// 12 = 0xc
	float _percentComplete;	// 16 = 0x10
	NSError *_sessionError;	// 20 = 0x14
	int _sessionState;	// 24 = 0x18
}
@property(assign, nonatomic) __weak AVAsset *AVAsset;	// G=0x36f7681d; S=0x36f7682d; @synthesize=_asset
@property(readonly, assign, nonatomic) MPItemDownloadProperties *downloadProperties;	// G=0x36f76541; 
@property(retain, nonatomic) SSDownloadHandlerSession *downloadSession;	// G=0x36f7683d; S=0x36f7665d; @synthesize=_downloadSession
@property(assign, nonatomic) float percentComplete;	// G=0x36f7684d; S=0x36f766c1; @synthesize=_percentComplete
@property(retain, nonatomic) NSError *sessionError;	// G=0x36f7685d; S=0x36f7686d; @synthesize=_sessionError
@property(assign, nonatomic) int sessionState;	// G=0x36f7687d; S=0x36f7688d; @synthesize=_sessionState
- (id)initWithItemDownloadProperties:(id)itemDownloadProperties;	// 0x36f76475
// declared property getter: - (id)AVAsset;	// 0x36f7681d
- (void)dealloc;	// 0x36f764c9
- (id)description;	// 0x36f767b5
// declared property getter: - (id)downloadProperties;	// 0x36f76541
// declared property getter: - (id)downloadSession;	// 0x36f7683d
- (BOOL)isNetworkConstrainedForNetworkType:(int)networkType;	// 0x36f76579
// declared property getter: - (float)percentComplete;	// 0x36f7684d
- (void)reloadNetworkConstraints;	// 0x36f7663d
// declared property getter: - (id)sessionError;	// 0x36f7685d
// declared property getter: - (int)sessionState;	// 0x36f7687d
// declared property setter: - (void)setAVAsset:(id)asset;	// 0x36f7682d
// declared property setter: - (void)setDownloadSession:(id)session;	// 0x36f7665d
// declared property setter: - (void)setPercentComplete:(float)complete;	// 0x36f766c1
// declared property setter: - (void)setSessionError:(id)error;	// 0x36f7686d
// declared property setter: - (void)setSessionState:(int)state;	// 0x36f7688d
- (void)snapshotProgressForItem:(id)item;	// 0x36f76709
@end
