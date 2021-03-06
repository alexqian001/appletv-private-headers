/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIKeyframe : NSObject {
	NSString *_key;	// 4 = 0x4
	id _value;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _duration;	// 20 = 0x14
}
@property(retain, nonatomic) id value;	// G=0x2f5a5435; S=0x2f5a5445; @synthesize=_value
- (id)initWithKey:(id)key startTime:(double)time duration:(double)duration;	// 0x2f5a533d
- (void)dealloc;	// 0x2f5a53d1
// declared property setter: - (void)setValue:(id)value;	// 0x2f5a5445
// declared property getter: - (id)value;	// 0x2f5a5435
@end

