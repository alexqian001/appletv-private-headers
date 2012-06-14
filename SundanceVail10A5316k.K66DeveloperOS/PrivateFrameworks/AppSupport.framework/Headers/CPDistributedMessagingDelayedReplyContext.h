/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSObject.h> // Unknown library


@interface CPDistributedMessagingDelayedReplyContext : NSObject {
	unsigned _replyPort;	// 4 = 0x4
	BOOL _portPassing;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL portPassing;	// G=0x3435977d; S=0x3435978d; @synthesize=_portPassing
@property(assign, nonatomic) unsigned replyPort;	// G=0x3435975d; S=0x3435976d; @synthesize=_replyPort
- (id)initWithReplyPort:(unsigned)replyPort portPassing:(BOOL)passing;	// 0x343596b9
- (void)dealloc;	// 0x34359709
// declared property getter: - (BOOL)portPassing;	// 0x3435977d
// declared property getter: - (unsigned)replyPort;	// 0x3435975d
// declared property setter: - (void)setPortPassing:(BOOL)passing;	// 0x3435978d
// declared property setter: - (void)setReplyPort:(unsigned)port;	// 0x3435976d
@end
