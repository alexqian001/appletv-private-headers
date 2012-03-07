/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSDateFormatter, BRStrokeAndFillTextControl, BRTextControl, NSTimer, NSArray, BRTransportLayer;
@protocol BRTransportDataProvider;

__attribute__((visibility("hidden")))
@interface BRTransportControl : BRControl {
@private
	long _duration;	// 48 = 0x30
	long _elapsedTime;	// 52 = 0x34
	id<BRTransportDataProvider> _dataProvider;	// 56 = 0x38
	BRTransportLayer *_layer;	// 60 = 0x3c
	BRTextControl *_durationLayer;	// 64 = 0x40
	BRStrokeAndFillTextControl *_elapsedTimeLayer;	// 68 = 0x44
	BRTextControl *_leftSideTextLayer;	// 72 = 0x48
	BRStrokeAndFillTextControl *_chapterLayer;	// 76 = 0x4c
	NSArray *_chapterMarkers;	// 80 = 0x50
	NSArray *_interstitialMarkers;	// 84 = 0x54
	NSDateFormatter *_timeFormatter;	// 88 = 0x58
	NSTimer *_fadeTimer;	// 92 = 0x5c
	NSTimer *_transportBarTimer;	// 96 = 0x60
}
- (id)initWithSpinner:(BOOL)spinner;	// 0x35e3f8c5
- (id)_chapterAttributes;	// 0x35e412b1
- (id)_chapterMarkerLocations;	// 0x35e41481
- (void)_fadeTransport:(id)transport;	// 0x35e421b1
- (void)_handleBufferChanged:(id)changed;	// 0x35e42469
- (void)_handlePlayerAssetChanged:(id)changed;	// 0x35e419fd
- (void)_handlePlayerTimeChanged:(id)changed;	// 0x35e423fd
- (void)_handleStateChange:(id)change;	// 0x35e41885
- (void)_handleTimeSkip:(id)skip;	// 0x35e41811
- (void)_handleVolumeChange:(id)change;	// 0x35e41a71
- (void)_hideTransport;	// 0x35e41a81
- (id)_interstitialMarkerLocations;	// 0x35e416b5
- (BOOL)_shouldShowChapterGroupName;	// 0x35e41439
- (BOOL)_shouldShowChapterMarks;	// 0x35e41415
- (void)_showTransport;	// 0x35e41bb1
- (void)_showTransportTimerFired:(id)fired;	// 0x35e41b61
- (void)_showTransportWithTimeout;	// 0x35e42051
- (void)_showTransportWithTimeoutInSeconds:(float)seconds;	// 0x35e42119
- (id)_trackTimeAttributes;	// 0x35e413d5
- (void)_updateAll;	// 0x35e403d9
- (void)_updateBufferingProgressForNonLiveContent;	// 0x35e41131
- (void)_updateTimeAndBufferingForLiveContent;	// 0x35e40475
- (void)_updateTimeForNonLiveContent;	// 0x35e40cbd
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x35e42359
- (void)dealloc;	// 0x35e3fb8d
- (void)hideTransport;	// 0x35e3fee5
- (BOOL)isHidden;	// 0x35e40395
- (void)layoutSubcontrols;	// 0x35e3ffed
- (void)setDataProvider:(id)provider eventSource:(id)source;	// 0x35e3fca9
- (void)setShowChapterMarks:(BOOL)marks;	// 0x35e403b9
- (void)showTransport;	// 0x35e3fef5
- (void)showTransportWithLongTimeout;	// 0x35e3ffa1
- (void)showTransportWithMediumTimeout;	// 0x35e3ff55
- (void)showTransportWithShortTimeout;	// 0x35e3ff09
@end
