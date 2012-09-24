/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIGestureRecognizer.h> // Unknown library


@interface MPActivityGestureRecognizer : UIGestureRecognizer {
}
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x35cf7fd9
- (void)_reportOngoingActivity;	// 0x35cf81d1
- (void)_stopReportingOngoingActivity;	// 0x35cf821d
- (void)_touchesTerminated:(id)terminated withEvent:(id)event;	// 0x35cf80b9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35cf8035
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35cf8089
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35cf8079
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35cf8065
@end
