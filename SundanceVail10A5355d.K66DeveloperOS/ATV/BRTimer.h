/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRTimer : XXUnknownSuperclass {
	BOOL _cancel;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	double _interval;	// 12 = 0xc
}
@property(assign) BOOL cancel;	// G=0x38643d; S=0x386455; @synthesize=_cancel
+ (id)createTimerWithName:(id)name;	// 0x38632d
- (id)initWithName:(id)name;	// 0x386331
// declared property getter: - (BOOL)cancel;	// 0x38643d
- (void)dealloc;	// 0x38639d
- (void)reset;	// 0x38641d
// declared property setter: - (void)setCancel:(BOOL)cancel;	// 0x386455
@end

