/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVBlockNotificationHandler : XXUnknownSuperclass {
	BOOL _listening;	// 4 = 0x4
	id _block;	// 8 = 0x8
}
@property(copy, nonatomic) id block;	// G=0x292135; S=0x292149; @synthesize=_block
- (void)_notification:(id)notification;	// 0x2920c1
// declared property getter: - (id)block;	// 0x292135
- (void)dealloc;	// 0x291fbd
// declared property setter: - (void)setBlock:(id)block;	// 0x292149
- (void)startObservingNotificationName:(id)name object:(id)object;	// 0x292011
- (void)stopObservingAll;	// 0x292079
@end
