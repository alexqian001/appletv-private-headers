/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "AirPlayReceiverUIDelegate.h"
#import "BRFailedURLHandling.h"

@class LTAirPlayPINControl, BRMediaPlayer, NSTimer, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface LTAirPlayAgent : BRSingleton <AirPlayReceiverUIDelegate, BRFailedURLHandling> {
	BOOL _audioStarted;	// 4 = 0x4
	NSMutableDictionary *_failedURLRequests;	// 8 = 0x8
	BOOL _playerStateObserving;	// 12 = 0xc
	BOOL _videoPlaybackEnded;	// 13 = 0xd
	BRMediaPlayer *_videoPlayer;	// 16 = 0x10
	BOOL _videoStarted;	// 20 = 0x14
	LTAirPlayPINControl *_dialog;	// 24 = 0x18
	NSTimer *_dialogTimer;	// 28 = 0x1c
}
+ (void)setSingleton:(id)singleton;	// 0x6ed29
+ (id)singleton;	// 0x6ed19
- (id)init;	// 0x6ed4d
- (void).cxx_destruct;	// 0x6edfd
- (long)_allowInterruption:(id *)interruption;	// 0x71cf5
- (void)_autoDismissOnScreenCode:(id)code;	// 0x72369
- (void)_dismissOnScreenCode:(id)code;	// 0x7237d
- (id)_errorToDictionary:(id)dictionary;	// 0x71d59
- (BOOL)_isFinancialTransactionInProgress;	// 0x71ef1
- (void)_playerStateChanged:(id)changed;	// 0x71f8d
- (long)_setVideoPosition:(float)position;	// 0x72099
- (long)_setVideoRate:(float)rate;	// 0x721c1
- (void)_showPIN:(id)pin;	// 0x7243d
- (id)_timedMetadataFromAVTimedMetadata:(id)avtimedMetadata;	// 0x72689
- (void)_updatePlayerStateObserving;	// 0x72991
- (void)_videoMetadataChanged:(id)changed;	// 0x72a8d
- (void)_videoPlaybackEnded:(id)ended;	// 0x72a9d
- (void)_videoPlaybackError:(id)error;	// 0x72b31
- (void)_videoPlayerStateChanged:(id)changed;	// 0x72bfd
- (void)airplayUIActivity;	// 0x70961
- (id)airplayUIGetProperty:(id)property qualifier:(id)qualifier error:(int *)error;	// 0x6ee55
- (long)airplayUIHideProgress;	// 0x708a1
- (long)airplayUIPerform:(id)perform inputParams:(id)params outputParams:(id *)params3;	// 0x6f6ad
- (long)airplayUISetProperty:(id)property qualifier:(id)qualifier value:(id)value;	// 0x6f1c5
- (long)airplayUIShowProgress;	// 0x707e1
- (long)airplayUIStartAudio:(id)audio outputParams:(id *)params;	// 0x709e9
- (long)airplayUIStartPresentation:(id)presentation outputParams:(id *)params;	// 0x70391
- (long)airplayUIStartVideo:(id)video outputParams:(id *)params;	// 0x70d89
- (long)airplayUIStopAudio:(id)audio;	// 0x70bed
- (long)airplayUIStopPresentation:(id)presentation;	// 0x70715
- (long)airplayUIStopVideo:(id)video;	// 0x71a25
- (long)airplayUIUpdateAudioMetaData:(id)data;	// 0x70c91
- (long)airplayUIUpdateAudioProgress:(double)progress duration:(double)duration;	// 0x70d09
- (void)dealloc;	// 0x6ed91
- (BOOL)handleFailedURLRequest:(id)request;	// 0x71c11
@end
