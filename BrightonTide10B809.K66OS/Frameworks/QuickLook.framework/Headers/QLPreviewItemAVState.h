/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library


@interface QLPreviewItemAVState : NSObject {
	double position;	// 4 = 0x4
	double duration;	// 12 = 0xc
	BOOL playing;	// 20 = 0x14
}
@property(assign) double duration;	// G=0x32a33681; S=0x32a336b5; @synthesize
@property(assign, getter=isPlaying) BOOL playing;	// G=0x32a336e9; S=0x32a33701; @synthesize
@property(assign) double position;	// G=0x32a33619; S=0x32a3364d; @synthesize
+ (id)avStateWithPosition:(double)position duration:(double)duration playing:(BOOL)playing;	// 0x32a33375
- (id)initWithCoder:(id)coder;	// 0x32a3349d
- (id)description;	// 0x32a33561
// declared property getter: - (double)duration;	// 0x32a33681
- (void)encodeWithCoder:(id)coder;	// 0x32a33401
// declared property getter: - (BOOL)isPlaying;	// 0x32a336e9
// declared property getter: - (double)position;	// 0x32a33619
// declared property setter: - (void)setDuration:(double)duration;	// 0x32a336b5
// declared property setter: - (void)setPlaying:(BOOL)playing;	// 0x32a33701
// declared property setter: - (void)setPosition:(double)position;	// 0x32a3364d
@end

