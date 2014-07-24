/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

#import </libobjc.A.h>
#import "AirPlayControllerAsync.h"
#import "AirPlayControllerSync.h"

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AirPlayController : NSObject <AirPlayControllerAsync, AirPlayControllerSync> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSString *_xpcName;	// 8 = 0x8
	NSXPCConnection *_cnx;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *xpcName;	// G=0x3141fb99; S=0x3141fbad; @synthesize=_xpcName
- (id)init;	// 0x3141e989
- (id)_setupConnection;	// 0x3141ea99
- (void)dealloc;	// 0x3141e9d9
- (void)getProperty:(id)property qualifier:(id)qualifier completion:(id)completion;	// 0x3141f601
- (id)getProperty:(id)property qualifier:(id)qualifier status:(int *)status;	// 0x3141f435
- (void)invalidate;	// 0x3141ea79
- (void)performCommand:(id)command qualifier:(id)qualifier params:(id)params completion:(id)completion;	// 0x3141ef51
- (long)performCommand:(id)command qualifier:(id)qualifier params:(id)params response:(id *)response;	// 0x3141ed31
- (void)postEvent:(id)event qualifier:(id)qualifier params:(id)params;	// 0x3141f181
- (void)postEvent:(id)event qualifier:(id)qualifier params:(id)params completion:(id)completion;	// 0x3141f225
- (long)setProperty:(id)property qualifier:(id)qualifier value:(id)value;	// 0x3141f7f5
- (void)setProperty:(id)property qualifier:(id)qualifier value:(id)value completion:(id)completion;	// 0x3141f969
// declared property setter: - (void)setXpcName:(id)name;	// 0x3141fbad
// declared property getter: - (id)xpcName;	// 0x3141fb99
@end
