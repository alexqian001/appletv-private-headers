/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class CADisplayLink, NSString;

__attribute__((visibility("hidden")))
@interface UIScrollTestParameters : NSObject {
@private
	int _iterations;	// 4 = 0x4
	int _yDelta;	// 8 = 0x8
	int _scrollLength;	// 12 = 0xc
	NSString *_currentTest;	// 16 = 0x10
	CADisplayLink *_displayLink;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *currentTest;	// G=0x331b24dd; S=0x331b24ed; @synthesize=_currentTest
@property(retain, nonatomic) CADisplayLink *displayLink;	// G=0x331b2551; S=0x331b2561; @synthesize=_displayLink
@property(assign, nonatomic) int iterations;	// G=0x331b24bd; S=0x331b24cd; @synthesize=_iterations
@property(assign, nonatomic) int scrollLength;	// G=0x331b2531; S=0x331b2541; @synthesize=_scrollLength
@property(assign, nonatomic) int yDelta;	// G=0x331b2511; S=0x331b2521; @synthesize=_yDelta
- (id)initWithName:(id)name iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x331b23b5
// declared property getter: - (id)currentTest;	// 0x331b24dd
- (void)dealloc;	// 0x331b2449
// declared property getter: - (id)displayLink;	// 0x331b2551
// declared property getter: - (int)iterations;	// 0x331b24bd
// declared property getter: - (int)scrollLength;	// 0x331b2531
// declared property setter: - (void)setCurrentTest:(id)test;	// 0x331b24ed
// declared property setter: - (void)setDisplayLink:(id)link;	// 0x331b2561
// declared property setter: - (void)setIterations:(int)iterations;	// 0x331b24cd
// declared property setter: - (void)setScrollLength:(int)length;	// 0x331b2541
// declared property setter: - (void)setYDelta:(int)delta;	// 0x331b2521
// declared property getter: - (int)yDelta;	// 0x331b2511
@end

