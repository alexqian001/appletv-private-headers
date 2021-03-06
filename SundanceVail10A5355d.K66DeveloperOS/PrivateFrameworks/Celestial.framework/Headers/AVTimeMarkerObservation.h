/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface AVTimeMarkerObservation : NSObject {
	id _observer;	// 4 = 0x4
	NSArray *_times;	// 8 = 0x8
	id _context;	// 12 = 0xc
	int _currentIndex;	// 16 = 0x10
}
@property(readonly, retain) id context;	// G=0x372cd3fd; converted property
@property(readonly, assign) int currentIndex;	// G=0x372cd40d; converted property
@property(readonly, retain) id observer;	// G=0x372cd3ed; converted property
- (id)initWithObserver:(id)observer times:(id)times context:(id)context currentIndex:(int)index;	// 0x372cd129
// converted property getter: - (id)context;	// 0x372cd3fd
// converted property getter: - (int)currentIndex;	// 0x372cd40d
- (void)dealloc;	// 0x372cd1c5
- (BOOL)gotoTime:(double)time;	// 0x372cd229
- (double)nextInterestingTime;	// 0x372cd2f1
// converted property getter: - (id)observer;	// 0x372cd3ed
- (double)prevInterestingTime;	// 0x372cd36d
@end

