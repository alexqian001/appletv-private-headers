/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"
#import "CoreDAV-Structs.h"

@class NSString;
@protocol CoreDAVSVRLookupTaskDelegate;

@interface CoreDAVSRVLookupTask : CoreDAVTask {
	NSString *_serviceString;	// 104 = 0x68
	NSString *_srvHost;	// 108 = 0x6c
	int _srvPort;	// 112 = 0x70
	CFHostRef _host;	// 116 = 0x74
}
@property(assign, nonatomic) id<CoreDAVSVRLookupTaskDelegate> delegate;	// @dynamic
@property(retain, nonatomic) NSString *srvHost;	// G=0x317a9079; S=0x317a96cd; @synthesize=_srvHost
@property(assign, nonatomic) int srvPort;	// G=0x317a9059; S=0x317a9069; @synthesize=_srvPort
- (id)initWithServiceString:(id)serviceString;	// 0x317a93bd
- (id)_parseDNSReply:(XXStruct_uGjhZD *)reply;	// 0x317a91c1
- (void)dealloc;	// 0x317a940d
- (id)description;	// 0x317a92d5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x317a9479
- (void)finishWithSRVLookupResults:(id)srvlookupResults;	// 0x317a90f9
- (void)performCoreDAVTask;	// 0x317a9089
// declared property setter: - (void)setSrvHost:(id)host;	// 0x317a96cd
// declared property setter: - (void)setSrvPort:(int)port;	// 0x317a9069
// declared property getter: - (id)srvHost;	// 0x317a9079
- (void)srvLookupForHost:(id)host forService:(id)service;	// 0x317a953d
// declared property getter: - (int)srvPort;	// 0x317a9059
- (void)tearDownResources;	// 0x317a965d
@end
